CXX = g++
CXXFLAGS = -pedantic -std=c++11 -Wall -Wextra
LINK.o = $(LINK.cc)

.PHONY: all clean

all: set_test

main: set_test.o

main.o: set_test.cpp Set.h

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f main *.o