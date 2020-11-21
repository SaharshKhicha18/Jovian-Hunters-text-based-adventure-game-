#include <iostream>
#include <cstdlib>
#include "Jovian.h"
#include <string>
using namespace std;

void gamecharacters(string &charname, string op[3]){
  int choose, chooseop=0;
  cout << "Input 1, to enter your name as a game chararcter" << endl;
  cout << "Input 2, to pick one of the Jovian Hunters!" << endl;
  cout << "Choose between 1 or 2 -> ";
  cin >> choose;
  cout << endl;
  while (choose >=3 || choose <=0){
    cout<< " No such option. Choose between 1 and 2 -> ";
    cin >> choose;
  }
  if (choose == 1){
    cout<< "Please input the name -> ";
    cin >> charname;
    cout << endl;
    cout << "Get ready for Jovian Hunters, " << charname << ". The monsters are after you"<< endl;
  }
  if (choose == 2){
    cout << "1. " << op[0] << ", 2. " << op[1] << ", 3. "<< op[2] <<endl;
    cout << "Choose from 1, 2 or 3 -> ";
    cin >> chooseop;
    while (chooseop>=4 || chooseop<=0){
      cout << "No character. Must choose from 1, 2 or 3";
      cout << "Choose from 1, 2 or 3 -> ";
      cin >> chooseop;
    }
    if (chooseop == 1){
      charname = op[0];
      cout << "Get ready for Jovian Hunters, " << charname << ". The monsters are after you"<< endl;
    }
    if (chooseop == 2){
      charname = op[1];
      cout << "Get ready for Jovian Hunters, " << charname << ". The monsters are after you"<< endl;
    }
    if (chooseop == 3){
      charname = op[2];
      cout << "Get ready for Jovian Hunters, " << charname << ". The monsters are after you"<< endl;
    }
  }
}
