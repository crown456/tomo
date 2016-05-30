#include <stdio.h>

int main(void)
{
	char ch;
	
	printf("入力文字＝＞");

	ch = getchar();
	
	int num1;

	num1 = (int)ch;

	int num2 = num1 - 0x20;

	int num3 = num1 + 0x20;

	if (0x41<=num1 && num1<=0x5A)
	{
		printf("\n文字「%c」は大文字です．", num1);

		printf("小文字は「%c」です．", num3);
	}
	/*ここで文字がAからZまでの大文字か判別し、大文字だった場合小文字に変換し、出力させる*/

	else if (0x61<=num1 && num1<=0x7A)
	{
		printf("\n文字「%c」は小文字です．", num1);

		printf("大文字は「%c」です．", num2);
	}
    /*ここで文字がaからzまでの小文字か判別し、小文字だった場合大文字に変換し、出力させる*/

	else
	{
		printf("アルファベット以外です．");
	}
	/*上記の場合に当てはまらない（AからZまたはaからzまでのアルファベットでない）場合、
	"アルファベット以外です．"と出力する*/

	return 0;
}
