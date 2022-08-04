CC = g++
CFLAGS = -Wall 
LIBRARIES = -framework Cocoa -framework OpenGL -framework IOKit -lglfw3

all: mainapp

mainapp: main.o glad.o 
	$(CC) $(CFLAGS) $(LIBRARIES) main.o glad.cpp -o output

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm output main.o glad.o


