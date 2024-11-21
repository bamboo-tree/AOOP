main: main.o Bufor.o MeanBufor.o MaxBufor.o
	g++ -o app main.o Bufor.o MeanBufor.o MaxBufor.o
	./app

main.o:
	g++ -c main.cpp

*.o: *.h

clear:
	rm *.o
	rm app