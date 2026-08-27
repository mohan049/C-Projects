#include <stdio.h>
int my_atoi(const char*);
int main()
{
	char s[20];
	printf("Enter a string:\n");
	scanf("%s",s);
	printf("num=%d\n",my_atoi(s));
	return 0;
}
int my_atoi (const char *p)
{
	int i=0,num;
	if(p[0]== '-' || p[0]== '+')
		i=1;
	for(num=0;p[i];i++)
	{
		if(p[i]>= '0' && p[i]<='9')
			num=num*10+p[i]-48;
		else
			break;
	}
	if(p[0]== '-')
		num=-num;
	return num;
}
