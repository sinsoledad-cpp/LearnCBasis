#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000
void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main0901()
{
	FILE* fp1 = fopen("D:/数据.txt", "r");
	FILE* fp2 = fopen("D:/数据排序冒泡版.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("文件打开失败");
		return -1;
	}
	//冒泡版排序
	int* arr = (int*)malloc(sizeof(int) * SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		fscanf(fp1, "%d\n", &arr[i]);
	}
	BubbleSort(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		fprintf(fp2, "%d\n", arr[i]);
	}

	free(arr);
	fclose(fp1);
	fclose(fp2);

	system("pause");
	return 0;
}
int main0902()
{
	FILE* fp1 = fopen("D:/数据.txt", "r");
	FILE* fp2 = fopen("D:/数据排序插入版.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("文件打开失败");
		return -1;
	}

	int* arr = (int*)malloc(sizeof(int) * 256);

	memset(arr, 0, sizeof(int) * 256);

	for (int i = 0; i < 1000; i++)
	{
		int value;
		fscanf(fp1, "%d\n", &value);
		arr[value]++;//将数据的个数放在对应的下标里面
	}

	for (int i = 0; i < 256; i++)
	{
		for (int j = 0; j < arr[j]; j++)
		{
			fprintf(fp2, "%d\n", i);
		}
	}

	free(arr);
	fclose(fp1);
	fclose(fp2);

	return 0;
}