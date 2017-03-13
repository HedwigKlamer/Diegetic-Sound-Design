#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyReleased(int key);

		//variables
		int watlevel;
		int moe;
		int zwemk;

		//geluid inladen
		ofSoundPlayer zwem1;
		ofSoundPlayer zwem2;
		ofSoundPlayer zwem3;
		ofSoundPlayer bubbels1;
		ofSoundPlayer spetter1;
		ofSoundPlayer verdrink1;
		ofSoundPlayer waai1;
		ofSoundPlayer meeuw1;
		ofSoundPlayer vermoeid1;

		//soundcheck
		bool soundcheck=0;
		
		
		
};
