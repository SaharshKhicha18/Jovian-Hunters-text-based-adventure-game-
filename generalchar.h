#include <string>
#indef character_h
#define character_h

struct Character{
  int hitp;
  int attackp;
  string charname;
  character(int hp, int ap, string name);
};

#endif
