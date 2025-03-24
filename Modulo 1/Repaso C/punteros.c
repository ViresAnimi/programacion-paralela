#include <stdio.h>

int main(){
	int x = 10;
	int* p; //puntero que apunta a una variable de tipo int
	
	p = &x; //Los punteros siempre guardan direcciones a memoria
	
	printf("%d %d\n",x,*p); //*p dereferenciar, quiero ver el valor que esta guardado en la memoria en la ubicacion que esta el puntero p
	printf("%lu %lu\n",sizeof(x),sizeof(p));
}
