#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in platinum?\n");
	printf("Let us check it out.\n");
	printf("Please enter your weight in pounds:  ");
	scanf_s("%f", &weight);
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that!If platinum prices drop .\n");
	printf("eat more to maintain your value.\n");
	if (weight >= 200)
	{
		printf("You are a little fat.");
	}
	else if (weight <= 100)
	{
		printf("You are a little thin.");
	}
	else
	{
		printf("You are ok.");
	}
	return 0;
}//��������
