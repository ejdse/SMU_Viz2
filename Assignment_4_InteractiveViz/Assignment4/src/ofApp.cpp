#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    Banana.load("Banana.wav");
    Door.load("Door.wav");
    UFO.load("UFO.wav");
    Villain.load("Villain.wav");
    UFO.play();
    Chalkboard.load("chalkboard.jpg"); //http://img04.deviantart.net/dd7c/i/2015/010/0/3/chalkboard_texture_mc2015_by_mattiamc-d8dbnac.jpg
}

//--------------------------------------------------------------
void ofApp::update(){
    //ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetColor(255);
    Chalkboard.draw(0, 0);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
