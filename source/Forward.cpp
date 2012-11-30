//
//  Forward.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include "Forward.h"
#include "window.h"


Forward::Forward()
{
    
}

Forward::Forward(double s)
{
    size = s;
}

void Forward::Draw()
{
    // Start drawing a line
    glBegin(GL_LINE_STRIP);
        glVertex3f(0, 0, 0);
        glVertex3f(0,size, 0);
	glEnd();
    glTranslatef(0, size, 0);  // Move cursor to end of line
    // End the drawing of a line
}

Forward::~Forward()
{
    
}