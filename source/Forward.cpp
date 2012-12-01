//
//  Forward.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include "Forward.h"
#ifdef _WIN32
#include<Windows.h>
#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
#endif 

#ifdef __APPLE__
#include <GLUT/glut.h>
#endif

#ifdef __linux__
#include <GL/glut.h> 
#endif


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
        glVertex3f(size,0, 0);
	glEnd();
    glTranslatef(size, 0, 0);  // Move cursor to end of line
    // End the drawing of a line
}

Forward::~Forward()
{
    
}