//
//  Instruction.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_Repeat_h
#define CPP_Repeat_h

#include <iostream>


class Instruction
{
public:
	Instruction();
	Instruction(double size);
	~Instruction();
	virtual void draw();
	float GetSize();

protected:
	double size;

};


#endif


