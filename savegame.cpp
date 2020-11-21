#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Jovian.h"
using namespace std;

void savegame(int &charhp, string &charname, vector<string> &inventory_p, vector<int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp, vector<int> &monster_ap, int &gamepoints)
{
  string filename = "Saved_games/" + charname;
  ofstream fout;
  fout.open(filename);
  if (fout.fail()){
    cout << "The game progress cannot be saved, You will need to restart in you next turn";
  }
  fout << charhp << endl;
  fout << charname << endl;
  for (int i = 0; i < inventory_p.size(); i++)
  {
    fout << inventory_p[i] << " ";
  }
  fout << endl;
  for (int i = 0; i < inventory_pvalue.size(); i++)
  {
    fout << inventory_pvalue[i] << " ";
  }
  fout << endl;
  for (int i = 0; i < monsternames.size(); i++)
  {
    fout << monsternames[i] << " ";
  }
  fout << endl;
  for (int i = 0; i < monster_hp.size(); i++)
  {
    fout << monster_hp[i] << " ";
  }
  fout << endl;
  for (int i = 0; i < monster_ap.size(); i++)
  {
    fout << monster_ap[i] << " ";
  }
  fout << endl;
  fout << gamepoints << endl;
  fout.close();
}
