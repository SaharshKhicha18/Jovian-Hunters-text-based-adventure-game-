#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Jovian.h"
using namespace std;

//load previous game
void loadgame(string filename, int &charhp, string &charname, vector<string> &inventory_p, vector<int> &inventory_pvalue, vector<string> &monsternames, vector<int> &monster_hp, vector<int> &monster_ap, int &gamepoints)
{
    filename = "Saved_games/" + filename; // to save files in Saved_games folder
    ifstream fin;
    fin.open(filename);
    string lines;
    int linetracker = 1;
    while (getline(fin, lines))
    {
      if (linetracker == 1) //for first line
      {
        int items;
        istringstream iss(lines); 
        while (iss >> items)
        {
          charhp = items; //character health points 
        }
      }

      if (linetracker == 2) //for second line of text file
      {
        string items;
        istringstream iss(lines);
        while (iss >> items)
        {
          charname = items;
        }
      }

      if (linetracker == 3) // for third line of text file
      {
        string items;
        istringstream iss(lines);
        while (iss >> items)
        {
          inventory_p.push_back(items); //insert the value in the inventory vector
        }
      }

      if (linetracker == 4)
      {
        int items;
        istringstream iss(lines);
        while (iss >> items)
        {
          inventory_pvalue.push_back(items); //insert weapon value in the inventory vector
        }
      }

      if (linetracker == 5)
      {
        string items;
        istringstream iss(lines);
        while (iss >> items)
        {
          monsternames.push_back(items); 
        }
      }

      if (linetracker == 6)
      {
        int items;
        istringstream iss(lines);
        while (iss >> items)
        {
          monster_hp.push_back(items);
        }
      }

      if (linetracker == 7)
      {
        int items;
        istringstream iss(lines);
        while (iss >> items)
        {
          monster_ap.push_back(items);
        }
      }

      if (linetracker == 8)
      {
        int items;
        istringstream iss(lines);
        while (iss >> items)
        {
          gamepoints = items;
        }
      }
      linetracker++;
    }
    fin.close();

}
