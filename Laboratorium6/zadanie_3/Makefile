main: main.o
	g++ -o app main.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.o: *.h

clear:
	rm *.o
	rm app