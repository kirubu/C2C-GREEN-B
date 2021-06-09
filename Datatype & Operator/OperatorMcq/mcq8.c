#include<stdio.h>
int funn(int a, int b)
{
	int c;
	for(c=1;c<=3;c++)
		a = a+c;
	if(a<b)
	{
		if(a>2)
			return a+b;
		else
			return b;
	}
	else
		return b+a;
}
void main()
{
	printf("%d",funn(2,3));
}

