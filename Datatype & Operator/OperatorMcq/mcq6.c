#include<stdio.h>
void main()
{
	int p=5,q=13,r=2;
	if(1)
	{
		p = 10;
		if(0)
			q= 1;
		else
			r = 1;
	}
	printf("%d",p+q+r);
}
