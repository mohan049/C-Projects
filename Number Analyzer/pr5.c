#include <stdio.h>
int Check_Armstrong (int *p )
{
	int r,sum=0,t1,t2,a,c=0,mul;
	t1=t2=*p;
	for(t2;t2;t2=t2/10)
		c++;
	for(sum=0,t1;t1;t1=t1/10)
	{
		r=t1%10;
		for(a=1,mul=1;a<=c;a++)
			mul=mul*r;
		sum=sum+mul;
	}

	if(*p==sum)
		return 1;
	else
		return 0;
}
void armstrong_Range(int n1 ,int n2 )
{
	int  i,t1,t2,r,sum,mul,a,c;
	printf("Armstrong numbers are : ");
	for(i=n1;i<=n2;i++)
	{
		t1=t2=i,c=0;
		for(t2;t2;t2=t2/10)
			c++;
		for(sum=0,t1;t1;t1=t1/10)
		{
			r=t1%10;
			for(a=1,mul=1;a<=c;a++)
				mul=mul*r;
			sum=sum+mul;
		}
		if(i==sum)
			printf("%d ",i);
	}
}
int armstrong_Count(int *p ,int *q)
{
	int c=0,c1=0,i,sum,t1,t2,r,a,mul;
	for(i=*p;i<=*q;i++)
	{
		t1=t2=i,c=0;
		for(t2;t2;t2=t2/10)
			c++;
		for(sum=0,t1;t1;t1=t1/10)
		{
			r=t1%10;
			for(a=1,mul=1;a<=c;a++)
				mul=mul*r;
			sum=sum+mul;
		}
		if(i==sum)
			c1++;
	}
	return c1;
}
