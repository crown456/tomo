#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main(void) {
	
	double a = 0;

	while (a<91)
	{
		double b = a*PI / 180,
			c = cos(b),
			d = sin(b),
			e = tan(b);
		if (a==90)
		{
			printf("cos(%.0lf��)=%lf\nsin(%.0lf��)=%lf\ntan(%.0lf��)�͒�`�ł��܂���\n", a, c, a, d, a);
                        break;
		}
                /*90���̂Ƃ���tan����`�ł��Ȃ��Əo�͂�����*/
		else
		{
			printf("cos(%.0lf��)=%lf\nsin(%.0lf��)=%lf\ntan(%.0lf��)=%lf\n", a, c, a, d, a, e);
			a++;
                /*0������89���̂Ƃ�������sin cos tan���o�͂�����*/
		}
	}

	return 0;
}
