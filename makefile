all: test

test: main.cpp
	g++ -lncurses main.cpp -o test
 