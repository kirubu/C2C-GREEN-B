#include<stdio.h>
void main()
{
	// +,-,*,/,% --> return value based on type of operation
	int a = 45, b = 5, c;
	float x = 45.625, y = 5.125,z;
	printf("%d %d %d\n",a+b, a-b, a*b);
	printf("%d\n",a/b);
	printf("%d\n",a%b);
	//z = x%y;error
	//printf("%f\n",z);
}
