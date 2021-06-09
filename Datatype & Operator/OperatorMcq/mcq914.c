#include<stdio.h>
void main()
{
	int x=17,y=89,p;
	p = x ^ y;
	x = x - 5;
	y = y - 7;
	printf("%d",p);
}
