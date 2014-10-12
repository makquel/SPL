# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

SPL: ./obj/PERCEPTRON_LEARNING.o ./obj/NEURON.o 
	$(CXX) $(CXXFLAGS) -o SPL ./obj/main.o ./obj/Point.o 

# The main.o target can be written more simply

./obj/main.o: ./src/main.cpp ./include/NEURON.h
	$(CXX) $(CXXFLAGS) -c main.cpp

./obj/NEURON.o: NEURON.h ./include

clean: rm -rf ./obj/*.o ./bin/