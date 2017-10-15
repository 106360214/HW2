#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float pr, ra, ic;
	int d;

	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &pr);

	while (pr != -1)
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &ra);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &d);

		ic = (pr * ra * d) / 365;

		printf("The interest charge is $%.2f\n\n", ic);

		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &pr);
	}

	system("pause");
	return 0;
}