CC = g++
FLAGS = -std=c++11
SOURCES = main.o TStackBottom.o TStackTop.o TAllocationBlock.o TStackItem.o Trapeze.o Rhombus.o Pentagon.o
EXECUTABLE = main
all: build

build: main.o TStackBottom.o TStackTop.o TAllocationBlock.o TStackItem.o Trapeze.o Rhombus.o Pentagon.o
	$(CC) $(FLAGS) -o $(EXECUTABLE) $(SOURCES)

main.o: main.cpp stack/TStackBottom.h stack/TStackTop.h stack/TAllocationBlock.h stack/TStackItem.h figure/Trapeze.h figure/Rhombus.h figure/Pentagon.h
	$(CC) $(FLAGS) -c main.cpp

TStackBottom.o: stack/TStackBottom.cpp stack/TStackBottom.h
	$(CC) $(FLAGS) -c stack/TStackBottom.cpp

TStackTop.o: stack/TStackTop.cpp stack/TStackTop.h
	$(CC) $(FLAGS) -c stack/TStackTop.cpp

TAllocationBlock.o: stack/TAllocationBlock.cpp stack/TAllocationBlock.h
	$(CC) $(FLAGS) -c stack/TAllocationBlock.cpp

TStackItem.o: stack/TStackItem.cpp stack/TStackItem.h
	$(CC) $(FLAGS) -c stack/TStackItem.cpp

Trapeze.o: figure/Trapeze.cpp figure/Trapeze.h
	$(CC) $(FLAGS) -c figure/Trapeze.cpp

Rhombus.o: figure/Rhombus.cpp figure/Rhombus.h
	$(CC) $(FLAGS) -c figure/Rhombus.cpp

Pentagon.o: figure/Pentagon.cpp figure/Pentagon.h
	$(CC) $(FLAGS) -c figure/Pentagon.cpp

clean:
	rm -f *.o
