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
	/*ŠKæŒvŽZ‚³‚¹‚½‚à‚Ì‚ð•ª•ê‚É’u‚«e‚ðŒvŽZ‚³‚¹‚Ä‚¢‚é*/
	printf("e=%.5lf", f);

	return 0;
}
