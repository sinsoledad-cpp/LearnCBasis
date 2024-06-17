#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main0301()
{
	FILE* fp1 = fopen("D:/需加密的文件.txt", "r");
	FILE* fp2 = fopen("D:/加密.txt", "w");

	if (!fp1 || !fp2)
	{
		printf("文件打开失败");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//加密
		ch++;
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);




	system("pause");
	return 0;
}
int main0302()
{
	FILE* fp1 = fopen("D:/加密.txt", "r");
	FILE* fp2 = fopen("D:/解密.txt", "w");

	if (!fp1 || !fp2)
	{
		printf("文件打开失败");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//解密
		ch--;
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);




	system("pause");
	return 0;
}