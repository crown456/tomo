#include <stdio.h>

int main(void) {
	
	int a,c;

	printf("2ˆÈã‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");

	scanf("%d", &a);

	if (a==2)
	{
		printf("%d‚Í‘f”‚Å‚·", a);
	}

	int b = a - 1;

	while (a>=2&&b>2)
	{
		c = a%b;
		b--;
		if (c==0)
		{
			printf("%d‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ", a);
			break;
		}
	}
	if (b>=2&&c>0)
	{
		printf("%d‚Í‘f”‚Å‚·", a);
	}
        /*while•¶‚Æif•¶‚ğ—p‚¢‚Ä‘f””»’è‚ğs‚¤*/
	return 0;
}
