#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	////�ļ���
	////FILE* fp1 = fopen("a.txt", "r");
	////if (fp1 == NULL)
	////{
	////	printf("���ļ�ʧ��\n");
	////	return -1;
	////}
	////printf("�ļ��򿪳ɹ�: %p\n", fp1);
	// 
	// 
	// 
	////��ȡ
	////char ch1;
	////while ((ch1 = fgetc(fp1)) != EOF)
	////{
	////	printf("%c", ch1);
	////}
	////�ر�
	////fclose(fp1);
	// 
	// 
	// 
	//д��
	//FILE* fp = fopen("b.txt", "w");
	//if (fp == NULL)
	//{
	//	printf("���ļ�ʧ��\n");
	//	return -1;
	//}
	//char ch = 'a';
	//fputc(ch, fp);
	//fclose(fp);

	FILE* fp = fopen("c.c", "w");
	if (fp == NULL)
	{
		printf("���ļ�ʧ��\n");
		return -1;
	}
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