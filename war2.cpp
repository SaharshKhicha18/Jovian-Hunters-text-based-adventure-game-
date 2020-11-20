#include <iostream>
//#include "events.h"
//#include "globalvar.h"
// if inventory is vector
#include <vector>
using namespace std;
// what if the inventory consist of two vectors
void war( int charhp, int charap, vector<string> inventory_p, vector<int> inventory_pvalue , int foehp, int foeap, vector<string> monsternames, vector<vector<int>> monsters_info){
  int choosein; int damage = 0;
  srand(time(0));
  int randommonster = rand() % (monsternames.size()-1);
  //cout << randommonster << endl;
  foehp = monsters_info[randommonster][0];
  foeap = monsters_info[randommonster][1];
  cout << foehp << endl;
  cout << foeap << endl;
  while (charhp > 0 && foehp > 0){
    //player's turn

    if (inventory_p.size() == 0){
      cout << "Your inventory is empty" << endl;
      cout << "You got only hands left;)" << endl;
      cout << "Input 0 to punch!: ";
      cin >> choosein;
      cout << endl;
      while (choosein == 0)
      {
        cout << "You attack the monster with your hands" << endl;
        damage = charap;
        foehp -= damage;
        cout << endl;
        cout << endl;
        //monster attacks
        cout << monsternames[randommonster] << " is attacking you!!! " << " watch out!! " << endl;
        charhp -= foeap;
        if (charhp <= 0 || foehp <= 0)
        {
          if (charap <= 0)
          {
            cout << "Boi!!! You died!" << endl;
            break;
          }
          else
          {
            cout << "You killed that crap!" << endl;
            break;
          }
        }
        else
        {
          cout << "Your hp is " << charhp << endl;
          cout << "Its your chance to redeem youself!" << endl;
          cin >> choosein;
          cout << endl;
        }
      }



    }
    if (inventory_p.size() == 1){
      cout << "1" << ") " << "You only have " << inventory_p[0] << " with damage of " << inventory_pvalue[0] << "." <<endl;
      cout << "Input 1 to pick the weapon" << endl;
      cout << "Input 0 if you do not want to use any weapon" <<endl;
      cout << "You can only use each weapon once!" << endl;
      cout << "Input a number?(1 or 0): ";
      cin >> choosein;
      cout << endl;
      bool flag = true;
      while (flag == true){
        if (choosein <=1 && choosein >=0){
          if (choosein == 1){
            if (inventory_p.size() == 0)
            {
              break;
            }
            cout << "You are attacking the "<< monsternames[randommonster] << " with a " << inventory_p[0] << endl;
            damage = inventory_pvalue[0];
            foehp -= damage;
            inventory_p.erase (inventory_p.begin());
            inventory_pvalue.erase (inventory_pvalue.begin());
            cout << endl;
            cout << endl;
            //monster attacks
            cout << monsternames[randommonster] << " is attacking you!!! " << " watch out!! " << endl;
            charhp -= foeap;
            if (charhp <= 0 || foehp <= 0)
            {
              if (charap <= 0)
              {
                cout << "Boi!!! You died!" << endl;
                break;
              }
              else
              {
                cout << "You killed that crap!" << endl;
                break;
              }
            }
            else
            {
              cout << "Your hp is " << charhp << endl;
              cout << "Its your chance to redeem youself!" << endl;
              cout << "You got only hands left;)" << endl;
              cout << "Input 0 to punch!: ";
              cin >> choosein;
              cout << endl;
            }
          }
          if (choosein == 0){
            cout << "You attack the monster with your hands" << endl;
            damage = charap;
            foehp -= damage;
            cout << endl;
            cout << endl;
            //monster attacks
            cout << monsternames[randommonster] << " is attacking you!!! " << " watch out!! " << endl;
            charhp -= foeap;
            if (charhp <= 0 || foehp <= 0)
            {
              if (charap <= 0)
              {
                cout << "Boi!!! You died!" << endl;
                break;
              }
              else
              {
                cout << "You killed that crap!" << endl;
                break;
              }

            }
            else
            {
              cout << "Your hp is " << charhp << endl;
              cout << "Its your chance to redeem youself!" << endl;
              cin >> choosein;
              cout << endl;
            }
          }
        }
        else{
          cout << "Oops! No such option in the inventory. Choose again: ";
          cin >> choosein;
          cout << endl;
        }
      }
    }

    if ((inventory_p.size()) > 1){
      int i = 0;
      for(int index = 0; index < inventory_p.size(); index++) {
      cout << i+1 << ") " << "You have " << inventory_p[i] << " with damage of " << inventory_pvalue[i] << "." << endl;
      i++;
      }
      cout << "Choose one option number from above?" << endl;
      for (int count = 1; count <= i; count++){
         cout << "Input " << count <<  " to pick the weapon" <<endl;
      }
      cout << "Input 0 if you do not want to use any weapon" <<endl;
    cin >> choosein;
    bool flag = true;
    while (flag == true){
      if (choosein <=3 && choosein >=0){
        if (choosein == 3){
          cout << "You are attacking the "<< monsternames[randommonster] << " with a " << inventory_p[2] << endl;
          damage = inventory_pvalue[2];
          foehp -= damage;
          inventory_p.erase (inventory_p.begin()+2);
          inventory_pvalue.erase (inventory_pvalue.begin()+2);
          cin >> choosein;
        }
        if (choosein == 2){
          cout << "You are attacking the "<< monsternames[randommonster] << " with a " << inventory_p[1] << endl;
          damage = inventory_pvalue[1];
          foehp -= damage;
          inventory_p.erase (inventory_p.begin()+1);
          inventory_pvalue.erase (inventory_pvalue.begin()+1);
          cin >> choosein;
        }
        if (choosein == 1){
          cout << "You are attacking the "<< monsternames[randommonster] << " with a " << inventory_p[0] << endl;
          damage = inventory_pvalue[0];
          foehp -= damage;
          inventory_p.erase (inventory_p.begin());
          inventory_pvalue.erase (inventory_pvalue.begin());
          cin >> choosein;
        }
        if (choosein == 0){
          cout << "You attack the monster with you hands" << endl;
          damage = charap;
          foehp -= damage;
        }
      }
      else{
        cout << "Oops! No such option in the inventory. Choose again: ";
        cin >> choosein;
      }
      }
    }
  }

  //monster's turn
}



int main(){
  int charhp = 100;
  int charap = 20;
  vector<string> inventory_p {"pistol"};
  vector<int> inventory_pvalue {10};
  int foehp = 70;
  int foeap = 45;
  string monster = "Bazuka";
  vector<vector<int>> monsters_info {{40, 5}, {45, 7}, {43, 4},{60, 12}, {63, 19}, {55, 21},{70, 34}, {65, 29}, {63, 24},{70, 34}, {65, 29}, {63, 24}};
  vector<string> monsternames = {"Red Bull", "Fire Starter", "Gyros Platter","Devil-Eye Joe", "Lonely Island", "Rasta-guana","Boom Chick-a", "Hypno Toad", "Rocksteady","Blue Eyes White Dragon", "Derpygama", "Squirrel Nut Zipper"};
  war( charhp, charap, inventory_p, inventory_pvalue, foehp, foeap, monsternames, monsters_info);
  }
