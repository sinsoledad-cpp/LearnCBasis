#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main01()
{
	//windows��\��ת���ַ������·������дΪD:\\�ļ���������D:/
	FILE* fp = fopen("D:/a.txt", "r");
	//�ļ���ʧ�ܵ�ԭ��
	//1���Ҳ����ļ�
	//2���ļ�Ȩ�ޣ��� д ִ�У�
	//3��������ļ��������� 65535
	if (fp == NULL)
	{
		printf("���ļ�ʧ��");
		return -1;
	}
	printf("�ļ��򿪳ɹ�%p\n",fp);

	//�ڳ����д�����У����ܸı�fp��ֵ
	fclose(fp);



	system("pause");
	return 0;
}