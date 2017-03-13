#include "ofApp.h"


void ofApp::setup(){
	zwem1.load("testZwem1.wav");
	zwem2.load("zwem2.wav");
	zwem3.load("zwem3.wav");
	bubbels1.load("bubbels1.wav");
	spetter1.load("spetter1.wav");
	verdrink1.load("verdrink1.wav");
	waai1.load("waai1.wav");
	meeuw1.load("meeuw1.wav");
	vermoeid1.load("vermoeid1.wav");

	ofSoundSetVolume(0.9f);
	watlevel = 1000;
	moe = 0;
	waai1.play();
	
}


void ofApp::update(){
	if (watlevel != 0) {
		watlevel = watlevel - 1;
	}
	ofLog() << watlevel <<"  "<< moe<<endl;
	if (watlevel < 800) {
		waai1.stop();
		if (soundcheck = 0) {
			zwem1.play();
			zwem3.play();
			soundcheck = 1;
		}
		verdrink1.setMultiPlay(true);
		verdrink1.play();
		bubbels1.setMultiPlay(true);
		bubbels1.play();
	}
	if (watlevel > 800) {
		soundcheck = 0;
		ofSoundStopAll();
		verdrink1.stop();
		bubbels1.stop();
		vermoeid1.play();
		spetter1.play();
	}

}


void ofApp::draw(){

}

void ofApp::keyReleased(int key) {
	if (watlevel < 1000) {
		if (key == ' ' && moe <= 20) {
			watlevel = watlevel + 100;
			moe = moe + 1;
			zwem1.setMultiPlay(true);
			zwem1.play();

		}
		else if (key == ' ' && moe >20 && moe <= 30) {
			watlevel = watlevel + 90;
			moe = moe + 1;
			vermoeid1.play();
		}
		else if (key == ' '&& moe >30 && moe <= 40) {
			watlevel = watlevel + 70;
			moe = moe + 1;
		}
		else if (key == ' '&& moe >40 && moe <= 50) {
			watlevel = watlevel + 50;
			moe = moe + 1;
		}
	}
}
