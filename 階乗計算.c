int main(void) {
	  int a,b=1,c=1;

		printf("n＝＞");

		scanf("%d", &a);
		/*ここで入力した数を認識させる*/

	while(b<a) 
	{
		b = b++;
		c = c*b;
	}
	/*入力された数よりも小さい数をすべてかける（階乗計算をする）*/
	printf("%d!＝%d\n", a, c);

	return 0;
}
