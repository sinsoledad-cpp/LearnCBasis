#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main0701()
{
	FILE* fp = fopen("D:/b.txt", "r");
	if (!fp)
	{
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 1024);
	//遇到回车和空格表示结束
	int a;
	fscanf(fp, "%3d", &a);
	printf("%d\n", a);

	fscanf(fp, "%s", p);
	printf("%s", p);
	
	fscanf(fp, "%s", p);
	printf("%s", p);

	free(p);
	fclose(fp);

	system("pause");
	return 0;
}
int main0702()
{
	//FILE* fp = fopen("D:/四则运算结果.txt", "r");
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
	{
		return -1;
	}
	/*int a, b, sum;
	char c;*/
	/*fscanf(fp, "%d%c%d=%d", &a, &c, &b, &sum);
	printf("%d%c%d=%d", a, c, b, sum);*/

	char ch[20];
	//fscanf(fp, "%s", ch);//读取hello
	//fscanf(fp, "%[^\n]", ch);//读取hello world
	//fscanf(fp, "%12s", ch);//只能读取到hello
	fscanf(fp, "%3s", ch);

	printf("%s", ch);

	fclose(fp);

	return 0;
}
int main0703()
{
	FILE* fp = fopen("D:/a.txt", "w");
	if (!fp)
	{
		return -1;
	}
	/*char ch[] = "hello world";
	fprintf(fp, "%s", ch);*/
	int a = 10;
	fprintf(fp, "%05d", a);

	fclose(fp);

	return 0;
}
int main0704()
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/四则运算.txt", "w");
	if(!fp)
	{
		return -1;
	}
	int a, b;
	char c;

	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		switch (rand() % 4)
		{
		case 0:c = '+'; break;
		case 1:c = '-'; break;
		case 2:c = '*'; break;
		case 3:c = '/'; break;
		}
		fprintf(fp, "%d%c%d=\n", a, c, b);

	}

	fclose(fp);

	return 0;
}
int main0705()
{
	FILE* fp1 = fopen("D:/四则运算.txt", "r");
	FILE* fp2 = fopen("D:/四则运算结果2.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("打开文件失败");
		return -1;
	}
	int a, b, sum;
	char c;
	for (int i = 0; i < 100; i++)
	{
		fscanf(fp1, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
		case '+':sum = a + b; break;
		case '-':sum = a - b; break;
		case '*':sum = a * b; break;
		case '/':sum = a / b; break;
		}
		fprintf(fp2, "%d%c%d=%d\n", a, c, b, sum);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}