//Jovian.h

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
#ifndef JOVIAN_H
#define JOVIAN_H


//functions
void gamecharacters(string &charname, string op[3]);

void war( int &charhp, int &charap, vector<string>& inventory_p, vector<int>& inventory_pvalue , vector<string>& monsternames, vector<int> &monster_hp,
vector<int> &monster_ap);

void hospital(vector<string> &inventory_p, vector<int> &inventory_pvalue, int &health_points);

void pawnshop(vector<string> &inventory_p, vector<int> &inventory_pvalue, int &health_points);

void ammunationshop(vector<string> &inventory_p, vector<int> &inventory_pvalue);

void gamemanual();

void random(int &gamepoints, int &charhp, int &charap, vector<string> &inventory_p, vector <int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp,vector<int> &monster_ap, int eventhap, string &charname);

void loadgame(string filename, int &charhp, string &charname, vector<string> &inventory_p, vector<int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp, vector<int> &monster_ap, int &gamepoints);

void savegame(int &charhp, string &charname, vector<string> &inventory_p, vector<int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp, vector<int> &monster_ap, int &gamepoints);
#endif
