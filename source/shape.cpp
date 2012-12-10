//
//  shape.cpp
//  OOD Assignment Sample
//
//  Created by Oli Davis on 09/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <exception>

using namespace std;

#include "window.h"
#include "ParseInput.h"
#include "Exceptions.h"



ParseInput runProgram;
int no_brackets;

void draw(void)
{
	runProgram.Draw();
}

int main ( int argc, char *argv[] )   // Create Main Function For Bringing It All Together
{
	ifstream fs;
	char i[100];


	if (argc != 2)
	{
		cerr << "Correct Usage: shape <filename>" << endl << "Press any key to exit...." << endl;
		cin >> i;
		exit(1);
	}

	fs.open(argv[1]);

	if (!fs.is_open())
	{
		cerr << "File Not Found!" << endl << "Press any key to exit...." << endl;
		cin >> i;
		exit(1);
	}

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


	fs.close();

	window w(argc,argv);
}
