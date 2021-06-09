#include<stdio.h>
void main()
{
	int i,a=2,b=2,c;
	for(i=1;i<=2;i++)
	{
		c = a==b;
		a = a-b;
		if(0)
			a=a+1;
		a = a+b+c;
	}
	printf("%d",a+b);
}

