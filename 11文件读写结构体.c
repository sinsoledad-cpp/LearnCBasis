#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
typedef struct student
{
	char name[21];
	int age;
	int score;
	char addr[51];
}stu;
int main1101()
{
	stu ss[3] =
	{
		{ "��ĳ��",9,10,"�ӱ���ɽ" },
		{"��ĳ��",3,1000,"�ӱ�����"},
		{"��ʦ",30,1,"����������"}
	};
	FILE* fp = fopen("D:/d.txt", "wb");
	if (!fp)
		return -1;

	for (int i = 0; i < 3; i++)
	{
		fwrite(&ss[i], sizeof(stu), 1, fp);
	}
	fclose(fp);


	system("pause");
	return 0;
}
int main1102()
{
	FILE* fp = fopen("D:/d.txt", "rb");	
	if (!fp)
		return -1;

	stu* ss = (stu*)malloc(sizeof(stu) * 3);

	int i = 0;
	while (!feof(fp))//�ж��ļ��Ƿ񵽽�β
	{
		fread(&ss[i], sizeof(stu), 1, fp);

		i++;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n", ss[i].name);
		printf("���䣺%d\n", ss[i].age);
		printf("�ɼ���%d\n", ss[i].score);
		printf("��ַ��%s\n", ss[i].addr);
	}

	free(ss);
	fclose(fp);



	return 0;
}