#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter the value of celsius:");
	scanf("%f",&celsius);
	fahrenheit = (1.8*celsius)+32;
	printf("Temperature in fahrenheit : %f",fahrenheit);
	return 0;
}
