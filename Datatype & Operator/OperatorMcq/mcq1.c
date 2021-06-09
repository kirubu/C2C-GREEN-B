#include<stdio.h>
void main()
{
	int a=2,b=3,c=4;
	a = a +(a&b);
	b = b +(b&c);
	c = c +(c&a);
	a = a -(a&b);
	b = b -(b&c);
	c = c -(c&a);
	printf("%d",a+b+c);
}
