#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	////文件打开
	////FILE* fp1 = fopen("a.txt", "r");
	////if (fp1 == NULL)
	////{
	////	printf("打开文件失败\n");
	////	return -1;
	////}
	////printf("文件打开成功: %p\n", fp1);
	// 
	// 
	// 
	////读取
	////char ch1;
	////while ((ch1 = fgetc(fp1)) != EOF)
	////{
	////	printf("%c", ch1);
	////}
	////关闭
	////fclose(fp1);
	// 
	// 
	// 
	//写入
	//FILE* fp = fopen("b.txt", "w");
	//if (fp == NULL)
	//{
	//	printf("打开文件失败\n");
	//	return -1;
	//}
	//char ch = 'a';
	//fputc(ch, fp);
	//fclose(fp);

	FILE* fp = fopen("c.c", "w");
	if (fp == NULL)
	{
		printf("打开文件失败\n");
		return -1;
	}
	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')
		{
			break;
		}
		fputc(ch, fp);

	}
	fclose(fp);
	return 0;
}