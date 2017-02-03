
/* 
Assignment 3: Text Game

Andrew Clark and Ryan Shuhart
	
Resources:
	http://www.cplusplus.com/doc/tutorial/classes/
http://www.cppforschool.com/project/tic-tac-toe-project.html
http://codereview.stackexchange.com/questions/123200/tic-tac-toe-c

*/


// players in the board 

//board.start()
// logic inside the board 

// everything in board class? composition model 

#include <iostream>
using namespace std;

// Board array


class Board {
	
	public:		
		Engine e;
		char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

		Board() {
			e = Engine(square);
		}

		void board()
		//Function that draws the playing board
		{
			//system("cls");
			cout << "\n\n\tTwo Player C++ Tic Tac Toe Game\n\n";

			cout << "Player 1 is (X) and Player 2 is (O)" << endl << endl;
			cout << endl;

			cout << "###################" << endl;
			cout << "#     |     |     #" << endl;
			cout << "#  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  #" << endl;

			cout << "#_____|_____|_____#" << endl;
			cout << "#     |     |     #" << endl;

			cout << "#  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  #" << endl;

			cout << "#_____|_____|_____#" << endl;
			cout << "#     |     |     #" << endl;

			cout << "#  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  #"<< endl;

			cout << "#     |     |     #" << endl;
			cout << "###################" << endl << endl;;
		}

};

class Engine {
	public:
		char* square;

		Engine() {};

		Engine(char* boardData):square(boardData) {};

		
		int checkwin()
		/* Function that returns the game status, 1 for game over with a win/loss,
		0 for draw, and -1 for WIP.
		*/
		{
			if (square[1] == square[2] && square[2] == square[3])

				return 1;
			else if (square[4] == square[5] && square[5] == square[6])

				return 1;
			else if (square[7] == square[8] && square[8] == square[9])

				return 1;
			else if (square[1] == square[4] && square[4] == square[7])

				return 1;
			else if (square[2] == square[5] && square[5] == square[8])

				return 1;
			else if (square[3] == square[6] && square[6] == square[9])

				return 1;
			else if (square[1] == square[5] && square[5] == square[9])

				return 1;
			else if (square[3] == square[5] && square[5] == square[7])

				return 1;
			else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
		                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

				return 0;
			else
				return -1;
		}

		int checkSomething(int choice){

			mark = (player == 1) ? 'X' : 'O';

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
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}


		}

}; 



int main()
{
	// Call functions
	Engine eng;
	eng.checkwin();
	Board b;
	b.board();
	
	
	int player = 1,i,choice;

	char mark;
	do
	{
		b.board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number for your next move:  ";
		cin >> choice;

		

		i=eng.checkwin();

		player++;
	}while(i==-1);
	b.board();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}



