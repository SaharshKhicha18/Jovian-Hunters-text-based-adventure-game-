#include <iostream>
#include "events.h"
#include "globalvar.h"
#include <map>
// if inventory is vector 
#include <vector>
using namespace std;
// what if the inventory consist of two vectors 
void war( charhp, charap, vector<string> inventory_p, vector<int> inventory_pvalue , foehp, forap, string monster){
  while (charhp >0 && foehp >0){
    //player's turn
    int choosein, i = 1, damage = 0; 
    if (inventory_p.size() == 0){
      cout << "Your inventory is empty" << endl;
    }
    if (inventory_p.size() = 1){
      cout << " 1 " << "You only have " << inventory_p[0] << "with damage of " << inventory_pvalue[0] << "." <<endl;
      //vector<string>::iterator itr;
      //for(itr = inventory_p.begin(); itr != inventory_p.end(); itr++){
      //cout << i << ") " << "You only have " << (*itr).first << "with damage of " << (*itr).second << "." <<endl;
      }
      cout << "Input 1 to pick the weapon" <<endl;
      cout << "Input 0 if you do not want to use any weapon" <<endl;
      cout << "Input a number?(1 or 0)";
      cin >> choosein;
      bool flag = true;
      while (flag == true){
        if (choosein <=1 && choosein >=0){
          if (choosein == 1){
            cout << "You are attacking the "<< monster << " with a " << " << ; inventory_p[0]
            damage = inventory_pvalue[0]; //figure this out as well
            foehp -= damage; 
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
    if (inventory_p.size() <=3 && inventory_p.size() > 1){
      i = 0;
      for(int index = 0; index < inventory_p.size(); index++) {
      cout << i+1 << ") " << "You have " << inventory_p[i] << "with damage of " << inventory_pvalue[i] << "." << endl;
      i++;
      }
      cout << "Choose one option number from above?";
      for (int count = 1; count <= i; count++){
         cout << "Input " << count <<  " to pick the weapon" <<endl;
      }
      cout << "Input 0 if you do not want to use any weapon" <<endl;
    }
    cin >> choosein;
    if (choosein == 1){
      
    //monster's turn
