/******************************************************************************************
*	Author: Miguel Angel Cardenas 
*	Date:	2007 - 2008 
*******************************************************************************************
* 	Description: The class NEURON encapsulates a single layer neural network or perceptron
*******************************************************************************************/

#include "./include/NEURON.h"
#include <iostream>

#define ENABLE_PERCEPTRON_LEARNING  0

NEURON *neuronleft;
NEURON *neuronright;
const int Ni=17; //
const int Nd=8; //
int **examples; //set of examples
int s[8];
int lm,rm;


void Train_Perceptron (){
	int I1[8]={0,0,0,0,0,0,0,0};
 	int I2[8]={1,1,0,0,0,0,0,1};
 	int I3[8]={1,1,1,1,0,0,0,1};
 	int I4[8]={0,1,1,1,0,0,0,0};
 	int I5[8]={0,1,1,1,1,1,0,0};
 	int I6[8]={0,0,0,1,1,1,0,0};
 	int I7[8]={0,0,0,1,1,1,1,1};
 	int I8[8]={0,0,0,0,0,1,1,1};
 	int I9[8]={1,1,0,0,0,1,1,1};
 	int I10[8]={0,0,0,0,0,0,0,1};
 	int I11[8]={0,0,0,0,0,1,0,0};
 	int I12[8]={0,0,0,1,0,0,0,0};
 	int I13[8]={0,1,0,0,0,0,0,0};
 	int I14[8]={1,0,0,0,0,0,0,1};
 	int I15[8]={0,0,0,0,0,1,1,0};
 	int I16[8]={0,0,0,1,1,0,0,0};
 	int I17[8]={0,1,1,0,0,0,0,0};
	for(int i=0;i<Nd;i++){
	  	examples[i][0]=I1[i];
	  	examples[i][1]=I2[i];
	  	examples[i][2]=I3[i];
	  	examples[i][3]=I4[i];
	  	examples[i][4]=I5[i];
	  	examples[i][5]=I6[i];
	  	examples[i][6]=I7[i];
	  	examples[i][7]=I8[i];
	  	examples[i][8]=I9[i];
	  	examples[i][9]=I10[i];
	  	examples[i][10]=I11[i];
	  	examples[i][11]=I12[i];
	  	examples[i][12]=I13[i];
	  	examples[i][13]=I14[i];
	  	examples[i][14]=I15[i];
	  	examples[i][15]=I16[i];
	  	examples[i][16]=I17[i];
	}
 int ls[Ni]={1,1,-1,-1,-1,-1,1,1,1,1,-1,-1,1,1,1,-1,1};
 int rs[Ni]={1,-1,-1,-1,1,1,1,1,-1,1,1,-1,-1,-1,1,1,-1};
 bool statul=neuronleft->TRAIN(examples,ls);
 bool statur=neuronright->TRAIN(examples,rs);
 Edit1->Text=neuronleft->W[0];
 Edit2->Text=neuronleft->W[1];
 Edit3->Text=neuronleft->W[2];
 Edit4->Text=neuronleft->W[3];
 Edit5->Text=neuronleft->W[4];
 Edit6->Text=neuronleft->W[5];
 Edit7->Text=neuronleft->W[6];
 Edit8->Text=neuronleft->W[7];
 if(statul==true&&statur==true)
 	std::cout << "NEURAL NET HYPOTHESIS Created!";
  else
  std::cout << "Network Failed";


}

int main(int argc, char **argv)
{
	#if ENABLE_PERCEPTRON_LEARNING
	neuronleft = new NEURON(Nd,Ni,1);
 	neuronright = new NEURON(Nd,Ni,1);
 	examples = new int*[Nd];
 	for(int g=0;g<Nd;g++){
 		examples[g]=new int[Ni];
 	}
 	#endif
	return 0;
}