#include<iostream>
#include<list>

#include"Instruction.h"

using namespace std;

class ParseInput
{
public:
	ParseInput();
	~ParseInput();
	void ExcecuteCommands();
	void PopulateCommandList();


private:

	list<Instruction> CommandList;

};

ParseInput::ParseInput()
{

}

ParseInput::~ParseInput()
{
}