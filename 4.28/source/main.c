#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char number;
	float a;
	int b;
	float c, d;
	float e, tt;
	int item;
	float money;

	printf("�п�J�N�X: ");
	scanf_s("%c", &number);

	switch (number)
	{
	case '1':

		printf("�п�J�g�~: ");
		scanf_s("%f", &a);
		printf("�z����g�g�~��: %.2f\n", a);

		break;

	case '2':

		printf("�п�J��g�u�@�ɼ�: ");
		scanf_s("%d", &b);
		printf("�п�J�C�p�ɤu��: ");
		scanf_s("%f", &c);

		if (b <= 40)
			d = b * c;
		else
			d = (b - 40) * c * 1.5 + (40 * c);

		printf("�z����g�g�~��: %.2f\n", d);

		break;

	case '3':

		printf("�п�J��g�P����B: ");
		scanf_s("%f", &e);

		tt = 250 + e*0.057;

		printf("�z����g�g�~��: %.2f\n", tt);

		break;

	case '4':

		printf("�п�J��g�Ͳ����: ");
		scanf_s("%d", &item);
		printf("�п�J���S��: ");
		scanf_s("%f", &money);

		tt = item * money;

		printf("�z����g�g�~��: %.2f\n", tt);

		break;

	default:

		printf("�N�X���~\n");

		break;
	}

	system("pause");
	return 0;
}