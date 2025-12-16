#include<stdio.h>
int main ()
{
	int month_usage,fam_mem;
	printf("please enter your monthly water usage in litres\n");
	scanf("%d",&month_usage);
	printf("please enter the number of family members in your family\n");
	scanf("%d",&fam_mem);
	if(month_usage>3000&&fam_mem>6)
	printf("Allowed Large Family Exception");	
	else
	printf("Fine Applied");
	return 0;
}
