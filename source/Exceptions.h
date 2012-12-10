
#include <string>
#include <exception>
#include <sstream>
#include <iostream>

using namespace std;

class FormatException:public exception{
public:
      	  FormatException(string m):msg("ERROR: Unrecognised instruction " + m){}
		  FormatException():msg("ERROR: Incorrect command size parameter"){}
		  ~FormatException() throw(){};
          const char* what(){return msg.c_str();}
private:
           string msg;
};


class BracketsError2:public exception{
public:
          BracketsError2():msg("ERROR: Unterminated Repeat Loop (missing ])"){}		
		  ~BracketsError2() throw(){};
          const char* what(){return msg.c_str();}
private:
           string msg;
};

class BracketsError:public exception{
public:
          BracketsError():msg("ERROR: Repeat Loop not started (missing [)"){}		
		  ~BracketsError() throw(){};
          const char* what(){return msg.c_str();}
private:
           string msg;
};

