#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int a = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = a - 1;
	int b = 0;
	printf("������һ����λ����");
	scanf_s("%d", &b);
	while (1)
	{
		int mid = (left + right) / 2;
		if (b > arr[mid])
		{
			left = mid + 1;
		}
		else if (b < arr[mid])
		{
			right = mid - 1;
		}
		else {
			printf("�ҵ��ˣ�������������������λ����%d", mid);
			break;
		}
	}
	return 0;
}