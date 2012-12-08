//
//  ParseInput.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
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

ParseInput::ParseInput()
{

}

ParseInput::~ParseInput()
{
    CommandList.clear();
}

void ParseInput::Draw()
{
  for (std::vector<Instruction*>::iterator it=CommandList.begin(); it != CommandList.end(); it++) {
        (*it)->Draw();
    }
	
}

ifstream& operator>>(ifstream& is, ParseInput& pi)
{
	string s;
	double sz;

	

	while (!is.eof())
	{
		is >> s;
		{}
		if (s == "FORWARD")
		{
			is >> sz;
			Forward *p_f = new Forward(sz);
			 Instruction *i1 = p_f;
			pi.CommandList.push_back(i1);
		}
		else if (s == "JUMP")
		{
				is >> sz;
			Jump *p_j = new Jump(sz);
			Instruction *i2 = p_j;
			pi.CommandList.push_back(i2);	
		}
		else if (s == "LEFT")
		{
				is >> sz;
			Rotate *p_l = new Rotate(sz);
			Instruction *i3 = p_l;
			pi.CommandList.push_back(i3);	
		}
		else if (s == "RIGHT")
		{
				is >> sz;
			Rotate *p_r = new Rotate(-sz);
			Instruction *i4 = p_r;
			pi.CommandList.push_back(i4);	
		}
		else if (s == "]")
		{
			char c;
			is >> ws;

		return is;
		}
	
		else if (s == "REPEAT")
		{
		is >> sz;
		Repeat *p_rp = new Repeat(sz);
		is >> *p_rp;
		Instruction *i2 = p_rp;
		pi.CommandList.push_back(i2);
		
		}
		else
		{
			throw FormatException(s);
		}

		is >> ws;

	}


	return is;
}

ostream& operator<<(ostream& os, const ParseInput& pi)
{
	return os;
}


