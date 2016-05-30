#include <stdio.h>


int main(void)
{
	int num1, num2;

	printf("‚Q‚Â‚Ì®”„");

	scanf("%d", &num1);

	scanf("%d", &num2);

	if (num1>num2)
	{
		printf("\n%d", num1);

		printf("%*s", 1, "");

		printf("%d", num2);

	}
	/*1‚Â–Ú‚Ì”‚ª2‚Â–Ú‚Ì”‚æ‚è‘å‚«‚¯‚ê‚Î‚»‚Ì‚Ü‚Ü‚Ì‡‚Éo—Í‚·‚é*/

	else
	{
		printf("\n%d", num2);

		printf("%*s", 1, "");

		printf("%d", num1);

	}
	/*2‚Â–Ú‚Ì”‚ª1‚Â–Ú‚Ì”‚æ‚è‘å‚«‚¯‚ê‚Î‡”Ô‚ğ“ü‚ê‘Ö‚¦‚Äo—Í‚·‚é*/


	return 0;
}
