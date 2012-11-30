//
//  Jump.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include "Jump.h"
#include "window.h"


Jump::Jump()
{
    
}

Jump::Jump(double s)
{
    size = s;
}

void Jump::draw()
{
    // Jump
    glTranslatef(0, size, 0);
    // End Jump
}

Jump::~Jump()
{
    
}