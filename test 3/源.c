#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	printf("����������һ����������");
	scanf_s("%d", &a);
	if (a == 1)
		printf("������ֲ�������");
	else {
		for (i = 2; i < a; i++)
		{
			if (a % i == 0)
				break;
		}if (a == i)
			printf("������������");
		else
			printf("�����ֲ�������");

	}
	
	return 0;
}