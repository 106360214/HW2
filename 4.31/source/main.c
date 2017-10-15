#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, x, y, z, a, b;
	for (i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (j = 4; j >= i; j--)
			{
				printf(" ");
			}
			for (x = 1; x <= i;x++)
			{
				printf("*");
				if (x >= 2)
				{
					for (y = 2; y <= x; y+=4)
					{
						printf("*");
					}
				}
			}
		}
		else
		{
			for (z = 1; z <= i-5; z++)
			{
				printf(" ");
			}
			for (a = 4; a >= i-5; a--)
			{
				printf("*");
				if (a>=1)
				{
					for (b = 3; b > a-1; b-=3)
					{
						printf("*");
					}
				}
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}