#include <stdio.h>

int main()
{
	int a, b, c;

	printf("�R�̐�������");

	scanf("%d%d%d", &a, &b, &c);

	if (a>b&&b>c)
	{
		printf("�傫�����ɕ\��");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d", c);
	}
	/*a>b>c�̎��������o�͂���*/
	else if (a>c&&c>b)
	{
		printf("�傫�����ɕ\��");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", c);
		printf("%*s", 1, "");
		printf("%d", b);
	}
	/*a>c>b�̎��������o�͂���*/
	else if (b>c&&c>a)
	{
		printf("�傫�����ɕ\��");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d", c);
		printf("%*s", 1, "");
		printf("%d", a);
	}
	/*b>c>a�̎��������o�͂���*/
	else if (b>a&&a>c)
	{
		printf("�傫�����ɕ\��");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", c);
	}
	/*b>a>c�̎��������o�͂���*/
	else if (c>a&&a>b)
	{
		printf("�傫�����ɕ\��");
		printf("%d", c);
		printf("%*s", 1, "");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", b);
	}
	/*c>a>b�̎��������o�͂���*/
	else
	{
		printf("�傫�����ɕ\��");
		printf("%d",c);
		printf("%*s", 1, "");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d",a);
	}
	/*c>b>a�̎��������o�͂���*/
	return 0;
}
