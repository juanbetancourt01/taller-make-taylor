CXX      = g++
CXXFLAGS = -std=c++17 -Wall -lm
TARGET   = taylor
SRC      = main.cpp

build:
    $(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run:
    ./$(TARGET)

clean:
    rm -f $(TARGET)
