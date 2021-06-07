#include<stdio.h>
void main()
{
	// >,<,<=,>=,==,!= --> comparing two values --> return value either 0 or 1
	int a=45,b=56;
	
	printf("%d\n",a>b);//0    56>56--> 0 57>56-->1
	printf("%d\n",a<b);//1
	printf("%d\n",a>=b);//0     56>=56--> 1 57>=56-->1
	printf("%d\n",a<=b);//1
	printf("%d\n",a==b);//0
	printf("%d\n",a!=b);//1
}
