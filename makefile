main:  main.o
	g++ -o main main.o -std=c++11 -Wall -Wextra -DNDEBUG -v

main.o: main.cpp fonction.h
g++ -c main.cpp -o main.o -Wall -std=c++11
