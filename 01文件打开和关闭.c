#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main01()
{
	//windows中\是转义字符，因此路径可以写为D:\\文件名，或者D:/
	FILE* fp = fopen("D:/a.txt", "r");
	//文件打开失败的原因：
	//1、找不到文件
	//2、文件权限（读 写 执行）
	//3、程序打开文件超出上线 65535
	if (fp == NULL)
	{
		printf("打开文件失败");
		return -1;
	}
	printf("文件打开成功%p\n",fp);

	//在程序编写过程中，不能改变fp的值
	fclose(fp);



	system("pause");
	return 0;
}