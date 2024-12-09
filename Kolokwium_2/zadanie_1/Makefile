main: main.o Grupa.o
	g++ -o app main.o Grupa.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.o: *.h

clear:
	rm *.o
	rm app