//
//  Rotate.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
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


Rotate::Rotate(double s)
{
    size = s;
}

void Rotate::Draw()
{
    // rotate cursor 90 degrees clockwise
    glRotatef(size, 0, 0, 1);
	// end rotate
}
