#include<list>



using namespace std;

class Instruction
{
public:
	
	Instruction(float size);
	~Instruction();
	virtual void Draw();
	float GetSize();

private:

	float size;
	Instruction();

};

Instruction::Instruction()
{
}

Instruction::~Instruction()
{
}

class Jump: public Instruction
{
public:
	Jump();
	~Jump();

private:

};

Jump::Jump()
{
}

Jump::~Jump()
{
}

class Rotate: public Instruction
{
public:
	Rotate();
	~Rotate();

private:

};

Rotate::Rotate()
{
}

Rotate::~Rotate()
{
}

class Forward: public Instruction
{
public:
	Forward();
	~Forward();

private:

};

Forward::Forward()
{
}

Forward::~Forward()
{
}



class Repeat: public Instruction
{
public:
	Repeat();
	Repeat(List<Instruction> rl);
	~Repeat();

private:

	List<Instruction> RepeatList;

};

Repeat::Repeat()
{
}

Repeat::~Repeat()
{
}