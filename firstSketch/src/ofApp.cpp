#include "ofApp.h"

float angle = 0;

void ofApp::setup() {
  ofSetFrameRate(60);
  ofBackground(0);
}

void ofApp::update() { angle += 0.05; }

void ofApp::draw() {
  float x = ofGetWidth() / 2 + cos(angle) * 200;
  float y = ofGetHeight() / 2 + sin(angle) * 200;

  ofSetColor(255, 100, 100);
  ofDrawCircle(x, y, 30);
}
