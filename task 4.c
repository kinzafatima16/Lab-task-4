#include<stdio.h>
int main()
{
int user_cat;
printf("Please enter code  to classify user category (1-4)");
scanf("%d",&user_cat);
switch(user_cat)
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
return 0;
}
