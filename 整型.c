////�궨�峣��
//#define PI 3.1415
//#include<stdio.h>
//#include<stdlib.h>
////int
//int main0301(void)
//{
//	//���� ֻ������
//	const int price = 3;
//	int weight = 5;
//	int sum = price*weight;
//	printf("%d\n", sum);
//	return 0;
//}
////float
//int main0302(void)
//{
//	const float pi = 3.1415;
//	//�ڶ���ֲ�������������������ǰ������auto Ҳ���Բ���
//	float r = 3.4;
//
//	float s = pi*r*r;
//	float l = 2 * pi*r;
//
//	//ռλ�� &f ��ʾ���Ӧ�ø����� float Ĭ�ϱ�����λС�� ����������
//
//	printf("%.2f\n", s);
//	printf("%.2f\n", l);
//	getchar();
//	return 0;
//}
////u
//int main0303()
//{
//	//�޷��� unsigned �з��� signed(����ʡ��)
//	unsigned int a = -10;
//	//%u ռλ�� ��ʾ���һ���޷���ʮ������������
//	printf("%u\n", a);
//	printf("%d\n", a);
//	getchar();
//	return 0;
//}
////2 8 16
//int main0304()
//{
//	//����˽������� ��0��ͷ
//	int	b = 0123;
//	
//	//����ʮ����������ʱ ��0x��ͷ
//	int c = 0x123;
//	//�ڼ������������ʱ ������ֱ�Ӷ��������
//	printf("%d\n", b);
//	printf("%o\n", b);
//	printf("%x\n", b);
//
//	printf("%d\n", c);
//	printf("%o\n", c);
//	printf("%x\n", c);
//
//	getchar();
//
//	return 0;
//}
//
////����
//int main0305()
//{
//	//���α���
//	int a = 10;
//	//�����ͱ���
//	short b = 20;
//	//�����ͱ���
//	long c = 30;
//	//�������α���
//	long long d = 40;
//	//����   4
//	printf("%d\n", a);
//	//������	2
//	printf("%hd\n", b);
//	//������	4
//	printf("%ld\n", c);
//	//��������	8
//	printf("%lld\n", d); 
//
//	getchar();
//	return 0;
//}
////������
//int main0306()
//{
//	float a = 3.14;
//	double b = 3.14;
//	printf("%.2f\n", a);
//	printf("%lf\n", b);
//
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return EXIT_SUCCESS;
//}