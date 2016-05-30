#include <stdio.h>


int main(void)
{
	int num1, num2, num3;

	printf("３つの数＝＞");

	scanf("%d", &num1);

	scanf("%d", &num2);

	scanf("%d", &num3);
	/*3つの数字を認識させる*/

	if (num2<num3 && num1<num3) {
		printf("最大値＝%d", num3);
	}
	/*3つ目の数字が一番大きかった時、最大値として3つ目の数字を出力する*/

	else if (num1>num2 && num1>num3) {
		printf("最大値＝%d", num1);
	}
	/*1つ目の数字が一番大きかった時、最大値として1つ目の数字を出力する*/
	
	else {
		printf("最大値＝%d", num2);
	}
	/*その他の時（2つ目の数字が一番大きかった時）、最大値として2つ目の数字を出力する*/

	return 0;
}
