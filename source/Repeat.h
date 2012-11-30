//
//  Repeat.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_Repeat_h
#define CPP_Repeat_h

#include "ParseInput.h"


class Repeat: public Instruction
{
public:
	Repeat();
    void Draw();
	~Repeat();
    
private:
    ParseInput RepeatProgram;
    
};

#endif
