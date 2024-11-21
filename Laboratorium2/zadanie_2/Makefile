main: main.o Employee.o Developer.o TeamLeader.o
	g++ -o app main.o Employee.o Developer.o TeamLeader.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.h: *.o

clear:
	rm *.o
	rm app