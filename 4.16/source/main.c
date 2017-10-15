#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, a;

	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n(B)\n");
	for (i = 10; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < i; a++)
		{
			printf(" ");
		}
		for (j = 10; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n(D)\n");
	for (i = 10; i > 0; i--)
	{
		for (a = 1; a < i; a++)
		{
			printf(" ");
		}
		for (j = 11; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}