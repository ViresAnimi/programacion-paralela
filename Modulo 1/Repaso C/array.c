#include <stdio.h>

int main(){
	int x[4];
	
	x[0] = 1;
	x[1] = 10;
	x[2] = 20;
	x[3] = 40;
	
	printf("%d %d %d %d\n",x[1],x[2],x[3],x[4]);
	printf("%d %d %d %d\n",*x,*(x+1),*(x+2),*(x+3));
	printf("%lu\n",sizeof(x));
}
