#include <stdio.h>

void actualizar_x(int* x){
	*x + 1;
}

int main(){
	int x=10;
	int* p;
	
	p=&x;
	printf("%d\n",x);
	
	
	actualizar_x(p);
	printf("%ls\n",p);
}
