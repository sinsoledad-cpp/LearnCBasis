//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int *p = (int*)malloc(sizeof(int)* 10);
//	//memset()重置内存空间的值
//	memset(p, 0, 40);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", p[i]);
//	}
//	char ch[10];
//	memset(ch, 'a', 10);
//	for (int i = 0; i < 10; i++){
//		printf("%c", ch[i]);
//	}
//	printf("\n");
//	//memcpy
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *q = (int*)malloc(sizeof(int)* 10);
//	memcpy(q, arr, sizeof(int)* 10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", q[i]);
//	}
//	free(q);
//	printf("\n");
//	
//
//	
//
//	char m[] = "hello\0 world";
//	char n[100];
//	memcpy(n, m, 13);
//	printf("%s\n", n);
//	for (int i = 0; i < 13; i++){
//		printf("%c", n[i]);
//	}
//	printf("\n");
//
//	//memmove
//	int arr0[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	memmove(&arr0[5], &arr0[3], 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", arr0[i]);
//	}
//	printf("\n");
//
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 0 };
//	int arr2[] = { 1, 2, 3, 4, 5 };
//	char arr11[] = "hello\n world";
//	char arr22[] = "hello\n world";
//	int value1 = memcmp(arr1, arr2, 20);
//	int value2 = memcmp(arr11, arr22, 13);
//	printf("%d\t", value1);
//	printf("%d\t", value2);
//
//	printf("\n");
//	system("pause");
//	return EXIT_SUCCESS;
//}
