#include "Board.h"
#include "Winner.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  Board b = Board('o','1','2','3','4','5','6','7','8','9');
  Winner w = Winner();
  b.draw();
  w.check()
  return 0;
}
