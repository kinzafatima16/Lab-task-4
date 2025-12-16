#include<stdio.h>
int main ()
{
	int month_usage,fam_mem,user_cat,days,user_cat2;
	printf("please enter your monthly water usage in litres:\n");
	scanf("%d",&month_usage);
	printf("please enter the number of family members in your family :\n");
	scanf("%d",&fam_mem);
	printf("Please enter code  to classify user category (1-4) \n 1= user category \n 2= calculate bill \n 3= apply fine \n 4= apply bonus \n");
    scanf("%d",&user_cat);
    switch(user_cat)
{
case 1:
{
	printf("Please enter code  to classify user category (1-4) :");
scanf("%d",&user_cat2);
switch(user_cat2)
{
case 1:
printf("Low Usage Household");
break;
case 2:
printf("Average Household");
break;
case 3:
printf("High Usage Household");
break;
case 4:
printf("Excessive Usage Household");
break;
default:
printf("Invalid Category Code");
}
break;
}
case 2:
	{
if(month_usage<=3000)
	printf("\nBill=500 PKR");
	else
	printf("\nBill=1000 PKR");
}
break;
case 3:
	{
if(month_usage<=3000)
	printf("No fine");
	else if (month_usage>=3001&&month_usage<=5000)
	printf("\nFine = 200 PKR");
	else if (month_usage>=5001&&month_usage<=7000)
	printf("\nFine = 500 PKR");
	else
	printf("\nFine = 1000 PKR + Water Supply Restricted");
}
break;
case 4:
	{
printf("please enter the number of days you used water less 80 liters\n");
	scanf("%d",&days);
	if(month_usage<2500&&days>10)
	printf("\nBonus: 300 PKR Discount");	
	else
	printf("\nNo Bonus");
}
break;
default:
printf("\nInvalid Category Code");
}
return 0;
}
