#include<stdio.h>
void main()
{
	int p=12,q=1,r=3;
	if(q<p)
	{
		p = q;
		q = r;
		r = p;
		if(p)
		{
			r= q;
			p= q;
		}
		q=r;
		r=p;
		if(r)
		{
			q=1;r=1;
			p=r;
		}
	}
	printf("%d",p+q+r);
}
