#include<stdio.h>
int number01(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int ret = 0;
	int n = 0;
	printf("二进制中1的个数\n");
	printf("请任意输入一个整数：");
	scanf_s("%d", &n);
	ret = number01(n);
	printf("该数的二级制数中有%d个1", ret);
	return 0;
}