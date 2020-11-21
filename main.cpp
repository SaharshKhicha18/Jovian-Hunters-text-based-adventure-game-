#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <sstream>
#include <unistd.h>
#include "Jovian.h"
using namespace std;
//variables

int main()
{
  srand(time(0));
  //game variables
  int charap = 17;
  int charhp;
  string charname;
  vector<string> inventory_p = {};
  vector<int> inventory_pvalue = {};
  vector<string>monsternames = {};
  vector<int> monster_hp = {};
  vector<int> monster_ap = {};
  int gamepoints;
  int eventhap = 1;

  //ASCII Game title
  ifstream fin;
  fin.open("Jovian.txt");
  string lines;
  while (getline(fin, lines)){
    cout << lines << endl;
  }
  fin.close();
  sleep(1);
  cout << endl;

  cout << "Welcome to Jovian Hunters" << endl;
  cout << "Input 1 to start a new game" << endl;
  cout << "Input 2 to load game" << endl;
  cout << "Input 3 to see how to play" << endl;
  cout << "Input 4 to exit the game" << endl;
  cout << "Input 1, 2, 3 or 4 -> ";
  int input;
  cin >> input;
  while (input < 1 && input >4){
    cout << "Invalid input!" << endl;
    cout << "Input again please -> ";
    cin >> input;
  }
  while (input >= 1 && input <= 4)
  {
    if (input == 1)
    {
      //start a new game
      eventhap = 1;
      gamepoints = 0;
      string direc;
      string op[3] = {"Thunderstrike", "DegenerationX", "Cresenta"};
      monster_hp = {50, 45, 43, 60, 63, 55, 70, 65, 63, 70, 65, 63};
      monster_ap = {5, 7, 4, 12, 19, 21, 34, 25, 24, 30, 29, 24};
      monsternames = {"Red_Bull", "Fire_Starter", "Gyros_Platter","Devil-Eye_Joe", "Lonely_Island", "Rasta-guana","Boom_Chick-a", "Hypno_Toad", "Rocksteady","Blue_Eyes_White_Dragon", "Derpygama", "Squirrel_Nut_Zipper"};
      charhp = 100;

      //Introduction of the game
      cout << "Welcome to the Jovian Hunters! An adventurous journey." <<endl;
      cout << "You are a warrier who must save the precious jewel \"KOHINOOR DIAMOND\" from the monsters who invaded the city." << endl;
      cout << "You will have to fight and kill 8 monsters to get to the diamond." << endl;
      cout << "Several places in the city hospitals, ammunition shop etc. where you can revive your health points as well as attack power using different weapons" <<endl;
      cout << endl;

      gamecharacters(charname, op);
      cout << "Choose your character name. You can choose you own name or choose the options provided to you by Jovian Hunters!" << endl;
      cout << endl;

      cout << charname << " choose a direction to begin. Input E, W, N, S for East, West, North and South respectively! -> ";
      cin >> direc;
      cout << endl;
      while (direc.length() != 1 || (direc.at(0) != 'E' && direc.at(0) != 'e' && direc.at(0) != 'W' && direc.at(0) != 'w' && direc.at(0) != 'S' && direc.at(0) != 's' && direc.at(0) != 'N' && direc.at(0) != 'n')){
        cout << "Invalid direction! Come on you can do better. Choose from the above directions -> ";
        cin >> direc;
        cout << endl;
      }
      if (direc.at(0) == 'E' && direc.at(0) == 'e'){
        cout << "Well " << charname << " you are heading towards the East. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
      }
      if (direc.at(0) == 'W' && direc.at(0) == 'w'){
        cout << "Well " << charname << " you are heading towards the West. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
      }
      if (direc.at(0) == 'S' && direc.at(0) == 's'){
        cout << "Well " << charname << " you are heading towards the South. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
      }
      if (direc.at(0) == 'N' && direc.at(0) == 'n'){
        cout << "Well " << charname << " you are heading towards the North. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
      }
      break;
    }
    if (input == 2)
    {
      string filename;
      cout << "Input your character name from your previous turn to load the game" << endl;
      cin >> filename;
      filename = "Saved_games/" + filename;
      ifstream fin;
      fin.open(filename);
      if (fin.fail())
      {
        cout << "No saved data with that name exists." << endl;
        cout << "Input 1 to start a new game" << endl;
        cout << "Input 2 to load game with another name" << endl;
	cout << "Input 3 to see how to play" << endl;
	cout << "Input 4 to exit the game."<<endl;
        cout << "Input 1, 2, 3 or 4 -> ";
        cin >> input;
        fin.close();
      }
      else
      {
        loadgame(filename, charhp, charname, inventory_p, inventory_pvalue, monsternames, monster_hp, monster_ap, gamepoints);
        break;
      }

    }
    if (input == 3)
    {
      cout << "Game instructions" << endl;
      cout << "Input 1 to start a new game" << endl;
      cout << "Input 2 to load game" << endl;
      cout << "Input 3 to see how to play" << endl;
      cout << "Input 4 to exit the game" << endl;
      cout << "Input 1, 2, 3, or 4 -> ";
      cin >> input;
    }
    if (input == 4)
    {
      return 0;
    }
  }

    while (charhp >0 && gamepoints < 80){
      random(gamepoints, charhp, charap, inventory_p, inventory_pvalue, monsternames, monster_hp, monster_ap, eventhap, charname);
      if (eventhap == 1 && charhp>0){
        cout << "Lets move forward as you still have " << 80 - gamepoints << " steps to get to the Kohinoor"<<endl;
      }
      cout << endl;
    }
    if (gamepoints >= 80){
      cout << "Congratulations!! " << charname << " You have done what many find impossible." << endl;
      cout << "Saved the KOHINOOR from the evil." << endl;
      cout << "After defeating 8 dangerous monsters, you reach the stage where the bright sunlight reflects through KOHINOOR's edges striking your eyes. "<< endl;
      cout << "You truly deserve to be rewarded by the Queen of England." <<endl;
      ifstream fin;
      fin.open("winning.txt");
      string lines;
      while (getline(fin, lines)){
        cout << lines << endl;
      }
      fin.close();

  }
 return 0;
}
