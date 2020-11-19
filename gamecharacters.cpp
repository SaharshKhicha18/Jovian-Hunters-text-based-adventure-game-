#include <iostream>
#include <cstdlib>
#include "globalvar.h"
#include "generalchar.h"
#include <string>
using namespace std;

void gamecharacters(int hp, int ap, string &name){
  int initialhp = hp;
  int choose, chooseop=0;
  cin >> choose;
  while (choose >=3 || choose <=0){
    cout<< " No such option. Choose between 1 and 2:";
    cin >> choose;
  }
  if (choose == 1){
    cout<< "Please input the name: ";
    cin >> name;
    cout << endl;
    cout << "Get ready for Jovian Hunters, " << name << ". The monsters are after you"<< endl;
  }
  if (choose == 2){
    cout << "1. " << op[0] << ", 2. " << op[1] << ", 3. "<< op[2] <<endl;
    cout << "operator 1, 2 or 3?";
    cin >> chooseop;
    while (chooseop>=4 || chooseop<=0){
      cout << "No character. Must choose from 1,2 or 3";
      cout << "operator 1, 2 or 3? ";
      cin >> chooseop;
    }
    if (chooseop == 1){
      name = op[0];
      cout << "Get ready for Jovian Hunters, " << name << ". The monsters are after you"<< endl;
    }
    if (chooseop == 2){
      name = op[1];
      cout << "Get ready for Jovian Hunters, " << name << ". The monsters are after you"<< endl;
    }
    if (chooseop == 3){
      name = op[2];
      cout << "Get ready for Jovian Hunters, " << name << ". The monsters are after you"<< endl;
    }
  }
}

  

    
