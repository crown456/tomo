#include <stdio.h>

int main(void) {

	int a, b;

	printf("���la=");
	scanf("%d", &a);
	printf("���lb=");
	scanf("%d", &b);
	
	int c = a%b;

	while (c>0||c<0)
	{
		a = b;
		b = c;
		c = a%b;
	}
	/*�����Ń��[�N���b�h�̌ݏ��@���s��*/

	printf("�ő���񐔁�%d", b);

	return 0;
}
