main: main.o Dictionary.o
	g++ -o app main.o Dictionary.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.o: *.h

clear:
	rm *.o
	rm app