CC=g++
CFLAGS=-Wall -Wextra -pedantic --std=c++11
SRC=./src
INC=./include
INCFLAGS= -I
BIN = ./bin
OBJ = ./obj


EXEC=complex
 

all: $(EXEC) clean

$(EXEC): $(OBJ)/complex.o $(OBJ)/main.o $(INC)/complex.hpp
	$(CC) $^ -o $(BIN)/$@

$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/complex.hpp
	$(CC) $(INCFLAGS)$(INC) $(CFLAGS) $< -o $@ -c

$(OBJ)/complex.o: $(SRC)/complex.cpp $(INC)/complex.hpp
	$(CC) $(INCFLAGS)$(INC) $(CFLAGS) $< -o $@ -c

clean : 
	-rm -f $(OBJ)/*.o


distclean : clean
	-rm -f $(BIN)/items

.PHONY: all clean distclean

