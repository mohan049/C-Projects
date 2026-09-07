#include <stdio.h>
int Check_Strong (int *p )
{
	int r,sum=0,t1,a,mul;
	t1=*p;
	for(sum=0,t1;t1;t1=t1/10)
	{
		r=t1%10;
		for(a=1,mul=1;a<=r;a++)
			mul=mul*a;
		sum=sum+mul;
	}

	if(*p==sum)
		return 1;
	else
		return 0;
}
void strong_Range(int n1 ,int n2 )
{
	int  i,t1,r,sum,mul,a;
	printf("Strong numbers are : ");
	for(i=n1;i<=n2;i++)
	{
		t1=i;
		for(sum=0,t1;t1;t1=t1/10)
		{
			r=t1%10;
			for(a=1,mul=1;a<=r;a++)
				mul=mul*a;
			sum=sum+mul;
		}
		if(i==sum)
			printf("%d ",i);
	}
}
int strong_Count(int *p ,int *q)
{
	int c=0,i,sum,t1,r,a,mul;
	for(i=*p;i<=*q;i++)
	{
		t1=i;
		for(sum=0,t1;t1;t1=t1/10)
		{
			r=t1%10;
			for(a=1,mul=1;a<=r;a++)
				mul=mul*a;
			sum=sum+mul;
		}
		if(i==sum)
			c++;
	}
	return c;
}
