#include<stdio.h>
int main ()
{
	int month_usage,days;
	printf("please enter your monthly water usage in litres\n");
	scanf("%d",&month_usage);
	printf("please enter the number of days you used water less 80 liters\n");
	scanf("%d",&days);
	if(month_usage<2500&&days>10)
	printf("Bonus: 300 PKR Discount");	
	else
	printf("No Bonus");
	return 0;
}

