#include  <stdio.h>

int main(void)
{
	char ch;

	printf("英字の小文字を入力しなさい＝＞");

	ch = getchar();
	/*ここで打ち込まれた文字を認識する*/

	int num;

	num = (int)ch;
	/*ここで打ち込まれた文字を数字に変換する*/

	int num1 = num - 0x20;
	/*ここで文字を大文字にするため、入力した小文字にあたる数から16進数の20を引く*/

	printf("\n英大文字＝＞%c", num1);

	return 0;
}
