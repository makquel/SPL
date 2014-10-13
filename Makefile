CC = g++
LD = g++
LDFLAGS =
CFLAGS = -O3 -Wall -lopengl32 -lglut32
LIBS = -lGL -lGLU -lglut -lpthread
OBJ = ./obj
BIN = ./bin/SPL
SRC = ./src
INCLUDE = ./include

all : $(BIN)
#all: SPL
	@echo "*************************"
	@echo "NEURAL-NET-HYPOTHESIS"
	@echo	
	@echo
	@echo "Built ..."
	@echo
	@echo 
	@echo "Done."
	@echo "*************************"

$(BIN): $(OBJ)/PERCEPTRON_LEARNING.o $(OBJ)/NEURON.o
	$(LD) $(LDFLAGS) $(LIBS) $(OBJ)/PERCEPTRON_LEARNING.o $(OBJ)/NEURON.o -o $(BIN) 
 
$(OBJ)/PERCEPTRON_LEARNING.o: $(SRC)/PERCEPTRON_LEARNING.cpp
	$(CC) $(CFLAGS) $(LIBS) -c $(SRC)/PERCEPTRON_LEARNING.cpp $(INCLUDE) -o $(OBJ)/PERCEPTRON_LEARNING.o 

$(OBJ)/NEURON.o: $(SRC)/NEURON.cpp
	$(CC) $(CFLAGS) $(LIBS) -c $(SRC)/NEURON.cpp $(INCLUDE) #-o $(OBJ)/NEURON.o 	

.PHONY: clean   

clean:
	rm -rf ./obj/*.o ./bin/

