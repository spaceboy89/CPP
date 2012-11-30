//
//  Instruction.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_Instruction_h
#define CPP_Instruction_h

#include <iostream>



class Instruction
{
public:
    Instruction();
	Instruction(double size);
	~Instruction();
	virtual void Draw() = 0;
	float GetSize();

protected:
	double size;

};

#endif


