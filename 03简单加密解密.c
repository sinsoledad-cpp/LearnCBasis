#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main0301()
{
	FILE* fp1 = fopen("D:/����ܵ��ļ�.txt", "r");
	FILE* fp2 = fopen("D:/����.txt", "w");

	if (!fp1 || !fp2)
	{
		printf("�ļ���ʧ��");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//����
		ch++;
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);




	system("pause");
	return 0;
}
int main0302()
{
	FILE* fp1 = fopen("D:/����.txt", "r");
	FILE* fp2 = fopen("D:/����.txt", "w");

	if (!fp1 || !fp2)
	{
		printf("�ļ���ʧ��");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		//����
		ch--;
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);




	system("pause");
	return 0;
}