#include  <stdio.h>

int main(void)
{
	double num1, num2;

	printf("２つの抵抗値（Ω）＝＞");

	scanf("%lf", &num1);
	/*ここで一つ目の抵抗値を決める*/
	
	scanf("%lf", &num2);
	/*ここで二つ目の抵抗値を決める*/

	printf("\n直列接続の合成抵抗（Ω）＝%.2lf\f", num1 + num2);
	/*ここで直列接続の合成抵抗を求めさせる*/

	printf("\n並列接続の合成抵抗（Ω）＝%.2lf", num1*num2 / (num1 + num2));
	/*ここで並列接続の合成抵抗を求めさせる*/

	return 0;
}
