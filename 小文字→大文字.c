#include  <stdio.h>

int main(void)
{
	char ch;

	printf("‰pš‚Ì¬•¶š‚ğ“ü—Í‚µ‚È‚³‚¢„");

	ch = getchar();
	/*‚±‚±‚Å‘Å‚¿‚Ü‚ê‚½•¶š‚ğ”F¯‚·‚é*/

	int num;

	num = (int)ch;
	/*‚±‚±‚Å‘Å‚¿‚Ü‚ê‚½•¶š‚ğ”š‚É•ÏŠ·‚·‚é*/

	int num1 = num - 0x20;
	/*‚±‚±‚Å•¶š‚ğ‘å•¶š‚É‚·‚é‚½‚ßA“ü—Í‚µ‚½¬•¶š‚É‚ ‚½‚é”‚©‚ç16i”‚Ì20‚ğˆø‚­*/

	printf("\n‰p‘å•¶š„%c", num1);

	return 0;
}
