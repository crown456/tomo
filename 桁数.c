#include  <stdio.h>

int main(void)
{
	int num;

	printf("数＝＞");

	scanf("%d",&num);
	/*ここで数を指定する*/

	printf("上2桁＝%d", num / 1000);
	/*ここで上2桁を出力するために入力された数を1000で割る*/

	printf("%*s", 1, "");

	printf("下3桁＝%d\n", num % 1000);
	/*ここで下3桁を出力するために入力された数を1000で割った剰余を求めさせる*/
	
	return 0;
}
