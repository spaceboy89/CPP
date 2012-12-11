//
//  Rotate.cpp
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#include "Rotate.h"
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
Rotate::Rotate(double s)
{
	//size is a member variable of the instruction base class
    size = s;
}

// Virtual Draw function
// The "Left" and "Right" commands are both represented by this class.
// Only one is initialised with -size.
void Rotate::Draw()
{
    // Rotate cursor by size degrees clockwise
    glRotatef(size, 0, 0, 1);
	// End rotate
}
