#include <stdio.h>

int main(void) {
	
	int a, b;

	a = 0;
	b = 0;

	printf("%*s*\n", 4, "");
	/*�����ň�s�ڂ�*���o�͂���*/
	printf("%*s", 3, "");

	while (a<3)
	{
		a++;
		printf("*");
	}
	/*�����œ�s�ڂ�*���o�͂���*/
	printf("\n%*s", 2, "");

	while (a<8)
	{
		a++;
		printf("*");
	}
	/*�����ŎO�s�ڂ�*���o�͂���*/
	printf("\n%*s", 1, "");
	
	while (a<15)
	{
		a++;
		printf("*");
	}
	/*�����Ŏl�s�ڂ�*���o�͂���*/
	printf("\n");
	
	while (a<24)
	{
		a++;
		printf("*");
	}
	/*�����Ō܍s�ڂ�*���o�͂���*/
	printf("\n");
	
	return 0;
}
