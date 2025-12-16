#include<stdio.h>
int main ()
{
	int wat_usage;
	printf("please enter your daily water usage in litres\n");
	scanf("%d",&wat_usage);
	if(wat_usage<=100)
	printf("Efficient Usage");
	else
	printf("High Usage Detected");
	return 0;
}
