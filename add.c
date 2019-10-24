#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter your Number As long as you want to add if you want total sum then enter 0 \n");
	while(a)
	{
		scanf("%d",&a);
		sum=sum+a;
	}
	
	printf("sum = %d",sum);
}
