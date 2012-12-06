//
//  ParseInput.h
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#ifndef CPP_ParseInput_h
#define CPP_ParseInput_h

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "Instruction.h"

using namespace std;

class ParseInput
{
public:
	ParseInput();
	~ParseInput();
	
	void Draw();
	 friend ifstream& operator>>(ifstream& is, ParseInput& pi);
	 friend ostream& operator<<(ostream& is, const ParseInput& pi);

private:
    std::vector<Instruction *> CommandList;


};



#endif
