#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "123456";
	char arr[7];
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		printf("请输入6位数密码：");
		scanf_s("%s", arr, 7);
		printf("%s", arr);
		if (strcmp(arr, arr1) == 0)
		{
			printf("密码正确\n");
			break;
		}
		else 
		{
			printf("密码错误，请重新输入\n");

		}
		

	}
	if (i == 3)
	{
		printf("累计错误三次，退出登录");
	}
	else {
		printf("登录成功");
	}
	return 0;
}
