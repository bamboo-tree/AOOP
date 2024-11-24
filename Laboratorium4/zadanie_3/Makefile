main: main.o Citizen.o City.o
	g++ -o app main.o Citizen.o City.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.o: *.h

clear:
	rm *.o
	rm app