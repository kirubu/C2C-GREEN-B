#include<stdio.h>
void main()
{
	int p=2,q=7,r=2;
	p = p << 1;
	if(p || q)
	{
		p = p & q;
		q = q & q;
	}
	r = r % r;
	printf("%d",p+q+r);
}
