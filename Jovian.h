//Jovian.h
#ifndef JOVIAN_H
#define JOVIAN_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//variables
int charap;
int charhp;
string charname;
vector<string> inventory_p;
vector<int> inventory_pvalue;
vector<vector<int>> monsters_info;
vector<string> monsternames;
string op[3];
int eventhap;
int gamepoints;

//functions
void Gamerun( int &charhp, int &charap, vector<string>& inventory_p, vector<int>& inventory_pvalue, vector<string>& monsternames, vector<vector<int>>
& monsters_info);
void gamecharacters(string &charname);
void random(int &gamepoints);
void war( int &charhp, int &charap, vector<string>& inventory_p, vector<int>& inventory_pvalue , vector<string>& monsternames, vector<vector<int>>& monsters_info)
void hospital(vector<string> &inventory_p, vector<int> &inventory_pvalue, int &health_points);
void pawnshop(vector<string> &inventory_p, vector<int> &inventory_pvalue, int &health_points);
void ammunationshop(vector<string> &inventory_p, vector<int> &inventory_pvalue);
string gamemanual();
#endif
