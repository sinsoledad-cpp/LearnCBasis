////宏定义常量
//#define PI 3.1415
//#include<stdio.h>
//#include<stdlib.h>
////int
//int main0301(void)
//{
//	//常量 只读变量
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
//	//在定义局部变量可以在数据类型前加修饰auto 也可以不加
//	float r = 3.4;
//
//	float s = pi*r*r;
//	float l = 2 * pi*r;
//
//	//占位符 &f 表示输出应该浮点型 float 默认保留六位小数 会四舍五入
//
//	printf("%.2f\n", s);
//	printf("%.2f\n", l);
//	getchar();
//	return 0;
//}
////u
//int main0303()
//{
//	//无符号 unsigned 有符号 signed(可以省略)
//	unsigned int a = -10;
//	//%u 占位符 表示输出一个无符号十进制整形数据
//	printf("%u\n", a);
//	printf("%d\n", a);
//	getchar();
//	return 0;
//}
////2 8 16
//int main0304()
//{
//	//定义八进制数据 以0开头
//	int	b = 0123;
//	
//	//定义十六进制数据时 以0x开头
//	int c = 0x123;
//	//在计算机定义数据时 不可以直接定义二进制
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
////整形
//int main0305()
//{
//	//整形变量
//	int a = 10;
//	//短整型变量
//	short b = 20;
//	//长整型变量
//	long c = 30;
//	//长长整形变量
//	long long d = 40;
//	//整形   4
//	printf("%d\n", a);
//	//短整型	2
//	printf("%hd\n", b);
//	//长整型	4
//	printf("%ld\n", c);
//	//长长整形	8
//	printf("%lld\n", d); 
//
//	getchar();
//	return 0;
//}
////浮点型
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