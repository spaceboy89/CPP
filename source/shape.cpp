//
//  shape.cpp
//  OOD Assignment Sample
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <exception>

using namespace std;

#include "window.h"
#include "ParseInput.h"
#include "Exceptions.h"

ParseInput runProgram;

void draw(void)
{
	runProgram.Draw();
}

// Main Function brings all the components of the solution together
int main ( int argc, char *argv[] )   
{
	ifstream fs;
	char i[100];

	// Checks that an input file has been provided
	if (argc != 2)
	{
		cerr << "Correct Usage: shape <filename>" << endl << "Press any key to exit...." << endl;
		cin >> i;
		exit(1);
	}

	fs.open(argv[1]);
	// Checks if the file opened successfully
	if (!fs.is_open())
	{
		cerr << "File Not Found!" << endl << "Press any key to exit...." << endl;
		cin >> i;
		exit(1);
	}

	// Attempts to run the program, catching any exceptions raised in the process 
	try 
	{
		fs >> runProgram;
	}
	catch (FormatException& e)
	{
		cerr << e.what() << endl;
	}
	catch (BracketsError2& e)
	{
		cerr << e.what() << endl;
	}
	catch (BracketsError& e)
	{
		cerr << e.what() << endl ;
	}
	// Closes the input file
	fs.close();
	// Displays output
	window w(argc,argv);
}
