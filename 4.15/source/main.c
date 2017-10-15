#include <stdio.h>
#include <math.h>

int main(void)
{
	double amount;
	double principal = 5000.0;
	double rate;
	int year;

	printf("     Rate");
	printf("%17s %21s %21s %21s %21s\n", "10.0%", "10.5%", "11.0%", "11.5%", "12.0%");
	printf("Year\n");

	for (year = 1; year <= 15; ++year)
	{
		printf("%4d", year);
		for (rate =0.100; rate <=0.125; rate += 0.005)
		{
			amount = principal * pow(1.0 + rate, year);
			printf("%22.2f", amount);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}