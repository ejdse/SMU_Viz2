#include "Winner.h"
#include "Board.h"
#include <iostream>
using namespace std;


int main(int argc, char *argv[]){
  // Initialize classes
  Board b = Board();
  Winner w = Winner();
  // Call functions
  w.check();
  b.draw();
/* work on below

  int player = 1,i,choice;

  char mark;
  do
  {
    board();
    player=(player%2)?1:2;

    cout << "Player " << player << ", enter a number:  ";
    cin >> choice;

    mark=(player == 1) ? 'X' : 'O';

    if (choice == 1 && square[1] == '1')

      square[1] = mark;
    else if (choice == 2 && square[2] == '2')

      square[2] = mark;
    else if (choice == 3 && square[3] == '3')

      square[3] = mark;
    else if (choice == 4 && square[4] == '4')

      square[4] = mark;
    else if (choice == 5 && square[5] == '5')

      square[5] = mark;
    else if (choice == 6 && square[6] == '6')

      square[6] = mark;
    else if (choice == 7 && square[7] == '7')

      square[7] = mark;
    else if (choice == 8 && square[8] == '8')

      square[8] = mark;
    else if (choice == 9 && square[9] == '9')

      square[9] = mark;
    else
    {
      cout<<"Invalid move ";

      player--;
      cin.ignore();
      cin.get();
    }
    i=checkwin();

    player++;
  }while(i==-1);
  board();
  if(i==1)

    cout<<"==>\aPlayer "<<--player<<" win ";
  else
    cout<<"==>\aGame draw";

  cin.ignore();
  cin.get();
  return 0;
  */
}
