//
//  Jump.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_Jump_h
#define CPP_Jump_h

#include "Instruction.h"


class Jump: public Instruction
{
public:
	Jump(double s);
    void Draw();
	~Jump();
    
private:
    Jump();
};

#endif
