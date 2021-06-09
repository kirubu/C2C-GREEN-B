#include<stdio.h>
void main()
{
	int p=3,q=2,r=4;
	r = p & (r+1);
	r = p & (r+1);
	printf("%d",p+q+r);
}
