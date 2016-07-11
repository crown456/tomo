#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	
	double s, ans;
	
	printf("３辺の長さ＝＞ ");
	
	scanf("%d%d%d", &a, &b, &c);
	/*ここで三辺の長さを認識する*/

	s = 1.0*(a + b + c) / 2;
	
	ans = sqrt(s*(s - a)*(s - b)*(s - c));
	/*ヘロンの公式で面積を求める*/
	
	if (a+b>c&&b+c>a&&c+a>b)
	{
		printf("面積＝%.2lf\n", ans);
	}
	/*三角形になるようなら、面積を出力する*/
	else
	{
		printf("\n三角形ではありません．");
	}
	/*三角形にならないようなら、三角形ではありません．と出力する*/
	return 0;
}
