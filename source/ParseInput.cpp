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
    Forward f(2);
    Rotate r(90);
    Jump j(1);
    Rotate rot(-90);
    Forward fwd(3);
    
    Instruction& i1(f);
    Instruction& i2(r);
    Instruction& i3(j);
    Instruction& i4(rot);
    Instruction& i5(fwd);
    
    CommandList.push_back(&i1);
    CommandList.push_back(&i2);
    CommandList.push_back(&i3);
    CommandList.push_back(&i4);
    CommandList.push_back(&i5);
}

ParseInput::~ParseInput()
{
    
}

void ParseInput::Draw()
{
    for (std::vector<Instruction*>::iterator it=CommandList.begin(); it != CommandList.end(); ++it) {
        (*it)->Draw();
    }
}