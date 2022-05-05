CC = g++
CFLAGS = -Wall #-g3
 
 
main: main.o HappyChrono.o
  $(CC) $(CFLAGS) -o main main.o HappyChrono.o
 
main.o: main.cpp HappyChrono.hpp
	$(CC) $(CFLAGS) -c main.cpp
 
HappyChrono.o: HappyChrono.cpp
	$(CC) $(CFLAGS) -c HappyChrono.cpp
	
clean:
	rm *.o main
