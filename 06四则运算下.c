#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main06()
{
	FILE* fp1 = fopen("D:/����������.txt", "r");
	FILE* fp2 = fopen("D:/����������.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("�ļ���ʧ��");
		return -1;
	}

	int a, b, sum;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);

	//�ж��ļ���β������!feof(fp1)
	for (int i = 0; i < 100; i++)
	{
		memset(p, 0, 20);//����p
		fgets(p, 20, fp1);//��ȡ��һ������

		//��fp1�ж�ȡ����abc
		sscanf(p, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
			case '+':sum = a + b; break;
			case '-':sum = a - b; break;
			case '*':sum = a * b; break;
			case '/':sum = a / b; break;
		}
		memset(p, 0, 20);//����p�е�����
		//�������ֵ��ʽ�ӷ���p��
		sprintf(p, "%d%c%d=%d\n", a, c, b, sum);
		//��p�����fp2��
		fputs(p, fp2);
	}

	free(p);
	fclose(fp1);
	fclose(fp2);

	system("pause");
	return 0;
}