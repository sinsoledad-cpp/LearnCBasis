#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main1001()
{
	//�ı��ļ���txt��β���������ļ���bat��β��p�����ļ���
	//��windows�������ı��ļ�������\r\n��β�ģ��ڶ�ȡ�ļ���ʱ��ϵͳ���"\r\n"ת����\n
	//����д��wb��Ϊ��ʹ�ļ����ֻ��е�ʱ�򲻻����
	//����b�ͻ����\r\n�����ַ�
	FILE* fp = fopen("D:/c.txt", "wb");
	if (!fp)
	{
		printf("�ļ���ʧ��");
		return -1;
	}
	//int a = 5678;

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };



	fwrite(arr, sizeof(int), 10, fp);

	fclose(fp);


	system("pause");
	return 0;
}
int main1002()
{
	FILE* fp = fopen("D:/c.txt", "rb");
	if (!fp)
	{
		return -1;
	}
	/*int value;
	fread(&value, sizeof(int), 1, fp);
	printf("%d", value);*/
	
	int arr[10] = { 0 };
	fread(arr, 4, 10, fp);

	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}

	fclose(fp);

	return 0;
}