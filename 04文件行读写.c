#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main0401()
{
	FILE* fp = fopen("D:/b.txt", "r");

	if (!fp)
	{
		printf("�ļ���ʧ��");
		return -1;
	}
	char* p = (char*)malloc(sizeof(char) * 100);
	memset(p, 0, 100);
	fgets(p, 100, fp);

	printf("%s\n", p);

	free(p);
	fclose(fp);

	system("pause");
	return 0;
}
int main0402()
{
	FILE* fp = fopen("D:/b.txt", "r");
	if (!fp)
	{
		return -1;
	}

	char* p = (char*)malloc(sizeof(char) * 100);

	//feof��һ���ļ�ָ�룬�����ж��ļ��Ƿ�����������ж��ı��ļ���Ҳ���ж϶������ļ�
	//���û���ļ���β������ֵΪ0
	//������ļ���β������ֵΪ��0��ֵ
	while (!feof(fp))
	{
		memset(p, 0, 100);
		fgets(p, 100, fp);
		printf("%s", p);
	}

	free(p);
	fclose(fp);

	return 0;
}
int main0403()
{
	FILE* fp = fopen("D:/b.txt", "w");
	if (!fp)
	{
		return -1;
	}

	char ch[] = "���ɶ\n����զ��";//����ǡ����ɶ\0����զ�ء�����\0���Ѿ�����

	fputs(ch, fp);
	fclose(fp);

	return 0;
}
int main0404()
{
	FILE* fp = fopen("D:/b.txt", "w");
	if (!fp)
	{
		return -1;
	}
	
	char* p = (char*)malloc(sizeof(char) * 1024);
	while (1)
	{
		memset(p, 0, 1024);
		//scanf("%s", p);����дû�пո�ͻ���
		
		//���շ�\n����
		scanf("%[^\n]s", p);
		getchar();//�Ե�һ��\n
		//ֹͣ����ָ�� comm=exit
		if (!strcmp(p, "comm=exit"))
			break;
		//׷��\n
		strcat(p, "\n");
		

		fputs(p, fp);
	}

	free(p);
	fclose(fp);

	
	return 0;
}