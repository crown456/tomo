#include <stdio.h>

int main(void) {
	
	int a,c;

	printf("2以上の数を入力してください＝＞");

	scanf("%d", &a);

	if (a==2)
	{
		printf("%dは素数です", a);
	}

	int b = a - 1;

	while (a>=2&&b>2)
	{
		c = a%b;
		b--;
		if (c==0)
		{
			printf("%dは素数ではありません", a);
			break;
		}
	}
	if (b>=2&&c>0)
	{
		printf("%dは素数です", a);
	}
        /*while文とif文を用いて素数判定を行う*/
	return 0;
}
