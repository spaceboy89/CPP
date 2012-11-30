//
//  ParseInput.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_Repeat_h
#define CPP_Repeat_h



#include<iostream>
#include<vector>

#include "Instruction.h"


class ParseInput
{
public:
	ParseInput();
	~ParseInput();
	void draw();
	void PopulateCommandList();


private:

	std::vector<Instruction> CommandList;

};

#endif
