#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;

	printf("�Q���������̌W��a�Cb�Cc����");

	scanf("%lf%lf%lf", &a, &b, &c);
	/*�����œ񎟕������̌W���ƂȂ�l��F��������*/

	double d = (-1 * b + pow(b*b - 4 * a*c,0.5))/2*a,
		e = (-1 * b - pow(b*b - 4 * a*c,0.5))/2*a;
	/*��̉���d��e�ƒu���A�񎟕������̉��̕�����������*/

	if (b*b - 4 * a*c>0)
	{
		printf("x=%.2lf ", d);
		printf("%.2lf", e);
	}
	/*���������قȂ��̉������Ƃ��������o�͂���*/
	else if (d==e)
	{
		printf("x=%.2lf�ŏd���ł�", d);
	}
	/*���������d�������Ƃ��������o�͂���*/
	else
	{
		printf("�����ł��D");
	}
	/*�������������̉������Ƃ��������o�͂���*/
	return 0;
}
