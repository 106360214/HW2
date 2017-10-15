#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float x, y, z, cl, b;

	printf("Enter account number (-1 to end): ");
	scanf_s("%d", &a);

	while (a != -1)
	{
		printf("Enter beginning balance: ");
		scanf_s("%f", &x);
		printf("Enter total charges: ");
		scanf_s("%f", &y);
		printf("Enter total credits: ");
		scanf_s("%f", &z);
		printf("Enter credit limit: ");
		scanf_s("%f", &cl);

		b = (y - z) + x;

		if (b > cl)
		{
			printf("Account:      %d\n", a);
			printf("Credit limit: %.2f\n", cl);
			printf("Balance:      %.2f\n", b);
			printf("Credit Limit Exceeded.\n");
		}

		printf("\n");
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &a);
	}

	system("pause");
	return 0;
}