#include <stdio.h>


int main(void)
{
	int num1, num2;

	printf("�Q�̐�������");

	scanf("%d", &num1);

	scanf("%d", &num2);

	if (num1>num2)
	{
		printf("\n%d", num1);

		printf("%*s", 1, "");

		printf("%d", num2);

	}
	/*1�ڂ̐���2�ڂ̐����傫����΂��̂܂܂̏��ɏo�͂���*/

	else
	{
		printf("\n%d", num2);

		printf("%*s", 1, "");

		printf("%d", num1);

	}
	/*2�ڂ̐���1�ڂ̐����傫����Ώ��Ԃ����ւ��ďo�͂���*/


	return 0;
}
