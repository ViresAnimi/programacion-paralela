#include <stdio.h>
#include <stdlib.h>

int main(){
	int* x;
	x = malloc(4*sizeof(int));
	
	x[0] = 1;
	x[1] = 10;
	x[2] = 20;
	x[3] = 40;

	printf("%d %d %d %d\n",*x,*(x+1),*(x+2),*(x+3));
}
