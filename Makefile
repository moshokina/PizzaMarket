CC=g++
RM=rm -rf

SOURCES=main.cpp
EXECUTABLE=PizzaInfo

all: clean pizza_info

pizza_info: main.o

main.o:
	$(CC) $(SOURCES) -o $(EXECUTABLE)

clean:
	$(RM) $(EXECUTABLE)
