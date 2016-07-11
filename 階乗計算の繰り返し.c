#include <stdio.h>

int main(void) {
	  int a,b=1,c=1;

	  while (b=1)
	  {
		  int a, b = 1, c = 1;
		 
			  printf("n„");

			  scanf("%d", &a);
			  /*‚±‚±‚Å“ü—Í‚³‚ê‚½”‚ğ”F¯‚³‚¹‚é*/
			  if (a<=0)
			  {
				  break;
			  }
			  /*‚±‚±‚Å0ˆÈ‰º‚Ì”‚ª“ü—Í‚³‚ê‚½ê‡ŒJ‚è•Ô‚µ‚ğ’†’f‚·‚é*/
		  while (b < a)
		  {
			  b = b++;
			  c = c*b;

			  /*“ü—Í‚³‚ê‚½”‚æ‚è‚à¬‚³‚¢”‚ğ‚·‚×‚Ä‚©‚¯‚éiŠKæŒvZ‚ğ‚·‚éj*/
		  }
		  printf("%d!%d\n", a, c);

	  }

	return 0;
}
