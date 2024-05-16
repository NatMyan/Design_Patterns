CC=g++ -std=c++17
CFLAGS=-g -std=c++17 -Wall -pedantic
TARGET=AbstractFactory

SRC=$(shell find . $("4.Abstract Factory") -name '*.cpp')
OBJ=$(patsubst %.cpp, %.o, $(SRC))

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o : %.cpp
	$(CC) -c $< -o $@

clean:
	rm -rf $(shell find $("4.Abstract Factory") -name '*.o') *.o
