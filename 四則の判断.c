#include <stdio.h>

int main()
{
	double a, b;

	char ch;

	printf("�v�Z������");

	scanf("%lf", &a);
	
	ch = getchar();
	/*�����ň�ڂ̐���F������*/
	int num;

	num = (int)ch;
	/*�����Ł{�|�~���̂��Âꂩ�̕����𐔎��ɕς���*/
	scanf("%lf", &b);
	/*�����œ�ڂ̐���F������*/
	if (num == 45)
	{
		printf("%.1lf-", a);
		printf("%.1lf=", b);
		printf("%.1lf", a - b);
	}
	/*�|�����͂��ꂽ�ꍇ�A�������o�͂�����*/
	else if (num == 43)
	{
		printf("%.1lf+", a);
		printf("%.1lf=", b);
		printf("%.1lf", a + b);
	}
	/*�{�����͂��ꂽ�ꍇ�A�������o�͂�����*/

	else if (num == 42)
	{
		printf("%.1lf*", a);
		printf("%.1lf=", b);
		printf("%.1lf", a*b);
	}
	/**�����͂��ꂽ�ꍇ�A�������o�͂�����*/
	else
	{
		printf("%.1lf/", a);
		printf("%.1lf=", b);
		printf("%.1lf", a / b);
	}
	/*���̑��̏ꍇ�i/�����͂��ꂽ�ꍇ�j�A�������o�͂�����*/
	return 0;
}
