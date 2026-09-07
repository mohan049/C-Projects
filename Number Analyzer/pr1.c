#include <stdio.h>
void mainMenu();
void subMenu();
int Check_Prime(int *);
int Check_Perfect(int *);
int Check_Strong(int *);
int Check_Armstrong(int *);
int Check_Palindrome(int *);
void prime_Range(int,int);
void perfect_Range(int,int);
void strong_Range(int,int);
void armstrong_Range(int,int);
void palindrome_Range(int,int);
int prime_Count(int*, int*);
int perfect_Count(int*, int*);
int strong_Count(int*, int*);
int armstrong_Count(int*, int*);
int palindrome_Count(int*, int*);
int main()
{
	int choice,subChoice;
	int num,start,end,c ;
	while(1){
		mainMenu();
		printf("Enter Choice : \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: // Prime Number menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Prime( &num))
							printf("Prime Number\n");
						else
							printf("Not Prime\n");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						prime_Range(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=prime_Count(&start, &end);
						printf("prime count=%d\n",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid \n");
				}
				break;

			case 2: // perfect Number menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Perfect( &num))
							printf("Perfect Number\n");
						else
							printf("Not Perfect\n");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						perfect_Range(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=perfect_Count(&start, &end);
						printf("perfect count=%d\n",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid \n");
				}

				break;
			case 3: // Strong Number menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Strong( &num))
							printf("Strong Number\n");
						else
							printf("Not Strong\n");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						strong_Range(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=strong_Count(&start, &end);
						printf("strong count=%d\n",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid \n");
				}
				break;
			case 4: // Armstrong Number Menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Armstrong( &num))
							printf("Armstrong Number\n");
						else
							printf("Not Armstrong\n");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						armstrong_Range(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=armstrong_Count(&start, &end);
						printf("armstrong count=%d\n",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid \n");
				}
				break;
			case 5: // Palindrome Menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Palindrome( &num))
							printf("Palindrome Number\n");
						else
							printf("Not Palindrome\n");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						palindrome_Range(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=palindrome_Count(&start, &end);
						printf("palindrome count=%d\n",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid \n");
				}
				break;
			case 6:
				printf("Exit \n");
				return 0;
			default:
				printf("Invalid Choice \n");
		}
	}
}
