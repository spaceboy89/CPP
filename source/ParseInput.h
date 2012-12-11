//
//  ParseInput.h
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#ifndef CPP_ParseInput_h
#define CPP_ParseInput_h

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "Instruction.h"

using namespace std;

// This class reads in the input program from the command line
class ParseInput
{
public:
	ParseInput(); // Constructor
	~ParseInput(); // Destructor

	void Draw(); // Virtual Draw function
	void SetBrackets(bool b){brackets = b;} // Allows write access to brackets member variable
	friend ifstream& operator>>(ifstream& is, ParseInput& pi); // Reads the input program
	
private:
	std::vector<Instruction *> CommandList; // Vector type allows dynamic growth of the command list
	bool brackets; // Flag to indicate if enclosing brackets are balanced.
};



#endif
