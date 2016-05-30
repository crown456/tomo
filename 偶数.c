#include <stdio.h>


int main(void)
{
	int num;

	printf("数＝＞");

	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("\n偶数です．");
	}
	/*2の倍数の時に「偶数です」と出るようにする*/
	else if (num == 0)
	{
		printf("\n偶数です．");
	}
	/*0の時に「偶数です」と出るようにする*/
	return 0;
}

