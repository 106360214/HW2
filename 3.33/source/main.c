#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;

	printf("�п�J��: ");
	scanf_s("%d", &x);
	printf("�п�J�e: ");
	scanf_s("%d", &y);

	for (int i = 1; i <= y; i++)
	{
		if ((i == 1) || (i == y))
		{
			for (int j = 1; j <= x; j++)
			{
				printf("+");
			}
		}
		else
		{
			int a = x - 2;

			printf("+");
			for (int b = 1; b <= a; b++)
			{
				printf(" ");
			}
			printf("+");
		}

		printf("\n");
	}

	system("pause");
	return 0;
}