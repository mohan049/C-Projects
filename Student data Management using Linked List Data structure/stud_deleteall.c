#include "student.h"
void deleteallrecord(SLL**ptr)
{
	if(*ptr==0)
	{
		printf("No records available\n");
		return;
	}
	int c=1;
	SLL*del=*ptr;
	while(del)
	{
		*ptr=del->next;
		printf("node deleted : %d\n",c++);
		free(del);
		del=*ptr;
	}
	printf("all nodes deleted\n");
}
