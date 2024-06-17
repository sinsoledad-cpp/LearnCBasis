#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void my_strcat(char*ch1, char*ch2);
void my_strncat(char*ch1, char*src,size_t n);
int main()
{
	char ch1[100]="hello";
	char ch2[] = "world";
	//strcat(ch1, ch2);
	//my_strcat(ch1, ch2);
	my_strncat(ch1, ch2, 2);
	printf("%s\n", ch1);
	puts(ch1);
	getchar();
	getchar();
	return 0;
}
void my_strcat01(char*ch1, char*ch2)
{
	int i = 0;
	while(ch1[i]) {
		i++;
	}
	int j = 0;
	while (ch2[j]){
		ch1[i + j] = ch2[j];
		j++;
	}

}
void my_strcat02(char*ch1, char*ch2)
{
	int i = 0;
	while (*(ch1 + i)){
		i++;
	}
	int j = 0;
	while (*(ch2 + j)){
		*(ch1 + i + j) = *(ch2 + j);
		j++;
	}

}
void my_strcat03(char*ch1, char*ch2)
{
	while (*ch1)ch1++;
	while (*ch2){
		*ch1 = *ch2;
		ch1++;
		ch2++;
	}

}
void my_strcat04(char*ch1, char*ch2)
{
	while (*ch1)ch1++;
	while (*ch1++ = *ch2++);
}
void my_strcat05(char*ch1, char*ch2)
{
	while (*ch1++);
	while (*ch1++ = *ch2++);
}
void my_strncat(char*ch1, char*src, size_t n)
{
	while (*ch1)ch1++;
	while ((*ch1++=*src++)&&--n);
	*ch1 = 0;
}