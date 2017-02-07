#include "ofMain.h"
#include "ofApp.h"
#include "ticTacToeView.hpp"

//========================================================================
int main( ){
	ofSetupOpenGL(321,321*1.618,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ticTacToeView());
}
