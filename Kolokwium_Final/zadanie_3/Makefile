main: main.o GrupaDziekanska.o
	g++ -o app main.o GrupaDziekanska.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.o: *.h

clear:
	rm app
	rm *.o