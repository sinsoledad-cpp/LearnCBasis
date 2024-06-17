#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp1 = fopen("加密.txt", "r");
	FILE* fp2 = fopen("解密.txt", "w");
	if (!fp1 || !fp2)
	{
		return -1;
	}
	//加密
	char ch;
	while ((ch=fgetc(fp1))!=EOF)
	{
		ch++;
		fputc(ch, fp2);
	}
	////解密
	//char ch;
	//while ((ch = fgetc(fp2)) != EOF)
	//{
	//	ch--;
	//	fputc(ch, fp1);
	//}
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}