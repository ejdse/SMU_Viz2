#include "ofMain.h"
#include "ofApp.h"
#include "Logic.h"
#include "Board.h"
#include <iostream>
using namespace std;

char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());
    // Call functions
    Logic eng;
    eng.checkwin(square);
    Board b;
    b.board(square);
    
    int player = 1,i,choice;
    char mark;
    
    do
    {
        player=(player%2)?1:2;
        
        cout << "Player " << player << ", enter a number for your next move:  ";
        cin >> choice;
        
        // Determin the mark to place
        mark = (player == 1) ? 'X' : 'O';
        
        //
        eng.checkSquare(choice, mark, player,square);
        
        i=eng.checkwin(square);
        
        player++;
        
    }while(i==-1);
    b.board(square);
    if(i==1)
        
        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";
    
    cin.ignore();
    cin.get();
    return 0;
}



