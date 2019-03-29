#include<stdio.h>
int main()
{
	int a,b=1;
	scanf("%d %d",&a,&b);
	a=a+b;
	printf("Enter 0 when Want to Show Total Sum of All No.\n);
	while(b)
	{
		scanf("%d",&b);
		a += b;
	}
	printf("sum = %d",a);
}
