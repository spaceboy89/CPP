
#include <string>
#include <exception>
#include <sstream>
#include <iostream>

using namespace std;

class FormatException:public exception{
public:
         // FormatException(const string m="Format of input file is incorrect"):msg(m){}
		  FormatException(string m):msg("ERROR: Unrecognised instruction " + m){}
		  FormatException(int i);
		  ~FormatException(void){};
          const char* what(){return msg.c_str();}
private:
           string msg;
};

inline FormatException::FormatException(int i)
 {
  std::ostringstream result;
  result << "ERROR: Format of input file is incorrect at character " << i;
  msg = result.str();
 }