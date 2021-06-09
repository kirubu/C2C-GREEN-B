#include<stdio.h>
void main()
{
	int a=15,b=71,c=4;
	if(a>c+100)
	{
		if(b>c)
		{
	  		c = b;
	  		b = a;
	  		a = c;
		}
		b = a;
	}
	else
		a = c+b;
	printf("%d",a+b+c);
}
