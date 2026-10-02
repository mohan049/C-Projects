#include "student.h"
void showrecord(SLL*ptr)
{
	if(ptr==0)
	{
		printf("No records found\n");
		return ;
	}
	printf("Roll No.  Name    percentage \n");
	while(ptr)
	{
		printf("%d %s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
}

