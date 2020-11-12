#include <iostream>
using namespace std;

int hospital(int super_powers, int health_points)
{
  string health_power[10] = { "First-aid kit", "endorphins shot", "glucose-D", "Vitamin-C tablets", "oxygen pack"
                             "ketamine shot", "epinephrin shot", "scapel", "syringe", "surgical drill machine"  }; 
  int hp_sp_increase[10] =  {50, 32, 28, 15, 30, 20, 30, 40, 14, 54};
  int random_option; //randomly choosing 3 for the given options and presenting it to user
  random_option1 = rand() % 10;
  random_option2 = rand() % 10;
  random_option3 = rand() % 10;
  cout << "Press " << 1 << " for choosing " << health_power[random_option1];
  cout << "Press " << 2 << " for choosing " << health_power[random_option2];
  cout << "Press " << 3 << " for choosing " << health_power[random_option3];
  int input;
  cin >> input;
  if (input > 3)
  {
    cout << "invalid input" << endl;
  }
  else 
  {
    switch (input)
      case 1: //if first one is chosen then the health/superpower is increased accordingly.
      cout << "You have chosen the first option." << endl;
      cout << "You get " << health_power[random_option1] << endl;
      if (random_option1 < 5)
      {
        health_points += hp_sp_increase[random_option1];
        cout << "Your health is increased to " << health_points << endl; 
      }
      else
      {
        super_powers += hp_sp_increase[random_option1];
        cout << "Your superpowers have increased to " << super_powers << endl;
      }
      break;
    
      case 2:
      cout << "You have chosen the first option." << endl;
      cout << "You get " << health_power[random_option2] << endl;
      if (random_option2 < 5)
      {
        health_points += hp_sp_increase[random_option2];
        cout << "Your health is increased to " << health_points << endl; 
      }
      else
      {
        super_powers += hp_sp_increase[random_option2];
        cout << "Your superpowers have increased to " << super_powers << endl;
      }
      break;
    
      case 3:
      cout << "You have chosen the first option." << endl;
      cout << "You get " << health_power[random_option3] << endl;
      if (random_option3 < 5)
      {
        health_points += hp_sp_increase[random_option3];
        cout << "Your health is increased to " << health_points << endl; 
      }
      else
      {
        super_powers += hp_sp_increase[random_option3];
        cout << "Your superpowers have increased to " << super_powers << endl;
      }
      break;
  }
  
  
  
}
