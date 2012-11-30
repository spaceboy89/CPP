//
//  Rotate.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_Rotate_h
#define CPP_Rotate_h

#include "Instruction.h"


class Rotate: public Instruction
{
public:
	Rotate(double s);
    void draw();
	~Rotate();
    
private:
    Rotate();
};

#endif
