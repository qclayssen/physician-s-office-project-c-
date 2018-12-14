all: main

main:  main.o
	g++ -o main main.o -std=c++11 -Wall

main.o: main.cpp
	g++ -c main.cpp -o main.o  -Wall -std=c++11

clean:
	rm -rf *.o
