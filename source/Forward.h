//
//  Forward.h
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#ifndef CPP_Forward_h
#define CPP_Forward_h

#include "Instruction.h"

// Inherits publically from Instruction
class Forward: public Instruction
{
public:
	Forward(double s); // Constructor
    void Draw(); // Virtual Draw function
	~Forward(){} // Destructor
    
private:
    Forward() {} // Default Constructor
};

#endif
