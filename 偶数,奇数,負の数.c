#include <stdio.h>

int main()
{
	int a[10],b,c=0,d=0,e=0;
	a[0] = 2;
	a[1] = -8;
	a[2] = 5;
	a[3] = -4;
	a[4] = 6;
	a[5] = 5;
	a[6] = 7;
	a[7] = -3;
	a[8] = -9;
	a[9] = 1;

	for ( b = 0; b < 10; b++)
	{
		if (a[b]%2==1||a[b]%2==-1)
		{
			c++;
		}
		/*ここで奇数の数をカウントする*/
	    if (a[b]%2==0)
		{
			d++;
		}
		/*ここで偶数の数をカウントする*/
		if (a[b]<0)
		{
			e++;
		}
		/*ここで負の数の数をカウントする*/
	}
	printf("奇数の数%d個\n", c);
	printf("偶数の数%d個\n", d);
	printf("負の数の数%d個\n", e);
	/*ここでそれぞれの個数を出力する*/

	return 0;
}
