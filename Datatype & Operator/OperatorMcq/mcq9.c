#include<stdio.h>
void main()
{
	int p=4,q=1,r,s;
	for(r=0;r<=4;r++)
	{
		p = p - r;
		for(s=-2;s<=2;s++)
		{
			q = p + s - r;
			if(r+s>1 || r-s<3)
				continue;
			p = q + r + s;
		}
	}
	printf("%d",p+q);
}
