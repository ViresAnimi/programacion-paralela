#include <stdio.h>

int sumar_numeros(int a,int b){
	return a+b;
}

int main(){
	
	int x = 19;
	int y = 20;
	int z;
	
	z = sumar_numeros(x,y);
	
	printf("%d %d %d\n",x,y,z);	
	
}
