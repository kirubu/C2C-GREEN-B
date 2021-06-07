#include<stdio.h>
void main()
{
	int a;//4b
	float b;//4b
	double d;//8b
	long int li;//minimum 8b
	long long int lli;//minimum 8b
	long double ldb;//16b
	char c;
	
	scanf("%d",&a);//scanf("%d %d %d",&a,&b,&c);//
	scanf("%f",&b);
	scanf("%lf",&d);
	scanf("%ld",&li);
	scanf("%lld",&lli);
	scanf("%lf",&ldb);
	scanf("%c",&c);
	
	printf("---------------\n");
	printf("%d\n",a);
	printf("%f\t",b);
	printf("%lf\n",d);
	printf("%lf\n",d);
	
	
}
