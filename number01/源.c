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
	printf("��������1�ĸ���\n");
	printf("����������һ��������");
	scanf_s("%d", &n);
	ret = number01(n);
	printf("�����Ķ�����������%d��1", ret);
	return 0;
}