//
//  Repeat.cpp
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#include "Repeat.h"
#include "Exceptions.h"
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
Repeat::Repeat(double sz)
{
	//size is a member variable of the instruction base class
	size = sz;
}

// Virtual Draw function
void Repeat::Draw()
{
	for (int i(0); i< size;i++)
	{
		// Executes the ParseInput class for the specified number (size) of repeats
		RepeatProgram.Draw();
	}
}

// Reads the sub program to be stored in the ParseInput class
ifstream& operator>>(ifstream& is, Repeat& r)
{
	char c;

	is >> ws;

	if (is.peek() == '[' )
	{
		is.get(c);	
	}
	else
	{
		throw BracketsError();
		{}
	}

	is >> r.RepeatProgram;

	return is;
}