#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Jovian.h" 

void Gamerun( int &charhp, int &charap, vector<string>& inventory_p, vector<int>& inventory_pvalue, vector<string>& monsternames, vector<vector<int>>
& monsters_info){
  int eventhap = 1;
  int gamepoints = 0;
  char direc = "";
  
  //Introduction of the game
  cout << "Welcome to the Jovian Hunters! An adventurous journey."<<endl;
  cout << "You are a warrier who must save the precious jewel \"KOHINOOR DIAMOND\" from the monsters who invaded the city." << endl;
  cout << "You will have to fight and kill 8 monsters to get to the jewel. Some are strong and others are weak" << endl;
  cout << "Several places in the city hospitals, ammunition shop etc. where you can revive your health points as well as attack power using different weapons" <<endl;
  
  cout << "Choose you character name. You can choose you own name or choose the options provided to you by Jovian Hunters!" << endl;
  gamecharacters(charhp, charap, charname);
  cout << endl;
  cout << endl;
  
  cout << charname << " choose a direction to begin. Input E, W, N, S for East, West, North and South respectively! -> ";
  cin >> direc;
  cout << endl;
  if (direc == 'E' || direc == 'e'){
    cout << "Well " << charname << " you are heading towards the East. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
  }
  if (direc == 'W' || direc == 'w'){
    cout << "Well " << charname << " you are heading towards the West. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
  }
  if (direc == 'S' || direc == 's'){
    cout << "Well " << charname << " you are heading towards the South. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
  }
  if (direc == 'N' || direc == 'n'){
    cout << "Well " << charname << " you are heading towards the North. Hope you enjoy the adventure but careful, beaware of the monsters" << endl;
  }
  while (direc != 'E' || direc != 'e' || direc != 'W' || direc != 'w' || direc != 'S' || direc != 's' || direc != 'N' || direc != 'n'){
    cout << "Invalid direction! Come on you can do better. Choose from the above directions -> ";
    cin >> direc;
  }
  while (charhp >0 && gamepoints < 80){
    randomevents();
    if (eventhap == 1 && charhp>0){
      cout << "Lets move forward as you still have " << gamepoints << " steps to get to the Kohinoor"<<endl;
    }
  }
  if (gamepoints >= 80){
    cout << "Congratulations!! " << charname << " you have done what many find impossible. Saved the KOHINOOR from the evil." << endl;
    cout << "After defeating 8 dangerous monsters, you reach the stage where the bright sunlight reflecting from the sharp edges of KOHINOOR strikes your eyes. "<< endl;
    cout << "You deserve to be rewarded by the Queen of England." <<endl;
    
}
return 0;
}


    
