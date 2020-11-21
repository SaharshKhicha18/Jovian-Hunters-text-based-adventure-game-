#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Jovian.h"
#include <unistd.h>
using namespace std;

void random(int &gamepoints, int &charhp, int &charap, vector<string> &inventory_p, vector <int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp,
vector<int> &monster_ap, int eventhap, string &charname)
{
  int randnum = rand() % 26;
  if (randnum <=4)
  {
    randnum = 1;
  }
  if (randnum >= 6 && randnum <= 8)
  {
    randnum = 6;
  }
  if (randnum >= 9 && randnum <= 11)
  {
    randnum = 9;
  }
  if (randnum >= 12 && randnum <= 13)
  {
    randnum = 12;
  }
  switch (randnum){
    case 1:
      //monsters will appear
      cout << "Beware! There is a monster ahead!" << endl;
      cout << "*********************************" << endl;
      war(charhp, charap, inventory_p, inventory_pvalue, monsternames, monster_hp, monster_ap);
      if (charhp>0)
      {
        gamepoints +=10;
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
      hospital(inventory_p, inventory_pvalue, charhp);
      break;
    case 9:
      //ammunation will appear
      cout << "There is an ammunation shop at the end of this road. You can collect weapons to put it in your inventory." <<endl;
      cout << "*********************************************************************************************************" << endl;
      cout << endl;
      ammunationshop(inventory_p, inventory_pvalue);
      break;
    case 12:
      //pawn shop will appear
      cout << "Woah! A pawn shop ahead. Can help you revive heath points and attack power." << endl;
      cout << "***************************************************************************" << endl;
      cout << endl;
      pawnshop(inventory_p, inventory_pvalue, charhp);
      break;
    default:
      //keep walking
      cout << "Lets keep walking. Lets see what you find!" << endl;
      cout << "|||||||||||||||||||||||||||||||||||||" << endl;
      sleep(1);
      eventhap = 0;
      break;
    }
    if (randnum <= 12)
    {
      savegame(charhp, charname, inventory_p, inventory_pvalue, monsternames, monster_hp, monster_ap, gamepoints);
    }
}
