#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x, y;

	printf("Enter sales in dollars (-1 to end): ");
	scanf_s("%f", &x);

	while (x != -1)
	{
		y = 200 + (x * 0.09);
		printf("Salary is: $%.2f\n", y);

		printf("\n");
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &x);
	}

	system("pause");
	return 0;
}