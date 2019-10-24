#include<stdio.h>
int main()
{
	int a,sum=0,n,i;
	printf("How much no you want to add : ");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Enter Number : ");
		scanf("%d",&a);
		sum += a;
		i++;
	}
	printf("sum = %d",sum);
}
