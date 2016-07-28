#include<stdio.h>
#include<conio.h>
int main()
{
	int yr;
	scanf("%d",&yr);
	if((yr%4==0)&&(yr%100!=0)||(yr%400==0))
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
	return 0;
}
