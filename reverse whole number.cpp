//w.a.c.p to reverse digit of a whole number//
#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reverse=%d",rev);
	return 0;
}
