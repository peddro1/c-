CXX = g++
CXXFLAGS = -pedantic -std=c++11 -Wall -Wextra
MAIN_OBJ=./obj/main.o
MAIN_EXE=./bin/main
INCLIB=./include/*.hpp
LINK.o =$(LINK.cc)


.PHONY: all clean

all: $(MAIN_EXE)

$(MAIN_EXE): $(MAIN_OBJ) ./obj/%.o
	$(CXX) -o $@ $^ 

$(MAIN_OBJ): ./src/main.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I./include

./obj/%.o: ./src/%.cpp $(INCLIB)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I./include


clean:
	rm -f $(MAIN_EXE) ./obj/*.o