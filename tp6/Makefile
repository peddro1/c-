CXX = g++
CXXFLAGS =  -pedantic -std=c++11 -Wall -Wextra
LINK.o = $(LINK.cc)
SRC_PATH=./src
MAIN_EXE=./bin/main
INCLUDE_PATH=./include
CXXFLAGS=-I$(INCLUDE_PATH)
OBJS=$(SRC_PATH)/main.o $(SRC_PATH)/iterators.o


.PHONY: all clean

all: $(MAIN_EXE)

$(MAIN_EXE): $(OBJS) 
	$(CXX) $^  -o $@ 

$(SRC_PATH)/%.o: $(SRC_PATH)/%.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(MAIN_EXE) ./src/*.o