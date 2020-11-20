#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <Jovian.h>
using namespace std;

int main()
{
int input;
cin >> input;
switch ( input )
{
case 1:
  //start a new game
    void Gamerun( int &charhp, int &charap, vector<string>& inventory_p, vector<int>& inventory_pvalue, vector<string>& monsternames, vector<vector<int>>
& monsters_info);
  break;
case 2:
  //load game from saved data
  break;
case 3:
  //open game manual
  break;
case 4:
  return 0;
  break;
}

}



