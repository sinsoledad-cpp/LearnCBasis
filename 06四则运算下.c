#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main06()
{
	FILE* fp1 = fopen("D:/四则运算上.txt", "r");
	FILE* fp2 = fopen("D:/四则运算结果.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("文件打开失败");
		return -1;
	}

	int a, b, sum;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);

	//判断文件结尾可以用!feof(fp1)
	for (int i = 0; i < 100; i++)
	{
		memset(p, 0, 20);//重置p
		fgets(p, 20, fp1);//读取第一行内容

		//在fp1中读取数据abc
		sscanf(p, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
			case '+':sum = a + b; break;
			case '-':sum = a - b; break;
			case '*':sum = a * b; break;
			case '/':sum = a / b; break;
		}
		memset(p, 0, 20);//重置p中的内容
		//将计算的值和式子放在p中
		sprintf(p, "%d%c%d=%d\n", a, c, b, sum);
		//将p存放在fp2中
		fputs(p, fp2);
	}

	free(p);
	fclose(fp1);
	fclose(fp2);

	system("pause");
	return 0;
}