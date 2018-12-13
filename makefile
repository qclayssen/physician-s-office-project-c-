all: main

main:  main.o
	g++ -o main main.o -no-pie -std=c++11 -Wall

main.o: main.cpp fonction.hpp
	g++ -c main.cpp -o main.o  -Wall -std=c++11

clean:
	rm -rf *.o
