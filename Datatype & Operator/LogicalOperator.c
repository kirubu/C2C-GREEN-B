#include<stdio.h>
void main()
{
	// &&, ||, !--> to merge more than 1 condition, return value either 0 or 1
	int a = 45, result;
	
	result = a>18 && a<=60;
	printf("%d\n",result);//1
	
	a = 10;
	result = a>18 || a<=60;
	printf("%d\n",result);//1
	
	result = a>18 && a<=60;
	printf("%d\n",result);//0
	
	a = 70;
	result = a>18 || a<=60;
	printf("%d\n",result);//1
}
