#include <stdio.h>

int main(void)
{
	int num1,num2;
	
	printf("底辺＝>");
	
	scanf("%d", &num1);
        /*ここで底辺を決める*/
	
        printf("\n高さ=>");

	scanf("%d", &num2);
        /*ここで高さを決める*/

	printf("\n面積＝%d\n",num1*num2/2 );
        /*ここで底辺×高さ÷２の計算をさせる*/

		return 0;
}
