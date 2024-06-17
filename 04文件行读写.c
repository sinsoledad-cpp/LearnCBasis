#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main0401()
{
	FILE* fp = fopen("D:/b.txt", "r");

	if (!fp)
	{
		printf("文件打开失败");
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 100);
	memset(p, 0, 100);
	fgets(p, 100, fp);

	printf("%s\n", p);

	free(p);
	fclose(fp);

	system("pause");
	return 0;
}
int main0402()
{
	FILE* fp = fopen("D:/b.txt", "r");
	if (!fp)
	{
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);

	//feof是一个文件指针，可以判断文件是否结束，可以判断文本文件，也可判断二进制文件
	//如果没到文件结尾，返回值为0
	//如果到文件结尾，返回值为非0的值
	while (!feof(fp))
	{
		memset(p, 0, 100);
		fgets(p, 100, fp);
		printf("%s", p);
	}

	free(p);
	fclose(fp);

	return 0;
}
int main0403()
{
	FILE* fp = fopen("D:/b.txt", "w");
	if (!fp)
	{
		return -1;
	}

	char ch[] = "你瞅啥\n瞅你咋地";//如果是“你瞅啥\0瞅你咋地”，到\0就已经结束

	fputs(ch, fp);
	fclose(fp);

	return 0;
}
int main0404()
{
	FILE* fp = fopen("D:/b.txt", "w");
	if (!fp)
	{
		return -1;
	}
	
	char* p = (char*)malloc(sizeof(char) * 1024);
	while (1)
	{
		memset(p, 0, 1024);
		//scanf("%s", p);这样写没有空格和换行
		
		//接收非\n内容
		scanf("%[^\n]s", p);
		getchar();//吃掉一个\n
		//停止输入指令 comm=exit
		if (!strcmp(p, "comm=exit"))
			break;
		//追加\n
		strcat(p, "\n");
		

		fputs(p, fp);
	}

	free(p);
	fclose(fp);

	
	return 0;
}