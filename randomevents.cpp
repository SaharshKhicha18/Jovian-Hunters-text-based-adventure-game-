#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Jovian.h"
#include <unistd.h> //for sleep function
using namespace std;

//random function to generate random events during the game
void random(int &gamepoints, int &charhp, int &charap, vector<string> &inventory_p, vector <int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp,
vector<int> &monster_ap, int eventhap, string &charname)
{
  int randnum = rand() % 26;
  if (randnum <=4) //specifies 5 numbers when war event will happen
  {
    randnum = 1;
  }
  if (randnum >= 6 && randnum <= 8) //specifies 3 numbers when hospital will appear in the game
  {
    randnum = 6;
  }
  if (randnum >= 9 && randnum <= 11) //specifies 3 numbers when hospital will appear in the game
  {
    randnum = 9;
  }
  if (randnum >= 12 && randnum <= 13) //specifies 3 numbers when hospital will appear in the game
  {
    randnum = 12;
  }
  switch (randnum){ //generating random events
    case 1:
      //monsters will appear
      cout << "Beware! There is a monster ahead!" << endl;
      cout << "*********************************" << endl;
      war(charhp, charap, inventory_p, inventory_pvalue, monsternames, monster_hp, monster_ap); //war function
      if (charhp>0) //to check if player is alive
      {
        gamepoints +=10; //with every monster killed, player earns 10 gamepoints
      }
      else
      {
        cout << endl;
        //cout << "Game over" << endl;
        ifstream fin;
        fin.open("gameover.txt");
        string lines;
        while (getline(fin, lines)){
          cout << lines << endl;
        }
        fin.close();
      }
      break;
    case 6:
      //hospital will appear
      cout << "There is a hospital ahead!" << endl;
      cout << "**************************" << endl;
      cout << endl;
      cout << "A chance for you to revive your health points" << endl;
      hospital(inventory_p, inventory_pvalue, charhp); //hospital function
      break;
    case 9:
      //ammunation will appear
      cout << "There is an ammunation shop at the end of this road. You can collect weapons to put it in your inventory." <<endl;
      cout << "*********************************************************************************************************" << endl;
      cout << endl;
      ammunationshop(inventory_p, inventory_pvalue); //ammunationshop function
      break;
    case 12:
      //pawn shop will appear
      cout << "Woah! A pawn shop ahead. Can help you revive heath points and attack power." << endl;
      cout << "***************************************************************************" << endl;
      cout << endl;
      pawnshop(inventory_p, inventory_pvalue, charhp); //pawnshop function
      break;
    default: 
      //keep walking
      cout << "Lets keep walking. Lets see what you find!" << endl;
      cout << "|||||||||||||||||||||||||||||||||||||" << endl;
      sleep(1);
      eventhap = 0;
      break;
    }
    if (randnum <= 12) //save only if an event occurs
    {
      savegame(charhp, charname, inventory_p, inventory_pvalue, monsternames, monster_hp, monster_ap, gamepoints); //save function to save game after every event
    }
}
