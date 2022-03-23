#include<stdio.h>
int main()
{
	printf("不创建变量交换两个数:");
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a,b);
	return 0;
}