#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void my_strcpy(char*dest, char*ch);
void my_strncpy(char*dest, const char*src, size_t n);
int main()
{
	char ch[] = "hello world";
	char dest[100];
	//my_strcpy(dest, ch);
	//strcpy(dest, ch);
	my_strncpy(dest,ch,5);
	printf("%s\n", dest);
	printf("===%s===\n",dest);
	puts(dest);
	getchar();
	getchar();
	return 0;
}
void my_strcpy01(char*dest, char*ch)
{

	int i = 0;
	while (ch[i]){
		dest[i] = ch[i];
		i++;
	}
	dest[i] = 0;
}
void my_strcpy02(char*dest, char*ch)
{
	int i = 0;
	while (*(ch + i)){
		*(dest + i) = *(ch + i);
		i++;
	}
	*(dest+i) = 0;
}
void my_strcpy03(char*dest, char*ch)
{
	while (*ch){
		*dest = *ch;
		dest++;
		ch++;
	}
	*dest++ = 0;
}
void my_strcpy04(char*dest, char*ch)
{
	while (*dest++ = *ch++);
	
}

void my_strncpy(char*dest, const char*src, size_t n)
{
	while ((*dest++ = *src++) && --n);
	*dest = 0;
}
void my_strncpy02(char*dest, const char*src, size_t n)
{
	int i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
}
void my_strncpy03(char*dest, const char*src, size_t n)
{
	while (n--&&*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}