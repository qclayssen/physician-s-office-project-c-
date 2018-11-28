main:  main.o
	g++ -o main main.o -std=c++11 -Wall -Wextra -DNDEBUG  --cflags --libs

main.o: main.cpp fonction.hpp
	g++ -c main.cpp -o main.o -Wall -std=c++11
