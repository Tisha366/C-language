//w.a.c.p to count the digits of a whole number//
#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	while (n!=0)
	{
		n=n/10;
		c++;
	}
	printf("number of digits = %d",c);
	return 0;
}
	
	
