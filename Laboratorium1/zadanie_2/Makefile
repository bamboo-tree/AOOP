main: main.o Animal.o Dog.o Cat.o
	g++ -o app main.o Animal.o Dog.o Cat.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.o: *.h

clear:
	rm *.o
	rm app