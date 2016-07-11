#include <stdio.h>

int main(void) {

	int a, b;

	printf("数値a=");
	scanf("%d", &a);
	printf("数値b=");
	scanf("%d", &b);
	
	int c = a%b;

	while (c>0||c<0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	/*ここでユークリッドの互除法を行う*/

	printf("最大公約数＝%d", b);

	return 0;
}
