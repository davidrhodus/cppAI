CC=g++

all: one.exe

one.exe: one.o
	 $(CC) -o one.exe one.o

one.o: one.cpp
	 $(CC) -c one.cpp
     
clean:
	 rm one.o one.exe