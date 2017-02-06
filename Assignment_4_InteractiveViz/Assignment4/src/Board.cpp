#include "Board.h"

//--------------------------------------------------------------
void Board::board(char* square){
    //Function that draws the playing board
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
