# Makefile for C++ Assignment (JAS,OD,CL) 
# Working for Ubuntu 12.04 (06/12/12)

CC=g++
CFLAGS=-lGL -lglut -lGLU -lm

shape: Exceptions.h shape.o ParseInput.o Instruction.h Forward.o Jump.o Rotate.o Repeat.o window.h
	$(CC) $(CFLAGS) shape.o ParseInput.o Forward.o Jump.o Rotate.o Repeat.o -o shape
    
shape.o: Exceptions.h shape.cpp ParseInput.h window.h 
	$(CC) $(CFLAGS) -c shape.cpp

ParseInput.o: ParseInput.cpp Exceptions.h Instruction.h Forward.h Jump.h Rotate.h Repeat.h
	$(CC) -c ParseInput.cpp

Forward.o: Forward.cpp Forward.h Instruction.h
	$(CC) -c Forward.cpp

Jump.o: Jump.cpp Jump.h Instruction.h
	$(CC) -c Jump.cpp
    
Rotate.o: Rotate.cpp Rotate.h Instruction.h
	$(CC) -c Rotate.cpp
    
Repeat.o: Repeat.cpp Repeat.h ParseInput.h
	$(CC) -c Repeat.cpp

clean:
	rm -rf *o shape
