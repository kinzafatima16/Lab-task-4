#include<stdio.h>
int main ()
{
	int month_usage;
	printf("please enter your monthly water usage in litres\n");
	scanf("%d",&month_usage);
	if(month_usage<=3000)
	printf("Bill=500 PKR");
	else
	printf("Bill=1000 PKR");
	return 0;
}
