#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main1001()
{
	//文本文件以txt结尾，二进制文件以bat结尾（p处理文件）
	//在windows中所有文本文件都是以\r\n结尾的，在读取文件的时候，系统会把"\r\n"转换成\n
	//这里写成wb是为了使文件出现换行的时候不会出错
	//不加b就会出现\r\n两个字符
	FILE* fp = fopen("D:/c.txt", "wb");
	if (!fp)
	{
		printf("文件打开失败");
		return -1;
	}
	//int a = 5678;

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };



	fwrite(arr, sizeof(int), 10, fp);

	fclose(fp);


	system("pause");
	return 0;
}
int main1002()
{
	FILE* fp = fopen("D:/c.txt", "rb");
	if (!fp)
	{
		return -1;
	}
	/*int value;
	fread(&value, sizeof(int), 1, fp);
	printf("%d", value);*/
	
	int arr[10] = { 0 };
	fread(arr, 4, 10, fp);

	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}

	fclose(fp);

	return 0;
}