//
//  Repeat.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
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


Repeat::Repeat(double sz)
{
	size = sz;
}

void Repeat::Draw()
{
	for (int i(0); i< size;i++)
	{
		RepeatProgram.Draw();
	}
}

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