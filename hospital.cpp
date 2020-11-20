#include <iostream>
#include <string>
#include <map>
using namespace std;

void hospital(map<string, int> attack_power, int health_points)
{
  if (attack_power.size() = 3)
  {
    cout << "Opps! You inventory is full! Use what you got to hunt some monsters down first!" << endl;
  }
  else 
  {
    string health_power[10] = {"First-aid kit", "endorphins shot", "glucose-D", "Vitamin-C tablets", "oxygen pack",
                             "ketamine shot", "epinephrin shot", "scapel", "syringe", "surgical drill machine"};
  int hp_sp_increase[10] =  {50, 32, 28, 15, 30, 20, 30, 40, 14, 54};
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
  if (input > 3)
  {
    cout << "invalid input" << endl;
  }
  else
  {
    switch (input)
    {
      case 1: //if first one is chosen then the health/superpower is increased accordingly.
      cout << "You have chosen the first option." << endl;
      if (random_option1 < 5)
      {
        cout << "You get " << health_power[random_option1] << " with " << hp_sp_increase[random_option1] << " health points" << endl;
        health_points += hp_sp_increase[random_option1];
        cout << "Your health is increased to " << health_points << endl;
      }
      else
      {
        cout << "You get " << health_power[random_option1] << " with attack power of " << hp_sp_increase[random_option1] << endl;
        attack_power[health_power[random_option1]] = hp_sp_increase[random_option1];
        cout << health_power[random_option1] << " is added to you inventory, you may use it during war with monsters " << endl;
      }
      break;

      case 2:
      cout << "You have chosen the second option." << endl;
      if (random_option2 < 5)
      {
        cout << "You get " << health_power[random_option2] << " with " << hp_sp_increase[random_option2] << " health points" << endl;
        health_points += hp_sp_increase[random_option2];
        cout << "Your health is increased to " << health_points << endl;
      }
      else
      {
        cout << "You get " << health_power[random_option2] << " with attack power of " << hp_sp_increase[random_option2] << endl;
        attack_power[health_power[random_option2]] = hp_sp_increase[random_option2];
        cout << health_power[random_option2] << " is added to you inventory, you may use it during war with monsters " << endl;
      }
      break;

      case 3:
      cout << "You have chosen the third option." << endl;
      if (random_option3 < 5)
      {
        cout << "You get " << health_power[random_option3] << " with " << hp_sp_increase[random_option3] << " health points" << endl;
        health_points += hp_sp_increase[random_option3];
        cout << "Your health is increased to " << health_points << endl;
      }
      else
      {
        cout << "You get " << health_power[random_option3] << " with attack power of " << hp_sp_increase[random_option3] << endl;
        attack_power[health_power[random_option3]] = hp_sp_increase[random_option3];
        cout << health_power[random_option3] << " is added to you inventory, you may use it during war with monsters " << endl;
      }
      break;
    }
  }
  }
}
  
