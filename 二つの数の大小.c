#include <stdio.h>


int main(void)
{
	int num1, num2;

	printf("２つの整数＝＞");

	scanf("%d", &num1);

	scanf("%d", &num2);

	if (num1>num2)
	{
		printf("\n%d", num1);

		printf("%*s", 1, "");

		printf("%d", num2);

	}
	/*1つ目の数が2つ目の数より大きければそのままの順に出力する*/

	else
	{
		printf("\n%d", num2);

		printf("%*s", 1, "");

		printf("%d", num1);

	}
	/*2つ目の数が1つ目の数より大きければ順番を入れ替えて出力する*/


	return 0;
}
