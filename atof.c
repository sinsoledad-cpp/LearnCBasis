#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[] = "       -123.456-456abc123";
	//atof()��ɨ������ַ���������ǰ��Ŀո��ַ���
	//ֱ���������ֻ��������Ųſ�ʼ��ת���������ϸ��ո�ʽҪ�����жϣ�
	//ֱ����ʽΥ��������ַ���������־��\0���Ż����ת��������һ��double���͵����ݡ�
	double i = atof(ch);
	printf("%.2f\n",i);

	int j = atoi(ch);
	printf("%d\n", j);

	long k = atol(ch);
	printf("%ld\n", k);

	system("pause");
	return EXIT_SUCCESS;
}
