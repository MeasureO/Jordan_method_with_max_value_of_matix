all: 
	g++ -c main.cpp -o main.o
	g++ main.o -o main.out
	./main.out
	rm *.o *.out