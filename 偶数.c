#include <stdio.h>


int main(void)
{
	int num;

	printf("������");

	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("\n�����ł��D");
	}
	/*2�̔{���̎��Ɂu�����ł��v�Əo��悤�ɂ���*/
	else if (num == 0)
	{
		printf("\n�����ł��D");
	}
	/*0�̎��Ɂu�����ł��v�Əo��悤�ɂ���*/
	return 0;
}

