#include <iostream>
#include <string>
using namespace std;

void game_run(string character, int health_points, int attack_power)
{
  cout << "Press Q to quit game" << endl;
  cout << "Your Journey Begins!" << endl;
  cout << "Choose a direction to play, E, W, N, S" << endl;
  char playerinput;
  cin >> playerinput;
  While (playerinput != 'Q')
  {
    if (playerinput == 'E' || playerinput == 'e')
    {
      
      cin >> playerinput;
    }
    
    if (playerinput == 'W' || playerinput == 'w')
    {
      
      cin >> playerinput;
    }
    
    if (playerinput == 'N' || playerinput == 'n')
    {
      
      cin >> playerinput;
    } 
    
    if (playerinput == 'S' || playerinput == 'e')
    {
      
      cin >> playerinput;
    }  
  }
  
  
}
