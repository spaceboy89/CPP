//
//  Rotate.h
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#ifndef CPP_Rotate_h
#define CPP_Rotate_h

#include "Instruction.h"

// Inherits publically from Instruction
class Rotate: public Instruction
{
public:
	Rotate(double s); // Constructor
    void Draw(); // Virtual Draw function
 	~Rotate(){} // Destructor
    
private:
    Rotate(){} // Default Constructor
};

#endif
