#include <stdio.h>

struct vector{
	int x,y,z;	
};

int main(){
	struct vector v;
	v.x = 10;
	v.y = 12;
	v.z = 15;
	
	printf("%d %d %d\n",v.x,v.y,v.z);
}

//#typedef para cambiar el nombre de la variable
