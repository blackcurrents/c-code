#include<stdio.h>
int number02(int x, int y)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((x >> i)&1 )!= ((y >> i)&1))
			count++;
	}
	return count;
}
int main()
{
	int n = 0;
	int m = 0;
	int number = 0;
	printf("求两个二进制数中有多少位数不同\n");
	printf("请输入两个数：");
	scanf_s("%d %d", &m, &n);
	number = number02(m, n);
	printf("这两个数有%d位不同。", number);
	return 0;
}