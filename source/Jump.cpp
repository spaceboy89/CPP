//
//  Jump.cpp
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
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

// Constructor
Jump::Jump(double s)
{
	//size is a member variable of the instruction base class  
	size = s;
}

void Jump::Draw()
{
    // Jump
    glTranslatef(size, 0, 0);
    // End Jump
}
