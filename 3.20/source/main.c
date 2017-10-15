#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hr;
	float ra, tt;

	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%d", &hr);

	while (hr != -1)
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &ra);

		if (hr <= 40)
			tt = hr * ra;
		else
			tt = (40 * ra) + ((hr - 40) * ra * 1.5);

		printf("Salary is $%.2f\n\n", tt);

		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hr);
	}

	system("pause");
	return 0;
}