//
//  shape.cpp
//  OOD Assignment Sample
//
//  Created by Oli Davis on 09/11/2012.
//  Copyright (c) 2012 Oli Davis. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

#include "window.h"
#include "ParseInput.h"



ParseInput runProgram;

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
		cerr << "This program requires 1 argument only" << endl;
		cin >> i;
		//exit(1);
	}
	
	fs.open(argv[1]);

	if (!fs.is_open())
	{
		cerr << "File Not Found!" << endl;
		cin >> i;
		//exit(1);
	}


	fs >> runProgram;

	fs.close();
    
    window w(argc,argv);
}

