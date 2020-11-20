#include <iostream>
#include <string>
#include <map>
#include "events.h"
#include "gamecharacters.h"

int main(){
  int charhp = 100;
  int charap = 30;
  int foehp;
  string charname = "";
  
  int gamepoints_at_end = 80;
  gamepoints = 0;
  
  //Introduction of the game
  cout << "Welcome to the Jovian Hunters! An adventurous journey."<<endl;
  cout << "You are a warrier who must save the precious jewel \"KOHINOOR DIAMOND\" from the monsters who invaded the city." << endl;
  cout << "You will have to fight and kill 8 monsters to get to the jewel. Some are strong and others are weak" << endl;
  cout << "Several places in the city hospitals, ammunition shop etc. where you can revive your health points as well as attack power using different weapons" <<endl;
  
  cout << "Choose you character name. You can choose you own name or choose the options provided to you by Jovian Hunters!" << endl;
  gamecharacters( name);
  cout << endl;
  cout << endl;
  
  string line;
  ifstream introduction ();
  while(getline(introduction, line)){
    cout<< line <<endl;
  }
  while (charhp >0 && gamepoints_at_end >0){
    randomevents();
    if (eventhap == 1 && charhp>0){
      cout << "Lets move forward as you still have " << gamepoints_at_end << " steps to get to the Kohinoor"<<endl;
      gamepoints_at_end--;
      gamepoints = 1;
    }
  }
}


    
