#include <stdio.h>

int main(){
	int num1 = -3;
	//unsight int num2 = 4;
	float num3 = 3.141;
	double num4 = 3.141;
	
	printf("%.6d %.10f %.20lf %lu %lu %lu\n",num1,num3,num4,sizeof(num1),sizeof(num3),sizeof(num4));
	//printf("%d %u %f %lf\n",num1,num2,num3,num4);
}
