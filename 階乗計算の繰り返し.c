#include <stdio.h>

int main(void) {
	  int a,b=1,c=1;

	  while (b=1)
	  {
		  int a, b = 1, c = 1;
		 
			  printf("n＝＞");

			  scanf("%d", &a);
			  /*ここで入力された数を認識させる*/
			  if (a<=0)
			  {
				  break;
			  }
			  /*ここで0以下の数が入力された場合繰り返しを中断する*/
		  while (b < a)
		  {
			  b = b++;
			  c = c*b;

			  /*入力された数よりも小さい数をすべてかける（階乗計算をする）*/
		  }
		  printf("%d!＝%d\n", a, c);

	  }

	return 0;
}
