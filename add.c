#include<stdio.h>
int main()
{
	int a,b,sum=1;
	scanf("%d %d",&a,&b);
	a=a+b;
	while(sum)
	{
		scanf("%d",&b);
		a += b;
	}
	printf("sum = %d",a);
}
