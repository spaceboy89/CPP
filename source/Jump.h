//
//  Jump.h
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#ifndef CPP_Jump_h
#define CPP_Jump_h

#include "Instruction.h"

// Inherits publically from Instruction
class Jump: public Instruction
{
public:
	Jump(double s); // Constructor
    void Draw(); // Virtual Draw function
	~Jump(){} // Destructor
    
private:
    Jump(){} // Default Constructor
};

#endif
