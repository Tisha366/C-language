//1+2+4+7+11+...upto n terms. w.c.p to calculate sum of nthe given series.//
#include<stdio.h>
int main()
{
	int i=1,n,sum=0,term=1,d=1;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+d;
		d++;
		i++;
	}
	printf("sum of the series=%d\n",sum);
	return 0;
}
