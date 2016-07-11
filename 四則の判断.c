#include <stdio.h>

int main()
{
	double a, b;

	char ch;

	printf("計算式＝＞");

	scanf("%lf", &a);
	
	ch = getchar();
	/*ここで一つ目の数を認識する*/
	int num;

	num = (int)ch;
	/*ここで＋－×÷のいづれかの文字を数字に変える*/
	scanf("%lf", &b);
	/*ここで二つ目の数を認識する*/
	if (num == 45)
	{
		printf("%.1lf-", a);
		printf("%.1lf=", b);
		printf("%.1lf", a - b);
	}
	/*－が入力された場合、ここを出力させる*/
	else if (num == 43)
	{
		printf("%.1lf+", a);
		printf("%.1lf=", b);
		printf("%.1lf", a + b);
	}
	/*＋が入力された場合、ここを出力させる*/

	else if (num == 42)
	{
		printf("%.1lf*", a);
		printf("%.1lf=", b);
		printf("%.1lf", a*b);
	}
	/**が入力された場合、ここを出力させる*/
	else
	{
		printf("%.1lf/", a);
		printf("%.1lf=", b);
		printf("%.1lf", a / b);
	}
	/*その他の場合（/が入力された場合）、ここを出力させる*/
	return 0;
}
