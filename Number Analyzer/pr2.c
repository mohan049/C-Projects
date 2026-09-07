#include <stdio.h>
//Main Menu Function
//	--------------------------->
void mainMenu(void)
{
	printf("\n");
	printf("=== Number Analyzer =======\n");
	printf("1. Prime Number\n");
	printf("2. Perfect Number\n");
	printf("3. Strong Number\n");
	printf("4. Armstrong Number\n");
	printf("5. Palindrome Number\n");
	printf("6. Exit\n");
	printf("****************** \n");
}
//Sub Menu Function
//	------------------------>
void subMenu(void)
{
	printf("1. Check Number\n");
	printf("2. Check Range\n");
	printf("3. Count \n");
	printf("4. Back\n");
	printf("-------------------------\n");
}
//Prime Function
//	----------------->
int Check_Prime (int *p )
{
	int i;
	for(i=2;i<*p;i++)
		if(!(*p%i))
			break;
	if(*p==i)
		return 1;
	else
		return 0;
}
void prime_Range(int n1 ,int n2 )
{
	int  i;
	printf("prime numbers are : ");
	for(n1;n1<=n2;n1++)
	{
		for(i=2;i<n1;i++)
			if(!(n1%i))
				break;
		if(n1==i)
			printf("%d ",n1);
	}
}
int prime_Count(int *p ,int *q)
{
	int c=0,i;
	for(*p;*p<=*q;++*p)
	{
		for(i=2;i<*p;i++)
			if(!(*p%i))
				break;
		if(*p==i)
			c++;
	}
	return c;
}
