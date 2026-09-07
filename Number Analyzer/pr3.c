#include <stdio.h>
int Check_Perfect (int *p )
{
	int i,sum=0;
	for(i=1;i<*p;i++)
		if(!(*p%i))
			sum=sum+i;
	if(*p==sum)
		return 1;
	else
		return 0;
}
void perfect_Range(int n1 ,int n2 )
{
	int  i,sum;
	printf("Perfect numbers are : ");
	for(n1;n1<=n2;n1++)
	{
		for(i=1,sum=0;i<n1;i++)
			if(!(n1%i))
				sum=sum+i;
		if(n1==sum)
			printf("%d ",n1);
	}
}
int perfect_Count(int *p ,int *q)
{
	int c=0,i,sum;
	for(*p;*p<=*q;++*p)
	{
		for(i=1,sum=0;i<*p;i++)
			if(!(*p%i))
				sum=sum+i;
		if(*p==sum)
			c++;
	}
	return c;
}
