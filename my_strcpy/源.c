#include<stdio.h>
#include<assert.h>
void my_strlen(char* dest, char* sou)
{
	assert(dest!=NULL);
	assert(sou != NULL);
	while (*dest++ = *sou++)
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxxx";
	char arr2[20] = "hello";
	my_strlen(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}