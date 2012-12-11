//
//  Forward.cpp
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
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


// Constructor
Forward::Forward(double s)
{
	//size is a member variable of the instruction base class
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
