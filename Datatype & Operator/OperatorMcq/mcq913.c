#include<stdio.h>
void main()
{
	int a=6,b=3,c;
	for(c=b;c<=a-2;c++)
	{
		if(a-c)
			a = a-b;
		a = a+b;
		if(a+c)
			a = a+b;
		a = a-b;
	}
	printf("%d",a);
}
