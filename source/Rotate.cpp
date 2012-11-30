//
//  Rotate.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include "Rotate.h"
#include "window.h"


Rotate::Rotate()
{
    
}

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

Rotate::~Rotate()
{
    
}