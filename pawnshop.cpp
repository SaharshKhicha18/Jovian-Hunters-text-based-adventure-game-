//pawnshop function
#include <iostream>
#include <string>
#include <vector>
#include "Jovian.h"
using namespace std;

void pawnshop(vector<string> &inventory_p, vector<int> &inventory_pvalue, int &health_points)
{
    //array with health (first 4) and power (5th to 10th item) increasing items. 
    string health_power[10] = {"Skele-Gro", "Wiggenweld_Potion", "Pepperup_Potion", "Draught_of_Peace", "Silver_knife",
                               "guam_potion", "Grimy_guam", "Zamorak_brew", "Saradomin_brew", "Battlemage"};
    //array with the values of health and power
    int hp_sp_increase[10] =  {25, 50, 28, 35, 30, 20, 32, 25, 37, 64};
    srand (time(0));
    //generating 3 random numbers
    int random_option1 = rand() % 10; //random number between 0 and 9.
    int random_option2 = rand() % 10;
    int random_option3 = rand() % 10;
    
    //giving 3 random options from the pawn shop to choose 
    cout << "Input " << 1 << " to pick " << health_power[random_option1];
    if (random_option1 < 4){
      cout << ". This will revive your health points" << endl;
    }
    else{
      cout << ". This will be loaded to your inventory for future monster attacks" << endl;
    }
    cout << "Input " << 2 << " to pick " << health_power[random_option2];
    if (random_option2 < 4){
      cout << ". This will revive your health points" << endl;
    }
    else{
      cout << ". This will be loaded to your inventory for future monster attacks" << endl;
    }
    cout << "Input " << 3 << " to pick " << health_power[random_option3];
    if (random_option3 < 4){
      cout << ". This will revive your health points" << endl;
    }
    else{
      cout << ". This will be loaded to your inventory for future monster attacks" << endl; //description of what happens with the item
    }
    int input;
    cout << "Choose from 1, 2 or 3 -> ";
    cin >> input;
    //invalid input criteria
    while (input > 3 || input < 1)
    {
      cout << "Invalid input" << endl;
      cin >> input;
    }
    if (input <= 3 )
    {
      switch (input)
      {
        case 1: //if first one is chosen then the health/superpower is increased accordingly.
        cout << "You have chosen the first option." << endl;
        if (random_option1 < 4)
        {
          if (health_points >= 120)
          {
            //if health reaches max, which is defined to be 120, cannot increase further
            cout << "Ooooo! Your health is full! Please come back when your health is low" << endl;
          }
          else
          {
            cout << "You get " << health_power[random_option1] << " with " << hp_sp_increase[random_option1] << " health points" << endl;
            health_points += hp_sp_increase[random_option1];
            if (health_points > 120)
              health_points = 120; //if health increased beyond over 120, set it to 120.
            cout << "Your health is increased to " << health_points << endl;
          }
        }
        else
        {
          if (inventory_p.size() == 3)
          {
            cout << "Opps! You inventory is full! Use what you got to hunt some monsters down first!" << endl;
          }
          else
          {
            cout << "You get " << health_power[random_option1] << " with attack power of " << hp_sp_increase[random_option1] << endl; //showing what the user gets
            inventory_p.push_back(health_power[random_option1]); //adding items to the inventory
            inventory_pvalue.push_back(hp_sp_increase[random_option1]); // adding item's value to inventory
            cout << health_power[random_option1] << " is added to you inventory." << endl; //confirmation of addition to the inventory
            cout << endl;
          }
        }
        break;

        case 2: //same as above, but here when second option is chosen
        cout << "You have chosen the second option." << endl;
        if (random_option2 < 4)
        {
          if (health_points >= 120)
          {
            cout << "Ooooo! Your health is full! Please come back when your health is low" << endl;
          }
          else
          {
            cout << "You get " << health_power[random_option2] << " with " << hp_sp_increase[random_option2] << " health points" << endl;
            health_points += hp_sp_increase[random_option2];
            if (health_points > 120)
              health_points = 120;
            cout << "Your health is increased to " << health_points << endl;
          }
        }
        else
        {
          if (inventory_p.size() == 3)
          {
            cout << "Opps! You inventory is full! Use what you got to hunt some monsters down first!" << endl;
          }
          else
          {
            cout << "You get " << health_power[random_option2] << " with attack power of " << hp_sp_increase[random_option2] << endl;
            inventory_p.push_back(health_power[random_option2]);
            inventory_pvalue.push_back(hp_sp_increase[random_option2]);
            cout << health_power[random_option2] << " is added to you inventory." << endl;
            cout << endl;
          }
        }
        break;

        case 3: //same as above, but here is when third option is chosen
        cout << "You have chosen the third option." << endl;
        if (random_option3 < 4)
        {
          if (health_points >= 120)
          {
            cout << "Ooooo! Your health is full! Please come back when your health is low" << endl;
          }
          else
          {
            cout << "You get " << health_power[random_option3] << " with " << hp_sp_increase[random_option3] << " health points" << endl;
            health_points += hp_sp_increase[random_option3];
            if (health_points > 120)
              health_points = 120;
            cout << "Your health is increased to " << health_points << endl;
          }
        }
        else
        {
          if (inventory_p.size() == 3)
          {
            cout << "Opps! You inventory is full! Use what you got to hunt some monsters down first!" << endl;
          }
          else
          {
            cout << "You get " << health_power[random_option3] << " with attack power of " << hp_sp_increase[random_option3] << endl;
            inventory_p.push_back(health_power[random_option3]);
            inventory_pvalue.push_back(hp_sp_increase[random_option3]);
            cout << health_power[random_option3] << " is added to you inventory." << endl;
            cout << endl;
          }
        }
        break;
      }
    }
  }
