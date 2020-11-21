//ammuniation function
#include <iostream>
#include <string>
#include <vector>
#include "Jovian.h"
using namespace std;

void ammunationshop(vector<string> &inventory_p, vector<int> &inventory_pvalue)
{
  if (inventory_p.size() == 3)
  {
    cout << "Opps! You inventory is full! Use what you got to hunt some monsters down first!" << endl;
  }
  else
  {
    //array of the ammunations
    string power[10] = {"Ak-47", "Pan", "Copper_Dagger", "Machine-gun", "Specter",
                               "S98_shotgun", "Pistol", "Kar-98_Sniper", "Grenade", "SMG-9"};
    //array of the ammunation value
    int sp_increase[10] =  {53, 20, 54, 45, 28, 38, 22, 35, 65, 40};
    srand (time(0));
    //generating 3 random numbers
    int random_option1 = rand() % 10; //random number between 0 and 9.
    int random_option2 = rand() % 10;
    int random_option3 = rand() % 10;
    //giving 3 random ammunations
    cout << "Input " << 1 << " to pick " << power[random_option1] << endl;
    cout << "Input " << 2 << " to pick " << power[random_option2] << endl;
    cout << "Input " << 3 << " to pick " << power[random_option3] << endl;
    int input;
    cout << "Choose from 1, 2 or 3 -> ";
    cin >> input;
    //invalid input criteria
    while (input > 3 || input < 1)
    {
      cout << "Invalid input" << endl;
      cin >> input;
    }
    if (input <= 3)
    {
      switch (input)
      {
        case 1: //adding the first option to the inventory
        cout << "You have chosen the first option." << endl;
        cout << "You get " << power[random_option1] << " with attack power of " << sp_increase[random_option1] << endl; //Showing what the user gets
        inventory_p.push_back(power[random_option1]); //adding the ammunation to the inventory
        inventory_pvalue.push_back(sp_increase[random_option1]); // adding to the ammunation's power to the inventory
        cout << power[random_option1] << " is added to you inventory." << endl; //confirmation that the item is added to the inventory
        cout << endl;
        break;

        case 2: //same as above but for second option
        cout << "You have chosen the second option." << endl;
        cout << "You get " << power[random_option2] << " with attack power of " << sp_increase[random_option2] << endl;
        inventory_p.push_back(power[random_option2]);
        inventory_pvalue.push_back(sp_increase[random_option2]);
        cout << power[random_option2] << " is added to you inventory." << endl;
        cout << endl;
        break;

        case 3: //same as above but for third option
        cout << "You have chosen the third option." << endl;
        cout << "You get " << power[random_option3] << " with attack power of " << sp_increase[random_option3] << endl;
        inventory_p.push_back(power[random_option3]);
        inventory_pvalue.push_back(sp_increase[random_option3]);
        cout << power[random_option3] << " is added to you inventory." << endl;
        cout << endl;
        break;
      }
    }
  }
  }
