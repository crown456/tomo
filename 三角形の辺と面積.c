#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	
	double s, ans;
	
	printf("�R�ӂ̒������� ");
	
	scanf("%d%d%d", &a, &b, &c);
	/*�����ŎO�ӂ̒�����F������*/

	s = 1.0*(a + b + c) / 2;
	
	ans = sqrt(s*(s - a)*(s - b)*(s - c));
	/*�w�����̌����Ŗʐς����߂�*/
	
	if (a+b>c&&b+c>a&&c+a>b)
	{
		printf("�ʐρ�%.2lf\n", ans);
	}
	/*�O�p�`�ɂȂ�悤�Ȃ�A�ʐς��o�͂���*/
	else
	{
		printf("\n�O�p�`�ł͂���܂���D");
	}
	/*�O�p�`�ɂȂ�Ȃ��悤�Ȃ�A�O�p�`�ł͂���܂���D�Əo�͂���*/
	return 0;
}
