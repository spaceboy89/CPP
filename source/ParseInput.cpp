//
//  ParseInput.cpp
//  CPP
//
//  Created by Oli Davis on 30/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include "ParseInput.h"
#include "Instruction.h"

// Includes to be removed for final program???
#include "Forward.h"
#include "Jump.h"
#include "Repeat.h"
#include "Rotate.h"
// end


ParseInput::ParseInput()
{
	Forward *p_f = new Forward(2);
    Rotate *p_r = new Rotate(90);
    Jump *p_j = new Jump(1);
    Rotate *p_rot = new Rotate(-90);
    Forward *p_fwd = new Forward(3);
    
    Instruction *i1, *i2, *i3, *i4, *i5;

	i1 = p_f;
	i2 = p_r;
	i3 = p_j;
	i4 = p_rot;
	i5 = p_fwd;
    
    CommandList.push_back(p_f);
    CommandList.push_back(p_r);
    CommandList.push_back(p_j);
    CommandList.push_back(p_rot);
    CommandList.push_back(p_fwd);

	{}

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