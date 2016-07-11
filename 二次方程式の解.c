#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;

	printf("２次方程式の係数a，b，c＝＞");

	scanf("%lf%lf%lf", &a, &b, &c);
	/*ここで二次方程式の係数となる値を認識させる*/

	double d = (-1 * b + pow(b*b - 4 * a*c,0.5))/2*a,
		e = (-1 * b - pow(b*b - 4 * a*c,0.5))/2*a;
	/*二つの解をdとeと置き、二次方程式の解の方式をさせる*/

	if (b*b - 4 * a*c>0)
	{
		printf("x=%.2lf ", d);
		printf("%.2lf", e);
	}
	/*方程式が異なる二つの解をもつときここを出力する*/
	else if (d==e)
	{
		printf("x=%.2lfで重解です", d);
	}
	/*方程式が重解を持つときここを出力する*/
	else
	{
		printf("虚根です．");
	}
	/*方程式が虚数の解を持つときここを出力する*/
	return 0;
}
