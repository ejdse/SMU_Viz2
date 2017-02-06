#include "Logic.h"
#include "ofApp.h"
#include <iostream>

//--------------------------------------------------------------
void Logic::checkSquare(int choice, char mark, int player, char* square){
    
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
        std::cout << "Invalid move ";
        
        player--;
        std::cin.ignore();
        std::cin.get();
    }
}

int Logic::checkwin(char* square)
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


