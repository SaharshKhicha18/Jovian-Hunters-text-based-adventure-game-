#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Jovian.h"
using namespace std;

void savegame(int &charhp, string &charname, vector<string> &inventory_p, vector<int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp, vector<int> &monster_ap, int &gamepoints)
{
  string filename = "Saved_games/" + charname; //location of the file
  ofstream fout;
  fout.open(filename);
  if (fout.fail()){
    cout << "The game progress cannot be saved, You will need to restart in you next turn";
  }
  fout << charhp << endl; //player health points
  fout << charname << endl; //player name
  for (int i = 0; i < inventory_p.size(); i++)
  {
    fout << inventory_p[i] << " "; //save the inventory weapons
  }
  fout << endl;
  for (int i = 0; i < inventory_pvalue.size(); i++)
  {
    fout << inventory_pvalue[i] << " "; //save the inventory weapon values
  }
  fout << endl;
  for (int i = 0; i < monsternames.size(); i++)
  {
    fout << monsternames[i] << " "; //save updated monster names
  }
  fout << endl;
  for (int i = 0; i < monster_hp.size(); i++)
  {
    fout << monster_hp[i] << " "; //save updated monster health points
  }
  fout << endl;
  for (int i = 0; i < monster_ap.size(); i++)
  {
    fout << monster_ap[i] << " "; //save updated monster attack power
  }
  fout << endl;
  fout << gamepoints << endl; //save the gamepoints
  fout.close();
}
