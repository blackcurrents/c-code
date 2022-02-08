#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	printf("请输入任意一个正整数：");
	scanf_s("%d", &a);
	if (a == 1)
		printf("这个数字不是质数");
	else {
		for (i = 2; i < a; i++)
		{
			if (a % i == 0)
				break;
		}if (a == i)
			printf("该数字是质数");
		else
			printf("该数字不是质数");

	}
	
	return 0;
}