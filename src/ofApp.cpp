#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(250, 250, 250);
	ofSetFrameRate(60);
    ofSetLineWidth(5);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 180, 0, 30);

    float posY = sin(ofGetElapsedTimef()) * 200;
    float posX = cos(ofGetElapsedTimef()) * 200;

    float centerX1 = (ofGetWindowWidth() / 2) / 2;
    float centerX2 = ofGetWindowWidth() / 2;
    float centerX3 = ((ofGetWindowWidth() / 2) / 2) + (ofGetWindowWidth() / 2);
    float centerY = ofGetWindowHeight() / 2;

    ofSetColor(180, 0, 0, 10);
    ofLine(centerX1, centerY, centerX1 + posX, centerY + posY);

    ofSetColor(0, 180, 0, 10);
    ofLine(centerX2, centerY, centerX2 + posX, centerY + posY);

    ofSetColor(0, 0, 180, 10);
    ofLine(centerX3, centerY, centerX3 + posX, centerY + posY);
   

    //std::cout << ofGetFrameRate() << endl;
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
