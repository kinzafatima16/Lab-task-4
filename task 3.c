#include<stdio.h>
int main ()
{
	int month_usage;
	printf("please enter your monthly water usage in litres\n");
	scanf("%d",&month_usage);
	if(month_usage<=3000)
	printf("No fine");
	else if (month_usage>=3001&&month_usage<=5000)
	printf("Fine = 200 PKR");
	else if (month_usage>=5001&&month_usage<=7000)
	printf("Fine = 500 PKR");
	else
	printf("Fine = 1000 PKR + Water Supply Restricted");
	return 0;
}
