#include<stdio.h>
void number03(int x)
{
	int i = 0;
	//偶数位
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (x >> i) & 1);
	}
	printf("\n");
	//奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (x >> i) & 1);
	}
}
int main()
{
	int m = 0;
	printf("获取二进制数中的奇数位与偶数位的数\n");
	printf("请输入一个数：");
	scanf_s("%d", &m);
	number03(m);
	return 0;
}