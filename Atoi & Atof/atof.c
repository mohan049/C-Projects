#include <stdio.h>
float my_atof(const char*);
int main()
{
	char s[20];
	printf("Enter a string:\n");
	scanf("%s",s);
	printf("float=%.5f\n",my_atof(s));
	return 0;
}
float my_atof(const char *p)
{
	int i=0,n1=0,n2=0,A=1;
	float f1,f2,f3;
	if(p[0]=='-' || p[0]=='+')
		i=1;
	while(p[i]!='.' && p[i]!='\0')
	{
		n1=n1*10+p[i]-48;
		i++;
	}
	f1=(float)n1;
	if(p[i]=='\0')
		return f1;
	i=i+1;
	while(p[i])
	{
		n2=n2*10+p[i]-48;
		i++;
	}
	while(n2/A>0)
		A=A*10;
	f2=(float)n2/A;
	f3=f1+f2;
	if(p[0]=='-')
		f3=-f3;
	return f3;
}
