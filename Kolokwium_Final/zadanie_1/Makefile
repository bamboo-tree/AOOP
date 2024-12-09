main: main.o Bazowa.o Pochodna.o
	g++ -o app main.o Bazowa.o Pochodna.o
	./app

main.o: main.cpp
	g++ -c main.cpp

Bazowa.o : Bazowa.h
Pochodna.o : Pochodna.h

clear:
	rm *.o
	rm app