//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//struct student
//{
//	char *name;
//	int age;
//	int *scores;
//	char *addr;
//};
//
//int main()
//{
//	struct student stu;
//	stu.name = (char*)malloc(sizeof(char)* 21);
//	stu.scores = (int*)malloc(sizeof(int)* 3);
//	stu.addr = (char*)malloc(sizeof(char)* 51);
//	strcpy(stu.name, "张三");
//	strcpy(stu.addr, "北京市");
//	//printf("%p", stu.name);
//	stu.scores[0] = 88;
//	stu.scores[1] = 99;
//	stu.scores[2] = 100;
//	stu.age = 18;
//
//	struct student *p = &stu;
//	printf("%s\n", (*p).name);
//	printf("%d\n", p->age);
//	printf("%s\t%d\t%d\t%d\t%d\t%s\n", stu.name, stu.age, stu.scores[0], stu.scores[1], stu.scores[2], stu.addr);
//
//	free(stu.name);
//	free(stu.addr);
//	free(stu.scores);
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
