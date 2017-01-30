// Resources:
// http://www.cppforschool.com/project/tic-tac-toe-project.html
// http://codereview.stackexchange.com/questions/123200/tic-tac-toe-c


#include "Board.h"

Board::Board(char square[10]){
  this->square[10] = square[10];
};

void Board::draw(){
  system("cls");
  cout << "\n\n\tTic Tac Toe Game Using C++ Classes\n\n";

  cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
  cout << endl;

  cout << "     |     |     " << endl;
  cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;

  cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

  cout << "     |     |     " << endl << endl;
}
