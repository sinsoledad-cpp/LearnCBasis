#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[] = "www.itcast.cn";
	char *p = strtok(ch, ".");
	printf("%s\n", p);
	printf("%s\n", ch);
	printf("\n");

	p = strtok(NULL, ".");
	printf("%s\n", p);
	printf("%s\n", ch);
	printf("\n");

	p = strtok(NULL, ".");
	printf("%s\n", p);
	printf("%s\n", ch);
	printf("\n");

	char chr[] = "123456@qq.com";
	char str[100] = { 0 };

	strcpy(str, chr);
	char*q= strtok(str, "@");
	printf("%s\n", q);
	q= strtok(NULL, ".");
	printf("%s\n", q);
	printf("\n");



	system("pause");
	return EXIT_SUCCESS;
}
