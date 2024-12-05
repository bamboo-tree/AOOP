main: main.o Contact.o Contacts.o
	g++ -o app main.o Contact.o Contacts.o
	./app

main.o: main.cpp
	g++ -c main.cpp

*.o: *.h

clear:
	rm *.o
	rm app