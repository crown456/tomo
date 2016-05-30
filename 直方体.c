#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("直方体の３辺の長さx，y，z=>");

	scanf("%d", &num1);
	/*ここで一つ目の辺の長さを決める*/

	scanf("%d", &num2);
    /*ここで二つ目の辺の長さを決める*/

	scanf("%d", &num3);
	/*ここで三つ目の辺の長さを決める*/

	printf("体積＝%d\n", num1*num2*num3);
	/*ここで体積を求める計算をさせる*/

	printf("表面積＝＞%d", num1*num2 * 2 + num2*num3 * 2 + num3*num1*2);
	/*ここで表面積を求める計算をさせる*/

	return 0;
}

