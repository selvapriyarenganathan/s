#include<stdio.h>
#include<conio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if((x>=65)&&(x<=90))
	{
		printf("alphabet");
		
	}
	else if((x>=97)&&(x<=122))
	{
		printf("alphabet");
		
	}
	else
	{
		printf("not an alphabet");
		
	}
	return 0;
}
