#include "student.h"
void deleterecord(SLL**ptr)
{
	printf("R/r : Enter roll number to delete\nN/n : Enter name to delete\n");
	char ch;
	printf("Enter your choice : \n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'R' :
		case 'r' :delete_rollno(ptr);break;
		case 'N' :
		case 'n' :delete_name(ptr);break;
	}
}
void delete_rollno(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No records found\n");
		return ;
	}
	int num;
	printf("ENter a rollno to delete\n");
	scanf("%d",&num);
	SLL*del=*ptr,*prev;
	while(del)
	{
		if(num==del->rollno)
		{
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next;
			free(del);
			printf("rollno successfully deleted\n");
			return ;
		}
		prev=del;
		del=del->next;
	}
	printf("rollno not found\n");
}
void delete_name(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No records found\n");
		return;
	}
	char a[20];
	printf("Enter name to delete\n");
	scanf("%s",a);
	SLL*m=*ptr;
	int c=0;
	while(m)
	{
		if(strcmp(a,m->name)==0)
			c++;
		m=m->next;
	}
	if(c>1)
	{
		SLL*k=*ptr;
		while(k)
		{
			if(strcmp(a,k->name)==0)
				printf("%d %s %f\n",k->rollno,k->name,k->percentage);
			k=k->next;
		}
	}
	else
	{
		SLL*del=*ptr,*prev;
		while(del)
		{
			if(strcmp(a,del->name)==0)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				if(c==1)
					printf("name successfully deleted\n");
				return ;
			}
			prev=del;
			del=del->next;
		}
		printf("Name not found\n");
	}
}
