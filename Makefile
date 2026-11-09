CXX = g++
CXXFLAGS = -Iinclude -Wall
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

all: calculator

calculator: $(OBJ)
	$(CXX) -o calculator $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f calculator $(OBJ)

.PHONY: all clean
