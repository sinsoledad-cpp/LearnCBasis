//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//arr[5][3]
//	//开辟二级指针对应的堆空间
//	int **p = (int**)malloc(sizeof(int*)* 5);
//	//开辟一级指针对应的堆空间
//	for (int i = 0; i < 5; i++){
//		p[i] = (int*)malloc(sizeof(int)* 3);
//	}
//	for (int i = 0; i < 5; i++){
//		for (int j = 0; j < 3; j++){
//			scanf("%d", &p[i][j]);
//		}
//	}
//	for (int i = 0; i < 5; i++){
//		for (int j = 0; j < 3; j++){
//			printf("%d\t", p[i][j]);
//			//printf("%d\t", *(p[i]+j));
//			//printf("%d\t", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		free(p[i]);
//	}
//	free(p);
//	system("pause");
//	return EXIT_SUCCESS;
//}
