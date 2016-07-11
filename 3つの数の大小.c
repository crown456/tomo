#include <stdio.h>

int main()
{
	int a, b, c;

	printf("３つの整数＝＞");

	scanf("%d%d%d", &a, &b, &c);

	if (a>b&&b>c)
	{
		printf("大きい順に表示");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d", c);
	}
	/*a>b>cの時ここを出力する*/
	else if (a>c&&c>b)
	{
		printf("大きい順に表示");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", c);
		printf("%*s", 1, "");
		printf("%d", b);
	}
	/*a>c>bの時ここを出力する*/
	else if (b>c&&c>a)
	{
		printf("大きい順に表示");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d", c);
		printf("%*s", 1, "");
		printf("%d", a);
	}
	/*b>c>aの時ここを出力する*/
	else if (b>a&&a>c)
	{
		printf("大きい順に表示");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", c);
	}
	/*b>a>cの時ここを出力する*/
	else if (c>a&&a>b)
	{
		printf("大きい順に表示");
		printf("%d", c);
		printf("%*s", 1, "");
		printf("%d", a);
		printf("%*s", 1, "");
		printf("%d", b);
	}
	/*c>a>bの時ここを出力する*/
	else
	{
		printf("大きい順に表示");
		printf("%d",c);
		printf("%*s", 1, "");
		printf("%d", b);
		printf("%*s", 1, "");
		printf("%d",a);
	}
	/*c>b>aの時ここを出力する*/
	return 0;
}
