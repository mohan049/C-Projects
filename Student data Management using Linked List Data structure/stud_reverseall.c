#include "student.h"
void reverseallrecord(SLL**ptr)
{
	if(*ptr==0)
	{
		printf("No records found\n");
		return;
	}
	int i,k=countNode(*ptr);
	SLL**a,*t=*ptr;
	if(k>1)
	{
		a=malloc(sizeof(SLL*)*k);
		for(i=0;i<k;i++)
		{
			a[i]=t;
			t=t->next;
		}
		for(i=k-1;i>0;i--)
			a[i]->next=a[i-1];
		a[0]->next=0;
		*ptr=a[k-1];
	}
}
int countNode(SLL*ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
