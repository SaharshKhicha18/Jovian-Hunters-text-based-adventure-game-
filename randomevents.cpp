#include <iostream>
#include <cstdlib>
using namespace std;
int eventhap = 1; 
int randnum = rand(25);
while loop{
switch (randomnum){
  case 0 && 1 && 2 && 3 && 4 && 5:
    #monsters will appear
    cout << "Beware! There is a monster ahead!" << endl;
    cout << "It is a " << monster << endl;
    war(charhp, charap, map<string, int> inventory, foehp, forap, string monster);
  case 6 && 7:
    #hospital will appear
    cout << "There is a hospital ahead!" << endl;
    cout << " A chance for you to revive your health points" << endl;
    hospital(map<string, int> inventory, charhp);
  case 8 && 9:
    #ammunation will appear
    cout << "There is an ammunition shop at the end of this road. You can collect weapons to put it in your inventory." <<endl;
    ammunationshop(map<string, int> inventory);
  case 10:
    #pawn shop will appear
    cout << "WOW! A pawn shop ahead. Can help you revive heath points and attack power." << endl;
    pawnshop(map<string, int> inventory, charhp);
  default:
    #keep walking
    eventhap = 0;
    steps_before++;
    gamepoints--;
    break;
}
    
    
