#include <stdio.h>

int main(void) {
	  int a,b=1,c=1;

	  while (b=1)
	  {
		  int a, b = 1, c = 1;
		 
			  printf("n����");

			  scanf("%d", &a);
			  /*�����œ��͂��ꂽ����F��������*/
			  if (a<=0)
			  {
				  break;
			  }
			  /*������0�ȉ��̐������͂��ꂽ�ꍇ�J��Ԃ��𒆒f����*/
		  while (b < a)
		  {
			  b = b++;
			  c = c*b;

			  /*���͂��ꂽ�������������������ׂĂ�����i�K��v�Z������j*/
		  }
		  printf("%d!��%d\n", a, c);

	  }

	return 0;
}
