#include <stdio.h>
#include <stdlib.h>

int main(){

	int x[5];
	
	for (int i = 0; i < 5; i++){
		x[i] = i + 1;
	}

	for (int i = 0; i < 5; i++){
		printf("%d", x[i]);
	}
	printf("\n");

}
