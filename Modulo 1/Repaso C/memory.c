#include <stdio.h>

struct datos1
{
	short s; //2 bytes + 2 padding
	int i; //4 bytes
	char c; //1 byte + 3 padding
};

struct datos2
{
	int i; //4 bytes
	char c; //1 byte
	short s; //2 bytes + 1 padding
};

int main(){
	struct datos1 d1;
	struct datos2 d2;
	
	printf("%f %f\n",d1,d2);
}
