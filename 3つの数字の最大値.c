#include <stdio.h>


int main(void)
{
	int num1, num2, num3;

	printf("�R�̐�����");

	scanf("%d", &num1);

	scanf("%d", &num2);

	scanf("%d", &num3);
	/*3�̐�����F��������*/

	if (num2<num3 && num1<num3) {
		printf("�ő�l��%d", num3);
	}
	/*3�ڂ̐�������ԑ傫���������A�ő�l�Ƃ���3�ڂ̐������o�͂���*/

	else if (num1>num2 && num1>num3) {
		printf("�ő�l��%d", num1);
	}
	/*1�ڂ̐�������ԑ傫���������A�ő�l�Ƃ���1�ڂ̐������o�͂���*/
	
	else {
		printf("�ő�l��%d", num2);
	}
	/*���̑��̎��i2�ڂ̐�������ԑ傫���������j�A�ő�l�Ƃ���2�ڂ̐������o�͂���*/

	return 0;
}
