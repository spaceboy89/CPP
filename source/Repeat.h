//
//  Repeat.h
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#ifndef CPP_Repeat_h
#define CPP_Repeat_h

#include "ParseInput.h"

// Inherits publically from Instruction
class Repeat: public Instruction
{
public:
	Repeat(){} // Default Constructor
    void Draw(); // Virtual Draw function
	Repeat(double sz); // Constructor
	~Repeat(){} // Destructor
	friend ifstream& operator>>(ifstream& is, Repeat& r); // Input operator
	void SetBrackets(); // Allows write access to brackets member variable
    
private:
	// Repeat class has a parse input class as a member variable
	// The 'repeat' command is treated as a sub program within the LOGO program
    ParseInput RepeatProgram; 
};

// Recommendation to the compiler to inline the SetBrackets() function
inline void Repeat::SetBrackets()
{
	RepeatProgram.SetBrackets(false);
}

#endif
