#include<stdio.h>
void main()
{
	int j=2,m=2;
	int a[6] = {6,6,6,3,3,3};
	a[1] = a[1] - a[2];
	if(a[1]>0)
		a[1] = 1;
	else
	{
		a[2] = 2;
		a[3] = 3;
	}
	m = a[1+m] + a[j];
	printf("%d",m);
}
