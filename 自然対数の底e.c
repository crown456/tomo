#include <stdio.h>

int main(void) {
	
	double a=1,b=1,c=1,d,f=1;
	
	while (b<1000000)
	{
		a++;
		b = a*b;
		d = c;
		c = c*(1 / a);
		f = f + d;
	}
	/*階乗計算させたものを分母に置きeを計算させている*/
	printf("e=%.5lf", f);

	return 0;
}
