#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	printf("文件打开成功: %p\n", fp);
	

	fclose(fp);

	return 0;
}