#include <stdio.h>

int main(void) {
	
	int a,c;

	printf("2�ȏ�̐�����͂��Ă�����������");

	scanf("%d", &a);

	if (a==2)
	{
		printf("%d�͑f���ł�", a);
	}

	int b = a - 1;

	while (a>=2&&b>2)
	{
		c = a%b;
		b--;
		if (c==0)
		{
			printf("%d�͑f���ł͂���܂���", a);
			break;
		}
	}
	if (b>=2&&c>0)
	{
		printf("%d�͑f���ł�", a);
	}
        /*while����if����p���đf��������s��*/
	return 0;
}
