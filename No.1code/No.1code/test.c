#include<stdio.h>
int main() 
{
	char name[10];
	printf("Please Input Your Name:");
	scanf_s("%s", name, 10);
	printf("Hi! %s ,welcome to the new world", name);
	return 0;
}