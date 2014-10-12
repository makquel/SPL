/******************************************************************************************
*	Author: Miguel Angel Cardenas 
*	Date:	2007 - 2008 
*******************************************************************************************
* 	Description: The class NEURON encapsulates a single layer neural network or perceptron
*******************************************************************************************/
#ifndef NEURONH
#define NEURONH


#include <stdlib.h> 
#include <time.h> 

class NEURON{
public:
	virtual ~NEURON();
 	NEURON(int ND,int NI,float ALPHA); //
 	bool TRAIN(int **IT,int *R); //
 	int USEIT(int *sensor); //
 	float *W; //Weight
 	int *X; //
 	int Y; //
 	int **IT; //set of examples
 	int *R;
private:
 	int CError;
 	int PERIOD;
 	float Error;
 	int ND;
 	int NI;
 	float ALPHA;
};
#endif

 