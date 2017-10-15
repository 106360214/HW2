#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x, y, z, a;

	printf("side1\tside2\n");

	for (x = 1; x <= 500; x++)
	{
		for (y = 1; y <= 500; y++)
		{
			for (z = 1; z <= 500; z++)
			{
				a = pow(x, 2) + pow(y, 2);
				if(z == sqrt(a))
					printf("%5d\t%5d\n", x, y);
			}
		}
	}

	system("pause");
	return 0;
}