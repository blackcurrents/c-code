#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "Hello world!";
	char arr2[] = "************";
	int left = 0;
	int right = strlen(arr1)-1;
	while (left <= left)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		/*system("cls");*/
		left++;
		right--;
	}
	return 0;
}