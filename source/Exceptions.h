//
//  Exceptions.h
//  CPP
//
//  Created by Oli Davis, James Sinclair and Craig Lord  on 30/11/2012.
//  Copyright (c) 2012 Oli Davis, James Sinclair and Craig Lord. All rights reserved.
//

#include <string>
#include <exception>
#include <sstream>
#include <iostream>

using namespace std;

// Exception for catching incorrect sizes or commands such as 'FORWRAD 1' or 'FORWARD a'
class FormatException:public exception{
public:
      	  FormatException(string m):msg("ERROR: Unrecognised instruction " + m){}
		  FormatException():msg("ERROR: Incorrect command size parameter"){}
		  ~FormatException() throw(){};
          const char* what(){return msg.c_str();}
private:
           string msg;
};

// Exception for a repeat loop that isn't ended (missing ']' character)
class BracketsError2:public exception{
public:
          BracketsError2():msg("ERROR: Unterminated Repeat Loop (missing ])"){}		
		  ~BracketsError2() throw(){};
          const char* what(){return msg.c_str();}
private:
           string msg;
};

// Exception for a repeat loop that isn't started (missing '[' character)
class BracketsError:public exception{
public:
          BracketsError():msg("ERROR: Repeat Loop not started (missing [)"){}		
		  ~BracketsError() throw(){};
          const char* what(){return msg.c_str();}
private:
           string msg;
};

