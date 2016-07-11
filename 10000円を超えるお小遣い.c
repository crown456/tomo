#include <stdio.h>
#include <math.h>

int main()
{
	double a = 2, b = 1;

	printf("1日目のお小遣いは1円です\n");
	/*あらかじめ1日目のお小遣いは出力させておく*/

	while (b>0)
	{
		double  c = 1 * pow(2, b);
		printf("%.0lf日目のお小遣いは%.0lf円です\n", a, c);
		a++;
		b++;
		if (c>=10000)
		{
			break;
		}
	}
	/*2日目以降のお小遣いは以降のお小遣いを1に2のべき乗をかけて出力させる
	　また、break文を用いて10000を超えたとき繰り返しを中断させる*/

	printf("1万円を超えました\n");

	return 0;
}
