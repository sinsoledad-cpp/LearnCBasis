#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void BubbleSort01(int*arr, int len);
void BubbleSort02(int*p, int len);
main()
{
	int arr[] = { 4, 7, 5, 8, 1 };
	int *p = arr;
	
	int len = sizeof(arr)/ sizeof(arr[0]);
	BubbleSort(p, len);
	for (int k = 0; k < len; k++){
		printf("%d",*p);
		p++;
	}
	getchar();
	getchar();
	return 0;
}
void BubbleSort01(int*p, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (*(p+j)>*(p + 1+j))
			{
				int temp= *(p+j);
				*(p+j) = *(p + 1+j);
				*(p + 1 + j) = temp;
			}
		}
	}
}
void BubbleSort02(int*arr, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j<len - 1 - i; j++) 
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
