#include <stdio.h>
int Check_Palindrome (int *p )
{
	int r,rev,t1;
	t1=*p;
	for(rev=0,t1;t1;t1=t1/10)
	{
		r=t1%10;
		rev=rev*10+r;
	}
	if(*p==rev)
		return 1;
	else
		return 0;
}
void palindrome_Range(int n1 ,int n2 )
{
	int  i,t1,r,rev;
	printf("Palindrome numbers are : ");
	for(i=n1;i<=n2;i++)
	{
		t1=i;
		for(rev=0,t1;t1;t1=t1/10)
		{
			r=t1%10;
			rev=rev*10+r;
		}
		if(i==rev)
			printf("%d ",i);
	}
}
int palindrome_Count(int *p ,int *q)
{
	int c=0,i,t1,r,rev;
	for(i=*p;i<=*q;i++)
	{
		t1=i;
		for(rev=0,t1;t1;t1=t1/10)
		{
			r=t1%10;
			rev=rev*10+r;
		}
		if(i==rev)
			c++;
	}
	return c;
}
