#include <stdio.h>

int actualizar_x(int x){
	return x+1;
}

int main(){
	int x = 10;
	int y;
	
	y = actualizar_x(x);
	
	printf("%d %d\n",x,y);
}
