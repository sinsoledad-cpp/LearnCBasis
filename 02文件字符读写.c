#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main0201()
{
	//��ֻ����ʽ���ļ����������ļ����ļ��������򱨴�
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
	{
		printf("�ļ���ʧ��");
		return -1;
	}
	char ch;
	//�ļ��ַ��Ķ�ȡ
	//���ܸı�fp���ڶ�ȡһ��֮�󣬹�������Զ������ƶ�
	//�ļ���β
	ch = fgetc(fp);
	
	printf("%c\n", ch);

	fclose(fp);
	system("pause");
	return 0;
}
int main0202()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
	{
		printf("�ļ���ʧ��");
		return -1;
	}
	char ch;
	//�ı��ļ���������-1��β����EOF���������ļ�������EOF
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(fp);

	return 0;
}
int main0203()
{
	//w����д��ʽ��һ���ļ�������ļ�����������ļ����������򴴽�һ���ļ���
	FILE* fp = fopen("D:/c.txt", "w");
	if (!fp)
	{
		printf("�ļ���ʧ��");
		return -1;
	}
	char ch = 'a';
	//�ַ�д��
	fputc(ch, fp);


	fclose(fp);
	return 0;
}
int main0204()
{
	FILE* fp = fopen("D:/c.txt", "w");
	if (!fp)
	{
		printf("�ļ���ʧ��");
		return -1;
	}
	printf("����@��ʾ����\n");
	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '@')
		{
			break;
		}
		fputc(ch, fp);
	}


	fclose(fp);
	return 0;
}