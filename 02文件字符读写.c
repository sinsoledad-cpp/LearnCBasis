#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main0201()
{
	//以只读方式打开文件（不创建文件，文件不存在则报错）
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
	{
		printf("文件打开失败");
		return -1;
	}
	char ch;
	//文件字符的读取
	//不能改变fp；在读取一次之后，光标流会自动向下移动
	//文件结尾
	ch = fgetc(fp);
	
	printf("%c\n", ch);

	fclose(fp);
	system("pause");
	return 0;
}
int main0202()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
	{
		printf("文件打开失败");
		return -1;
	}
	char ch;
	//文本文件结束是以-1结尾，即EOF，二进制文件不能用EOF
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(fp);

	return 0;
}
int main0203()
{
	//w是以写方式打开一个文件（如果文件存在则清空文件，不存在则创建一个文件）
	FILE* fp = fopen("D:/c.txt", "w");
	if (!fp)
	{
		printf("文件打开失败");
		return -1;
	}
	char ch = 'a';
	//字符写入
	fputc(ch, fp);


	fclose(fp);
	return 0;
}
int main0204()
{
	FILE* fp = fopen("D:/c.txt", "w");
	if (!fp)
	{
		printf("文件打开失败");
		return -1;
	}
	printf("输入@表示结束\n");
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