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

	printf("請輸入代碼: ");
	scanf_s("%c", &number);

	switch (number)
	{
	case '1':

		printf("請輸入週薪: ");
		scanf_s("%f", &a);
		printf("您的當週週薪為: %.2f\n", a);

		break;

	case '2':

		printf("請輸入當週工作時數: ");
		scanf_s("%d", &b);
		printf("請輸入每小時工資: ");
		scanf_s("%f", &c);

		if (b <= 40)
			d = b * c;
		else
			d = (b - 40) * c * 1.5 + (40 * c);

		printf("您的當週週薪為: %.2f\n", d);

		break;

	case '3':

		printf("請輸入當週銷售金額: ");
		scanf_s("%f", &e);

		tt = 250 + e*0.057;

		printf("您的當週週薪為: %.2f\n", tt);

		break;

	case '4':

		printf("請輸入當週生產件數: ");
		scanf_s("%d", &item);
		printf("請輸入單件酬金: ");
		scanf_s("%f", &money);

		tt = item * money;

		printf("您的當週週薪為: %.2f\n", tt);

		break;

	default:

		printf("代碼錯誤\n");

		break;
	}

	system("pause");
	return 0;
}