#include "ofApp.h"

float angle = 0.0f;

void ofApp::setup() {
    ofSetFrameRate(60);
    ofBackground(0);
}

void ofApp::update() {
    angle += 0.05f;
}

void ofApp::draw() {
    float x = ofGetWidth() / 2 + cos(angle) * 200;
    float y = ofGetHeight() / 2 + sin(angle) * 200;

    ofSetColor(255, 120, 120);
    ofDrawCircle(x, y, 30);
}
