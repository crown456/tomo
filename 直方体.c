#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("�����̂̂R�ӂ̒���x�Cy�Cz=>");

	scanf("%d", &num1);
	/*�����ň�ڂ̕ӂ̒��������߂�*/

	scanf("%d", &num2);
    /*�����œ�ڂ̕ӂ̒��������߂�*/

	scanf("%d", &num3);
	/*�����ŎO�ڂ̕ӂ̒��������߂�*/

	printf("�̐ρ�%d\n", num1*num2*num3);
	/*�����ő̐ς����߂�v�Z��������*/

	printf("�\�ʐρ���%d", num1*num2 * 2 + num2*num3 * 2 + num3*num1*2);
	/*�����ŕ\�ʐς����߂�v�Z��������*/

	return 0;
}

