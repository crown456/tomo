int main(void) {
	  int a,b=1,c=1;

		printf("n����");

		scanf("%d", &a);
		/*�����œ��͂�������F��������*/

	while(b<a) 
	{
		b = b++;
		c = c*b;
	}
	/*���͂��ꂽ�������������������ׂĂ�����i�K��v�Z������j*/
	printf("%d!��%d\n", a, c);

	return 0;
}
