#include<stdio.h>
void number03(int x)
{
	int i = 0;
	//ż��λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (x >> i) & 1);
	}
	printf("\n");
	//����λ
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (x >> i) & 1);
	}
}
int main()
{
	int m = 0;
	printf("��ȡ���������е�����λ��ż��λ����\n");
	printf("������һ������");
	scanf_s("%d", &m);
	number03(m);
	return 0;
}