#include  <stdio.h>

int main(void)
{
	double num1, num2;

	printf("�Q�̒�R�l�i���j����");

	scanf("%lf", &num1);
	/*�����ň�ڂ̒�R�l�����߂�*/
	
	scanf("%lf", &num2);
	/*�����œ�ڂ̒�R�l�����߂�*/

	printf("\n����ڑ��̍�����R�i���j��%.2lf\f", num1 + num2);
	/*�����Œ���ڑ��̍�����R�����߂�����*/

	printf("\n����ڑ��̍�����R�i���j��%.2lf", num1*num2 / (num1 + num2));
	/*�����ŕ���ڑ��̍�����R�����߂�����*/

	return 0;
}
