TARGET = program

INCLUDE_DIR = include
CXX = g++
CXXFLAGS = -Wall -std=c++17 -I$(INCLUDE_DIR)

SRCS = src/main.cpp src/objects/vehicle.cpp src/objects/car.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
