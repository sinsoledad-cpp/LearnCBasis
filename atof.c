#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch[] = "       -123.456-456abc123";
	//atof()会扫描参数字符串，跳过前面的空格字符，
	//直到遇上数字或正负符号才开始做转换，而后严格按照格式要求来判断，
	//直到格式违规或遇到字符串结束标志‘\0’才会结束转换，返回一个double类型的数据。
	double i = atof(ch);
	printf("%.2f\n",i);

	int j = atoi(ch);
	printf("%d\n", j);

	long k = atol(ch);
	printf("%ld\n", k);

	system("pause");
	return EXIT_SUCCESS;
}
