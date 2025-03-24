#include <stdio.h>
#include <stdlib.h>

int main(){

	int xN = 4;
	int yN = 4;
	
	double phi1[xN][yN];
	double* phi2 = malloc(xN*yN*sizeof(double));
	
	for (int i=0; i<xN; i++){
		for (int j =0; j<yN;j++){
			phi1[i][j] = i+j;
		}
	}
	
	
	for (int i=0; i<xN; i++){
		for (int j =0; j<yN;j++){
			phi2[i*yN+j] = i+j;
		}
	}
	
	
	for (int i=0; i<xN; i++){
		for (int j =0; j<yN;j++){
			printf("%d %d %d %f %f\n",i,j,i*yN+j,phi1[i][j],phi2[i*yN+j]);
		}
	}
}
