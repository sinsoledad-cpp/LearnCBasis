#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
	printf("�ļ��򿪳ɹ�: %p\n", fp);
	

	fclose(fp);

	return 0;
}