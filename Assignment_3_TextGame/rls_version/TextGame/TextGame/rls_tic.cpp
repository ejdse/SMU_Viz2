/*
Assignment 3: Text Game

Andrew Clark and Ryan Shuhart

Resources:
http://www.cplusplus.com/doc/tutorial/classes/
http://www.cppforschool.com/project/tic-tac-toe-project.html
http://codereview.stackexchange.com/questions/123200/tic-tac-toe-c

*/

#include <iostream>
using namespace std;

// GameSquares is a class with getters and setters to allow the other classes to get or 
//  set/replace the numbers with an X or O
class GameSquares {
public: 
	void setSquares(char x) {
		square = x;
	}

	char *getSquares() {
		return square;
	}

private:
	char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
};


// The non-GUI UI
class GameBoard : public GameSquares {
public:
	void board()
	{
		GameSquares squares;
				char square[10] = squares.getSquares;

		system("cls");
		cout << "\n\n\tTic Tac Toe\n\n";

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
};


// Check to see if the right comb gives a winner
class CheckWinner : public GameSquares {
public:
	/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
	-1 FOR GAME IS IN PROGRESS
	O GAME IS OVER AND NO RESULT
	**********************************************/
	int checkwin()
	{
		GameSquares squares;
		char square[10] = squares.getSquares;

		cout << "What checkwin sees: " << square;

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
};

// Game play flow
class Game : public GameBoard {
public:
	
	int playGame()
	{
		GameBoard board;
		CheckWinner checkwin;
		GameSquares squares;
		char square[10] = squares.getSquares;
		
		int player = 1, i, choice;

		char mark;
		do
		{
			board.board();
			player = (player % 2) ? 1 : 2;

			cout << "Player " << player << ", enter a number:  ";
			cin >> choice;

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

			//remember squares
			squares.setSquares(square);

			// check if winning combo
			i = checkwin.checkwin();

			player++;

			cout << square;
			float x = 0;
			cin >> x;

		} while (i == -1);
		board.board();
		if (i == 1)

			cout << "==>\aPlayer " << --player << " win ";
		else
			cout << "==>\aGame draw";

		cin.ignore();
		cin.get();
		return 0;
	}
};


int main() {
	Game ticTacToe;
	ticTacToe.playGame();
}