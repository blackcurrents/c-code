#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "123456";
	char arr[7];
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("������6λ�����룺");
		scanf_s("%s", arr, 7);
		printf("%s", arr);
		if (strcmp(arr, arr1) == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else 
		{
			printf("�����������������\n");

		}
		

	}
	if (i == 3)
	{
		printf("�ۼƴ������Σ��˳���¼");
	}
	else {
		printf("��¼�ɹ�");
	}
	return 0;
}
