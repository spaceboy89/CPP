//
//  shape.cpp
//  OOD Assignment Sample
//
//  Created by Oli Davis on 09/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include <iostream>
#include "window.h"
//#include "Instruction.h"
//#include "ParseInput.h"

void draw(void)
{
    // Start drawing a line
    glBegin(GL_LINE_STRIP);			
        glVertex3f( 0.0f, 0.0f, 0.0f);
        glVertex3f(0.0f,1.0f, 0.0f);
	glEnd();
    glTranslatef(0.0, 1.0, 0);  // Move cursor to end of line
    // End the drawing of a line
    
    // rotate cursor 90 degrees clockwise
    glRotatef(-90, 0, 0, 1);
	// end rotate
    
    glBegin(GL_LINE_STRIP);
        glVertex3f(0.0f,0.0f, 0.0f);
        glVertex3f( 0.0f,1.0f, 0.0f);
	glEnd();
    glTranslatef(0.0, 1.0, 0);
    
    glRotatef(45, 0, 0, 1);
    
	glBegin(GL_LINE_STRIP);
        glVertex3f(0.0f,0.0f, 0.0f);
        glVertex3f( 0.0f,1.0f, 0.0f);
	glEnd();
    glTranslatef(0.0, 1.0, 0);
}

int main ( int argc, char** argv )   // Create Main Function For Bringing It All Together
{
	window w(argc,argv);
}

