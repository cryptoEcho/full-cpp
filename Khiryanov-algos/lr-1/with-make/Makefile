.PHONY: all clean install uninstall

all: program

clean:
	rm -rf mylib *.o

mylib.o: mylib.cpp mylib.hpp
	g++ -c mylib.cpp -o mylib.o

program.o: program.cpp mylib.hpp
	g++ -c program.cpp -o program.o


program: mylib.o program.o
	g++ mylib.o program.o -o program

install:
	install ./program /usr/local/bin

uninstall:
	rm -rf /usr/local/bin/program