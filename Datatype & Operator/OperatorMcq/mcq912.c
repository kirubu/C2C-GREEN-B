#include<stdio.h>
void main()
{
	int p=18,q=3,r=14;
	if(p<q)
		p = q + q;
 	else
 	{
 		q = p;
 		if(r>q)
			r = q + q;
		else
			q = r + r;
	}
	printf("%d",p+q+r);
}
