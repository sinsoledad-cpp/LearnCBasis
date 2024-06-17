#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strcmp(char*ch1, char*ch2);
int my_strncmp01(char*ch1, char*ch2, size_t n);
int main()
{
	char ch1[] = "hello world";
	char ch2[] = "hello world";

	//int value = strcmp(ch1, ch2);
	int value = my_strcmp(ch1, ch2);
	int value0 = my_strcmp(ch1, ch2,3);

	printf("%d", value);
	printf("%d", value0);

	system("pause");
	return 0;
}
int my_strcmp01(char*ch1, char*ch2)
{
	while (*ch1 == *ch2)
	{
		if (*ch1 == 0){
			return 0;
		}
		ch1++;
		ch2++;
	}
		return *ch1 > *ch2 ? 1: -1;
}
int my_strcmp(char*ch1, char*ch2)
{
	while (*ch1++ == *ch2++&&*ch1);
	if ((!*--ch1) && (!*--ch2))
	{ 
		return 0; 
	}
	return *ch1 > *ch2 ? 1 : -1;
}
int my_strncmp01(char*ch1, char*ch2, size_t n)
{
	for (int i = 0; i < n&&ch1[i]&&ch2[i]; i++)
	{
		if (ch1[i] != ch2[i])
		{
			return ch1[i]>ch2[i] ? 1 : -1;
		}
		
	}
	return 0;
}
