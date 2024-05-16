CC=g++
CFLAGS=-c -Wall
TARGET=Logistics

SRC=$(shell find $("Logistics") -name '*.cpp')
OBJ=$(patsubst %.cpp, %.o, $(SRC))

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o : %.cpp
	$(CC) -c $< -o $@

clean:
	rm -rf $(shell find $("Logistics") -name '*.o') *.o