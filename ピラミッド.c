#include <stdio.h>

int main(void) {
	
	int a, b;

	a = 0;
	b = 0;

	printf("%*s*\n", 4, "");
	/*ここで一行目の*を出力する*/
	printf("%*s", 3, "");

	while (a<3)
	{
		a++;
		printf("*");
	}
	/*ここで二行目の*を出力する*/
	printf("\n%*s", 2, "");

	while (a<8)
	{
		a++;
		printf("*");
	}
	/*ここで三行目の*を出力する*/
	printf("\n%*s", 1, "");
	
	while (a<15)
	{
		a++;
		printf("*");
	}
	/*ここで四行目の*を出力する*/
	printf("\n");
	
	while (a<24)
	{
		a++;
		printf("*");
	}
	/*ここで五行目の*を出力する*/
	printf("\n");
	
	return 0;
}
