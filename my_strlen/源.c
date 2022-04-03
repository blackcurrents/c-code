#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}