#include "student.h"
void modifyrecord(SLL **ptr)
{
	char ch;

	if(*ptr == 0)
	{
		printf("No records found\n");
		return;
	}

	printf("Enter which record to search for modification\n");
	printf("R/r : Search by roll number\n");
	printf("N/n : Search by name\n");
	printf("P/p : Search by percentage\n");

	printf("Enter your choice : ");
	scanf(" %c", &ch);

	switch(ch)
	{
		case 'R':
		case 'r':modify_rollno(ptr); break;

		case 'N':
		case 'n':modify_name(ptr);break;

		case 'P':
		case 'p':modify_percentage(ptr);break;

		default:
			 printf("Invalid choice\n");
	}
}

void modify_rollno(SLL **ptr)
{
	int roll;
	SLL *p = *ptr;

	printf("Enter roll number to search : ");
	scanf("%d", &roll);

	while(p)
	{
		if(p->rollno == roll)
		{
			printf("Current details:\n");
			printf("Roll No : %d\n", p->rollno);
			printf("Name    : %s\n", p->name);
			printf("Percentage : %.2f\n", p->percentage);

			printf("Enter updated name : ");
			scanf("%s", p->name);

			printf("Enter updated percentage : ");
			scanf("%f", &p->percentage);

			printf("Record modified successfully\n");
			return;
		}

		p = p->next;
	}

	printf("Roll number not found\n");
}

void modify_name(SLL **ptr)
{
	char name[20];
	SLL *p = *ptr;
	int count = 0;
	int roll;

	printf("Enter name to search : ");
	scanf("%s", name);

	while(p)
	{
		if(strcmp(name, p->name) == 0)
		{
			printf("%d %s %.2f\n",
					p->rollno, p->name, p->percentage);
			count++;
		}

		p = p->next;
	}

	if(count == 0)
	{
		printf("Name not found\n");
		return;
	}

	if(count == 1)
	{
		p = *ptr;

		while(p)
		{
			if(strcmp(name, p->name) == 0)
			{
				printf("Enter updated name : ");
				scanf("%s", p->name);

				printf("Enter updated percentage : ");
				scanf("%f", &p->percentage);

				printf("Record modified successfully\n");
				return;
			}

			p = p->next;
		}
	}

	printf("More than one record found.\n");
	printf("Enter roll number of record to modify : ");
	scanf("%d", &roll);

	p = *ptr;

	while(p)
	{
		if(p->rollno == roll && strcmp(name, p->name) == 0)
		{
			printf("Enter updated name : ");
			scanf("%s", p->name);

			printf("Enter updated percentage : ");
			scanf("%f", &p->percentage);

			printf("Record modified successfully\n");
			return;
		}

		p = p->next;
	}

	printf("Roll number not found for the given name\n");
}

void modify_percentage(SLL **ptr)
{
	float percentage;
	SLL *p = *ptr;
	int count = 0;
	int roll;

	printf("Enter percentage to search : ");
	scanf("%f", &percentage);

	while(p)
	{
		if(p->percentage == percentage)
		{
			printf("%d %s %.2f\n",
					p->rollno, p->name, p->percentage);
			count++;
		}

		p = p->next;
	}

	if(count == 0)
	{
		printf("Percentage not found\n");
		return;
	}

	if(count == 1)
	{
		p = *ptr;

		while(p)
		{
			if(p->percentage == percentage)
			{
				printf("Enter updated name : ");
				scanf("%s", p->name);

				printf("Enter updated percentage : ");
				scanf("%f", &p->percentage);

				printf("Record modified successfully\n");
				return;
			}

			p = p->next;
		}
	}

	printf("More than one record found.\n");
	printf("Enter roll number of record to modify : ");
	scanf("%d", &roll);

	p = *ptr;

	while(p)
	{
		if(p->rollno == roll && p->percentage == percentage)
		{
			printf("Enter updated name : ");
			scanf("%s", p->name);

			printf("Enter updated percentage : ");
			scanf("%f", &p->percentage);

			printf("Record modified successfully\n");
			return;
		}

		p = p->next;
	}

	printf("Roll number not found for the given percentage\n");
}
