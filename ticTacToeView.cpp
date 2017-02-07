//
//  ticTacToeView.cpp
//  myTicTacToeSketch
//
//  Created by Edgar Johnson on 2/6/17.
//
//

#include "ticTacToeView.hpp"

//--------------------------------------------------------------
void ticTacToeView::drawTicTacToeBox(int tile){
    ofFill();
    ofSetColor(255, 255, 255);
    float x1 = (tile % 3)*width+((tile % 3)*xp), y1 = ((int)(tile / 3.0))*height+(((int)(tile / 3.0))*yp);
    ofDrawRectangle(x1, y1, width, height);
    if (state[tile] != 0) { if (state[tile] < 0) drawX(tile) ; else drawO(tile) ; }
}

//--------------------------------------------------------------
void ticTacToeView::drawXsAndOhs(int x, int y, bool isX){
    if (x < 100 && y < 100*GR){drawXorO(0,isX);} else if (x < 200+(2*xp) && x > xp+100 && y < 100*GR) {drawXorO(1,isX);} else if (x > 200+(2*xp) && y < 100*GR) {drawXorO(2,isX);}
    if (x < 100 && y >100*GR+yp && y < 200*GR){drawXorO(3,isX);} else if (x < 200+(2*xp) && x > xp+100 && y >100*GR+yp && y < 200*GR) {drawXorO(4,isX);} else if (x > 200+(2*xp) && y >100*GR+yp && y < 200*GR) {drawXorO(5,isX);}
    if (x < 100 && y >200*GR+(2*yp)){drawXorO(6,isX);} else if (x < 200+(2*xp) && x > xp+100 && y >200*GR+(2*yp)) {drawXorO(7,isX);} else if (x > 200+(2*xp) && y >200*GR+(2*yp)) {drawXorO(8,isX);}
}

void ticTacToeView::drawX(int tile){
    ofNoFill();
    ofSetColor(0, 0, 100);
    float offX = (tile % 3)*width+((tile % 3)*xp), offY = (((int)(tile / 3.0))*height)+(((int)(tile / 3.0))*yp), x0 = offX + 75, y0 = offY + 90, x1 = offX + 35, y1 = offY + 10, x2 = offX + 50, y2 = offY + 50, x3 = offX + 25, y3 = offY + 90;
    ofDrawBezier(x0, y0, x1, y1, x2, y2, x3, y3);
    ofDrawBezier(x1, y1, x3, y3, x2, y2, x0, y0);
    state[tile] = -1;
}

void ticTacToeView::drawO(int tile){
    ofNoFill();
    ofSetColor(150, 0, 0);
    float offX = (tile % 3)*width+((tile % 3)*xp), offY = ((int)(tile / 3.0))*height+(((int)(tile / 3.0))*yp), x = offX + 50, y = offY + (50*GR);
    ofDrawEllipse(x, y, width-20.0, height-30.0);
    state[tile] = 1;
}

