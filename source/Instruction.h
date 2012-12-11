//
//  Instruction.h
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#ifndef CPP_Instruction_h
#define CPP_Instruction_h

#include <iostream>

// Base class for the Instructions
// All of the instruction classes - Jump, Repeat, Rotate and Forward 
// Publically inherit from this class
class Instruction
{
public:
    Instruction(){} // Default Constructor
	Instruction(double size); // Constructor
	~Instruction(){} // Destructor
	float GetSize(); // public interface to read the size member variable
	// Pure virtual Draw function - must be defined in each derived class 
	// Provides run-time polymorphism, allowing the program to handle any input sequence
	virtual void Draw() = 0; 
	
protected:
	// size is the parameter of the instruction i.e. - 
	// degrees to rotate, number of times to repeat, distance to draw or jump
	double size;
};

#endif


