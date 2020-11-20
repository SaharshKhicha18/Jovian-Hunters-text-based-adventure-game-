#include <iostream>
#include <string>
#include <vector>
using namespace std;

void ammunationshop(vector<string> &inventory_p, vector<int> &inventory_pvalue)
{
  if (inventory_p.size() == 3)
  {
    cout << "Opps! You inventory is full! Use what you got to hunt some monsters down first!" << endl;
  }
  else
  {
    string health_power[10] = {"Ak-47", "Pan", "Copper Dagger", "Machine-gun", "Silver knife",
                               "S98 shotgun", "Pistol", "Kar-98 Sniper", "Grenade", "SMG-9"};
    int hp_sp_increase[10] =  {53, 20, 54, 45, 21, 14, 21, 25, 17, 65};
    srand (time(0));
    int random_option; //randomly choosing 3 for the given options and presenting it to user
    int random_option1 = rand() % 10; //random number between 0 and 9.
    int random_option2 = rand() % 10;
    int random_option3 = rand() % 10;
    cout << "Press " << 1 << " to pick " << health_power[random_option1] << endl;
    cout << "Press " << 2 << " to pick " << health_power[random_option2] << endl;
    cout << "Press " << 3 << " to pick " << health_power[random_option3] << endl;
    int input;
    cin >> input;
    while (input > 3)
    {
      cout << "invalid input" << endl;
      cin >> input;
    }
    if (input <= 3)
    {
      switch (input)
      {
        case 1: //if first one is chosen then the health/superpower is increased accordingly.
        cout << "You have chosen the first option." << endl;
        cout << "You get " << health_power[random_option1] << " with attack power of " << hp_sp_increase[random_option1] << endl;
        inventory_p.push_back(health_power[random_option1]);
        inventory_pvalue.push_back(hp_sp_increase[random_option1]);
        cout << health_power[random_option1] << " is added to you inventory." << endl;
        cout << "You may use it during war with monsters. " << endl;
        break;

        case 2:
        cout << "You have chosen the second option." << endl;
        cout << "You get " << health_power[random_option2] << " with attack power of " << hp_sp_increase[random_option2] << endl;
        inventory_p.push_back(health_power[random_option2]);
        inventory_pvalue.push_back(hp_sp_increase[random_option2]);
        cout << health_power[random_option2] << " is added to you inventory." << endl;
        cout << "You may use it during war with monsters. " << endl;
        break;

        case 3:
        cout << "You have chosen the third option." << endl;
        cout << "You get " << health_power[random_option3] << " with attack power of " << hp_sp_increase[random_option3] << endl;
        inventory_p.push_back(health_power[random_option3]);
        inventory_pvalue.push_back(hp_sp_increase[random_option3]);
        cout << health_power[random_option3] << " is added to you inventory." << endl;
        cout << "You may use it during war with monsters. " << endl;
        break;
      }
    }
  }
  }
