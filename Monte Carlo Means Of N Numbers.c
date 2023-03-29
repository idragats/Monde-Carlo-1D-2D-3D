/*  calculate the mean of random numbers, [0,1]  */
/*     at every time we change the number        */
/*     Í=10,100,1000,10000,100000,1000000        */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define seed 4375    // AEM numper for seed
#define Nmin 10      // start number of N
#define Nmax 1000000 // end number of N
int main(){
	FILE *RandomWalk;
	int i;             // for calculating sum of random number
	int N;            //for N steps
	float sum,Mu;
	
	srand(seed);     // create a random number with same seed
	
	RandomWalk=fopen("RandomWalk.txt","w");  // text file to write data
	
	for (N=Nmin; N<=Nmax; N=N*10){		
     	double*Nums=malloc(N*sizeof(double));   // array  to hold N,  random numbers  for evrey N
			   sum=0.0;
			   for (i=1; i<=N; i++){
      	           
      	           Nums[i]=(double)rand() / (double)((unsigned)RAND_MAX + 1);  // alocate memory 
      	           
               } 
		for (i=1; i<=N; i++){
      	           
      	        sum+=Nums[i];      // calculate sum of random numbers      	           
        } 		
		Mu=(double)sum/N;
		printf("%4.8f,%4.8f\n",log10(N),Mu);
		fprintf(RandomWalk, "%f, %f\n",log10(N),Mu);  //  write data 
		
		free(Nums);  //delocate memory
	}	
	fclose(RandomWalk);  // close file 
	return(0);
} 
