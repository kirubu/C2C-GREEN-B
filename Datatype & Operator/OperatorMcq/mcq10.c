#include<stdio.h>
void main()
{
	int p=4,q=2,r=2;
	p = p+q-2;
	q = q+r-2;
	if(r>p && q>p)
	{
		p = 0;
		q = p;
	}
	printf("%d",p+q);
}
