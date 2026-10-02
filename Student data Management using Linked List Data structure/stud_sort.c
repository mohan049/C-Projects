#include "student.h"
void sortrecord(SLL*ptr)
{
	char ch;
	printf("N/n : Sort with name\np/P : Sort with percentage\n");
	printf("Enter your choice\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'N' :
		case 'n' :accord_to_sort_name(ptr);break;
		case 'p' :
		case 'P' :accord_to_sort_percentage(ptr);break;
	}
}
void accord_to_sort_name(SLL*ptr)
{
	if(ptr==0)
	{
		printf("No records found\n");
		return;
	}
	SLL*p1=ptr,*p2,t;
	int i,j,c=countNode(ptr);
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(strcmp(p1->name,p2->name)>0)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
void accord_to_sort_percentage(SLL*ptr)
{
	if(ptr==0)
	{
		printf("No records found\n");
		return;
	}
	SLL*p1=ptr,*p2,t;
	int i,j,c=countNode(ptr);
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->percentage < p2->percentage)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
