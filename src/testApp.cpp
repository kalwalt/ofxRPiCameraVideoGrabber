#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{
	ofSetLogLevel(OF_LOG_VERBOSE);
	ofSetVerticalSync(false);
	
	
	consoleListener.setup(this);
	videoGrabber.setup(1280, 720, 60);
	
}

//--------------------------------------------------------------
void testApp::update()
{
	
}


//--------------------------------------------------------------
void testApp::draw(){

	videoGrabber.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key)
{
	ofLogVerbose(__func__) << key;
	
}

void testApp::onCharacterReceived(SSHKeyListenerEventData& e)
{
	keyPressed((int)e.character);
}

