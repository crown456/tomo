#include <stdio.h>

int main(void)
{
	char ch;
	
	printf("���͕�������");

	ch = getchar();
	
	int num1;

	num1 = (int)ch;

	int num2 = num1 - 0x20;

	int num3 = num1 + 0x20;

	if (0x41<=num1 && num1<=0x5A)
	{
		printf("\n�����u%c�v�͑啶���ł��D", num1);

		printf("�������́u%c�v�ł��D", num3);
	}
	/*�����ŕ�����A����Z�܂ł̑啶�������ʂ��A�啶���������ꍇ�������ɕϊ����A�o�͂�����*/

	else if (0x61<=num1 && num1<=0x7A)
	{
		printf("\n�����u%c�v�͏������ł��D", num1);

		printf("�啶���́u%c�v�ł��D", num2);
	}
    /*�����ŕ�����a����z�܂ł̏����������ʂ��A�������������ꍇ�啶���ɕϊ����A�o�͂�����*/

	else
	{
		printf("�A���t�@�x�b�g�ȊO�ł��D");
	}
	/*��L�̏ꍇ�ɓ��Ă͂܂�Ȃ��iA����Z�܂���a����z�܂ł̃A���t�@�x�b�g�łȂ��j�ꍇ�A
	"�A���t�@�x�b�g�ȊO�ł��D"�Əo�͂���*/

	return 0;
}
