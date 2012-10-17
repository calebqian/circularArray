


all: main.o CircularArray.o main

main:   main.o CircularArray.o main.cpp CircularArray.cpp CircularArray.h
	g++ -Wall main.o CircularArray.o -o main

main.o: main.cpp CircularArray.o
	g++ -c main.cpp -o main.o


CircularArray.o: CircularArray.cpp CircularArray.h
	g++ -c CircularArray.cpp -o CircularArray.o


clean:
	rm -f *.o main
	
