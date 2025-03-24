#include <stdio.h>
#include <stdlib.h>

#define N 10000000 //diez millones


int main(){
	
	// double x[N]; //Esto es un error en la memoria. Cambiar el array de lugar cambia donde lo estamos guardando el memoria (stack vs heap)
	
	double* x = malloc(N * sizeof(double));
	printf("%lu\n",sizeof(double)*N/1024/1024); //1024 es un kilobytes

}
