#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


void war( int charhp, int charap, vector<string> inventory_p, vector<int> inventory_pvalue , vector<string> monsternames, vector<vector<int>> monsters_info){
  int choosein; int damage = 0;
  srand(time(0));
  int randommonster = rand() % (monsternames.size()-1);
  int foehp = monsters_info[randommonster][0];
  int foeap = monsters_info[randommonster][1];
  cout << foehp << endl;
  cout << foeap << endl;
  while (charhp > 0 && foehp > 0)
  {
    //monster attacks

    cout << monsternames[randommonster] << " is attacking you!!! " << " watch out!! " << endl;
    charhp -= foeap;
    if (charhp <=0)
    {
      cout << "Boi!!! You died!" << endl;
      break;
    }
    else
    {
      cout << "Now its your time to take revenge!" <<endl;
      cout << "Your hp is " << charhp << endl;
      cout << "Its your chance to redeem youself!" << endl;
    }


    //player's turn
    if (inventory_p.size() == 0)
    {
      cout << "Your inventory is empty" << endl;
      cout << "You got only hands left;)" << endl;
      cout << "Input 0 to punch!: ";
    }
    else
    {
      int i = 0;
      for(int index = 0; index < inventory_p.size(); index++)
      {
        cout << i+1 << ") " << "You have " << inventory_p[i] << " with damage of " << inventory_pvalue[i] << "." << endl;
        i++;
      }
      cout << "Choose one option number from above?" << endl;
      for (int count = 1; count <= i; count++){
         cout << "Input " << count <<  " to pick the " << inventory_p[count-1] <<endl;
      }
      cout << "Input 0 if you do not want to use any weapon" <<endl;
    }
    cin >> choosein;
    while (choosein > inventory_p.size())
    {
      cout << "Invalid input!" << endl;
      cout << "You got only hands left;)" << endl;
      cout << "Input 0 to punch!: ";
      cin >> choosein;
    }
    if (choosein == 0)
    {
      cout << "You attack the monster with your hands" << endl;
      damage = charap;
      foehp -= damage;
      if (foehp <= 0)
      {
        cout << "You killed that crap!" << endl;
        break;
      }
      else
      {
        cout << monsternames[randommonster] << " is still alive. You might have to push harder!" << endl;
        cout << endl;
      }
    }
    if (choosein == 1 || choosein == 2 || choosein == 3)
    {
      cout << "You are attacking the "<< monsternames[randommonster] << " with a " << inventory_p[choosein-1] << endl;
      damage = inventory_pvalue[choosein-1];
      foehp -= damage;
      inventory_p.erase (inventory_p.begin()+(choosein-1));
      inventory_pvalue.erase (inventory_pvalue.begin()+(choosein-1));
      if (foehp <= 0)
      {
        cout << "You killed that crap!" << endl;
        break;
      }
      else
      {
        cout << monsternames[randommonster] << " is still alive. You might have to push harder!" << endl;
        cout << endl;
      }
    }


    }
  }


int main(){
  int charhp = 100;
  int charap = 20;
  vector<string> inventory_p {"gunny bhai", "sunny bhai", "super_sunny_gunny"};
  vector<int> inventory_pvalue {32, 11, 13};
  vector<vector<int>> monsters_info {{40, 5}, {45, 7}, {43, 4},{60, 12}, {63, 19}, {55, 21},{70, 34}, {65, 29}, {63, 24},{70, 34}, {65, 29}, {63, 24}};
  vector<string> monsternames = {"Red Bull", "Fire Starter", "Gyros Platter","Devil-Eye Joe", "Lonely Island", "Rasta-guana","Boom Chick-a", "Hypno Toad", "Rocksteady","Blue Eyes White Dragon", "Derpygama", "Squirrel Nut Zipper"};
  war( charhp, charap, inventory_p, inventory_pvalue, monsternames, monsters_info);
  }
