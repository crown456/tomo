#include  <stdio.h>

int main(void)
{
	char ch;

	printf("�p���̏���������͂��Ȃ�������");

	ch = getchar();
	/*�����őł����܂ꂽ������F������*/

	int num;

	num = (int)ch;
	/*�����őł����܂ꂽ�����𐔎��ɕϊ�����*/

	int num1 = num - 0x20;
	/*�����ŕ�����啶���ɂ��邽�߁A���͂����������ɂ����鐔����16�i����20������*/

	printf("\n�p�啶������%c", num1);

	return 0;
}
