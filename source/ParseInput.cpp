//
//  ParseInput.cpp
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012. 
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <exception>

#include "Exceptions.h"

#include "Forward.h"
#include "Jump.h"
#include "Repeat.h"
#include "Rotate.h"

using namespace std;

// Default Constructor
ParseInput::ParseInput()
{
	brackets = true;
}

// Default Destructor
ParseInput::~ParseInput()
{
	CommandList.clear();
}

// Virtual Draw function 
void ParseInput::Draw()
{
	// Iterates through the command list vector of Instruction classes and executes their Draw() method
	for (std::vector<Instruction*>::iterator it=CommandList.begin(); it != CommandList.end(); it++) {
		(*it)->Draw();
	}
}

// Reads the input file and stores as a ParseInput class
ifstream& operator>>(ifstream& is, ParseInput& pi)
{
	string s;
	double sz;

	// Loops as long as the input string isn't an end of file indicator
	while (!is.eof())
	{
		is >> s;
		// Instantiates a new class depending on which Instruction keyword is read in
		// If the keyword is not recognised then a FormatException is thrown.
		if (s == "FORWARD")
		{
			if (is >> sz)
			{
				Forward *p_f = new Forward(sz);
				Instruction *i1 = p_f;
				pi.CommandList.push_back(i1);			
			}
			else
			{
				throw FormatException();
			}
		}
		else if (s == "JUMP")
		{
			if (is >> sz)
			{
				Jump *p_j = new Jump(sz);
				Instruction *i2 = p_j;
				pi.CommandList.push_back(i2);	
			}
			else
			{
				throw FormatException();
			}
		}
		else if (s == "LEFT")
		{
			if (is >> sz)
			{
				Rotate *p_l = new Rotate(sz);
				Instruction *i3 = p_l;
				pi.CommandList.push_back(i3);
			}
			else
			{
				throw FormatException();
			}
		}
		else if (s == "RIGHT")
		{
			if (is >> sz)
			{
				Rotate *p_r = new Rotate(-sz);
				Instruction *i4 = p_r;
				pi.CommandList.push_back(i4);
			}
			else
			{
				throw FormatException();
			}
		}
		
		else if (s == "]")
		{

			pi.brackets = true;
			is >> ws;

			return is;
		}

		else if (s == "REPEAT")
		{

			if (is >> sz)
			{
				Repeat *p_rp = new Repeat(sz);
				(*p_rp).SetBrackets();
				is >> *p_rp;
				Instruction *i2 = p_rp;
				pi.CommandList.push_back(i2);
			}
			else
			{
				throw FormatException();
			}
		}
		else
		{
			throw FormatException(s);
		}

		is >> ws;
	}
	// If the brackets are not balanced at the end of the input, an exception is thrown
	if (pi.brackets == false)
	{
		throw BracketsError2();
	}

	return is;
}

ostream& operator<<(ostream& os, const ParseInput& pi)
{
	return os;
}


