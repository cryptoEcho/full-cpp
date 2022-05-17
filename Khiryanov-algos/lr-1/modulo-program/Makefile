# Make will parse the first task and find out that he needs generate program.o and mylib.o that will be crated by the following tasks
program: program.o mylib.o
	g++ -o program program.o mylib.o

mylib.o: mylib.cpp mylib.hpp
	g++ -c mylib.cpp

program.o: program.cpp mylib.hpp
	g++ -c program.cpp



