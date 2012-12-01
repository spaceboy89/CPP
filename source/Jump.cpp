//
//  Jump.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include "Jump.h"
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


Jump::Jump()
{
    
}

Jump::Jump(double s)
{
    size = s;
}

void Jump::Draw()
{
    // Jump
    glTranslatef(size,0, 0);
    // End Jump
}

Jump::~Jump()
{
    
}