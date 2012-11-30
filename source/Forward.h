//
//  Forward.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_Forward_h
#define CPP_Forward_h

#include "Instruction.h"


class Forward: public Instruction
{
public:
	Forward(double s);
    void draw();
	~Forward();
    
private:
    Forward();
};

#endif
