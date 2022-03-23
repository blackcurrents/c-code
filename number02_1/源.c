#include<stdio.h>
int number02(int x)
{
	int count = 0;
	while (x)
	{
		x = x & (x - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	int ret = 0;
	int count = 0;
	printf("此为number02的优化版本\n");
	scanf_s("%d %d", &m, &n);
	ret = m ^ n;
	count = number02(ret);
	printf("%d", count);
	return 0;
}