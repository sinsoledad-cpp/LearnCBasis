//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct student ss;
//struct student
//{
//	char *name;
//	int age;
//	int *scores;
//	char *addr;
//};
//int main()
//{
//	ss*p = (ss*)malloc(sizeof(ss)* 3);
//
//	for (int i = 0; i < 3; i++)
//	{
//		p[i].name = (char*)malloc(sizeof(char)*21);
//		p[i].scores = (int*)malloc(sizeof(int)* 3);
//		p[i].addr = (char*)malloc(sizeof(char)* 51); 
//	}
//
//		for (int i = 0; i < 3; i++){
//			scanf("%s%d%d%d%d%s", p[i].name, &p[i].age, &p[i].scores[0], &p[i].scores[1], &p[i].scores[2], p[i].addr);
//		}
//
//		for (int i = 0; i < 3; i++){
//			printf("������%s\t", p[i].name);
//			printf("����:%d\t", p[i].age);
//			printf("�ɼ�1:%d\t", p[i].scores[0]);
//			printf("�ɼ�2:%d\t", (p+i)->scores[1]);
//			printf("�ɼ�3:%d\t", (p + i)->scores[2]);
//			printf("��ַ��%s\n", (p + i)->addr);
//		}
//
//		for (int i = 0; i < 3; i++){
//			free(p[i].name);
//			free(p[i].scores);
//			free(p[i].addr);
//		}
//		free(p);
//	system("pause");
//	return EXIT_SUCCESS;
//}
