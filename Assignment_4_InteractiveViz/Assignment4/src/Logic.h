#pragma once
#include "ofMain.h"

class Logic {
    public:
    //char* square;
    
        Logic() {};
    
    //Logic(char* boardData) :square(boardData) {};
    
    void checkSquare(int choice, char mark, int player, char* square);
    int checkwin(char* square);
    //void keyPressed(int key);

    
};
