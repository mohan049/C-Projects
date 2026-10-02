#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
	int rollno;
	char name[50];
	float percentage;
	struct student *next;
}SLL;
void Menu();
void add_record(SLL **);
void deleterecord(SLL **);
void showrecord(SLL *);
void modifyrecord(SLL **);
void saverecord(SLL *);
void sortrecord(SLL *);
void deleteallrecord(SLL **);
void reverseallrecord(SLL **);
void delete_rollno(SLL**);
void delete_name(SLL**);
int countNode(SLL*ptr);
void accord_to_sort_name(SLL*ptr);
void accord_to_sort_percentage(SLL*ptr);
void modify_rollno(SLL **ptr);
void modify_name(SLL **ptr);
void modify_percentage(SLL **ptr);
