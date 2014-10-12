/******************************************************************************************
* Author: Miguel Angel Cardenas 
* Date: 2007 - 2008 
*******************************************************************************************
*   Description: The class NEURON encapsulates a single layer neural network or perceptron
*******************************************************************************************/

#include "../include/NEURON.h"


NEURON::NEURON(int ND,int NI,float ALPHA)
{
  srand((unsigned)time(NULL));
  PERIOD=0;
  W = new float[ND];
  X = new int[ND];
  R = new int[NI];
  IT = new int*[ND];
  for(int a=0;a<ND;a++){
    IT[a]=new int [NI];
  }
  for(int i=0;i<ND;i++){
    for(int j=0;j<NI;j++){
      IT[i][j]=0;
    }
  }
  for(int s=0;s<ND;s++){
    X[s]=0;
  }
  for(int x=0;x<NI;x++){
    R[x]=0;
  }
  for(int r=0;r<ND;r++){
    W[r]=rand()%200;
    W[r]/=100;
    W[r]-=1;
  } 
}

NEURON::~NEURON()
{
  delete W;
  delete X;
  delete R;
  delete IT;
}

bool NEURON::TRAIN(int **IT,int *R)
{

  float S;
  do{
    PERIOD+=1;
    CError=0;
    for(int y=0;y<NI;y++){
      S=0;
      for(int x=0;x<ND;x++){
        X[x]=IT[x][y];
      }
      for(int r=0;r<ND;r++){
        S+=X[r]*W[r]; // Compute the weighted sum
      }S+=1;
      if(S<0)
        Y=-1;
      if(S>=0)
        Y=1;
      Error=R[y]-Y; // Compute the error
      if(Error!=0){
        CError+=1;
        for(int t=0;t<ND;t++){
          W[t]+=X[t]*Error*ALPHA; // Adjust the weights
        }
      }
    }
    }while(CError!=0);
    if(CError==0)
      return true;
    else
      return false; 
}

int NEURON::USEIT(int *sensor)
{
  float S;
  X=sensor;
  S=0;
  for(int r=0;r<ND;r++){
    S+=X[r]*W[r];
  }S+=1;
  if(S<0)
    Y=-1;
  if(S>=0)
    Y=1;
  return Y;
}

