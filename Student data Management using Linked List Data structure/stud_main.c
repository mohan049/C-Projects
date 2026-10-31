#include "student.h"
int main()
{
	char ch;
	SLL *headptr=0;
	while(1)
	{
		printf("*********** STUDENT RECORD MENU ************\n");
		printf("a/A : Add new record\nd/D : Delete a record\ns/S :Show the list\nm/M : Modify a record\nv/V : Save records\ne/E :Exit\nt/T :sort the list\nl/L : Delete all the records\nr/R : Reverse the list\n");
		printf("Enter your choice :\n");
		scanf(" %c",&ch);
		switch (ch)
		{
			case 'a' :
			case 'A' :add_record(&headptr);break;
			case 'd' :
			case 'D' :deleterecord(&headptr);break;
			case 's' :
			case 'S' :showrecord(headptr);break;
			case 'm' :
			case 'M' :modifyrecord(&headptr);break;
			case 'v' :
			case 'V' :saverecord(headptr);break;
			case 'e' :
			case 'E' :exit(0);
			case 't' :
			case 'T' :sortrecord(headptr);break;
			case 'l' :
			case 'L' :deleteallrecord(&headptr);break;
			case 'r' :
			case 'R' :reverseallrecord (&headptr);break;
		}
	}
}
