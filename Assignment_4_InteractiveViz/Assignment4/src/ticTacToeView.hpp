//
//  ticTacToeView.hpp
//  myTicTacToeSketch
//
//  Created by Edgar Johnson on 2/6/17.
//
//

#ifndef ticTacToeView_hpp
#define ticTacToeView_hpp

#include "ofApp.h"

class ticTacToeView : public ofApp {
    short int state[8];
    const float GR = 1.6180339887, width = 100.0, height = 100.0*GR, xp = 10, yp = (xp * GR)/2;
    bool ticTurn = true;
public:
    ticTacToeView(){ for (int i = 0 ; i < 9; i++) state[i] = 0 ; }
    ~ticTacToeView(){delete[] &state;}
    void draw(){ for (int i = 0 ; i < 9; i++) drawTicTacToeBox(i) ; }
    void mousePressed(int x, int y, int button){drawTicTacMark(x,y);}
protected:
    void drawTicTacToeBox(int tile);
    void drawTicTacMark(int x, int y ){drawXsAndOhs(x,y,ticTurn = !ticTurn);}
    void drawXsAndOhs(int x, int y, bool isX);
    void drawX(int tile);
    void drawXorO(int tile, bool isX){isX?drawX(tile):drawO(tile);}
    void drawO(int tile);
};
#endif /* ticTacToeView_hpp */
