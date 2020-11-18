#include <iostream>
#include "events.h"
#include <map>
using namespace std;

void war( charhp, map<string, int> charap, foehp, forap){
  while (charhp >0 && foehp >0){
    //player's turn
    map<string, int>::iterator itr;
    int choosein, i == 0; 
    for(itr = charap.begin(); charap.end(); itr++){
      cout << i << ") " << "You have " << (*itr).first << "with damage of " << (*itr).second << "."<<endl;
    }
    cout << "Choose one from above. 1, 2 and 3?";
    cout << "Input 0 if you do not want any to use any weapon";
    cin >> choosein;
    if (choosein == 1){
      
    //monster's turn
