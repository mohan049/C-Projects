#include "student.h"
void add_record(SLL **ptr)
{
	struct student *new, *temp;
	int roll = 1;
	int found;

	new = malloc(sizeof(struct student));

	if (new == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}


	while (1)
	{
		found = 0;
		temp = *ptr;

		while (temp != NULL)
		{
			if (temp->rollno == roll)
			{
				found = 1;
				break;
			}

			temp = temp->next;
		}

		if (found == 0)
			break;

		roll++;
	}

	new->rollno = roll;

	printf("Enter student name: ");
	scanf("%s", new->name);

	printf("Enter percentage: ");
	scanf("%f", &new->percentage);

	new->next = NULL;

	if (*ptr == NULL)
	{
		*ptr = new;
	}
	else
	{
		temp = *ptr;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}

}
