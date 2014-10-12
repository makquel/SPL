# I am a comment, and I want to say that the variable CC will be
# the compiler to use.CC = g++
LD = g++
LDFLAGS =
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS = -O3 -Wall 
#-lopengl32 -lglut32
LIBS = 
#-lGL -lGLU -lglut -lpthread
OBJ = ./obj
BIN = ./bin/SPL
SRC = ./src
INCLUDE = ./include

all : $(BIN)
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
 
$(OBJ)/PERCEPTRON_LEARNING.o: $(SRC)/PERCEPTRON_LEARNING.cpp $(INCLUDE)/NEURON.h
	$(CC) $(CFLAGS) $(LIBS) $(SRC)/PERCEPTRON_LEARNING.cpp

$(OBJ)/NEURON.o: $(SRC)/NEURON.cpp
	$(CC) $(CFLAGS) $(LIBS) $(SRC)/NEURON.cpp $(INCLUDE)NEURON.h

#.PHONY: clean mrproper  

clean:
	rm -rf $(OBJ)/*.o $(BIN) 

#g++ PERCEPTRON_LEARNING.cpp ./include/NEURON.h ./src/NEURON.cpp -o SPL