 #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int symm(char*ch);

int main()
{
	char ch[] = "abcba";
	int value=symm(ch);
	if (!value){
		printf("%s\n", ch);
	}
	else{
		printf("No\n");
	}
	getchar();
	getchar();
	return EXIT_SUCCESS;
}
int symm(char*ch)
{
	char*ftemp = ch;
	char*btemp = ch + strlen(ch) - 1;
	while (ftemp < btemp)
	{
		if (*ftemp != *btemp){
			return 1;
		}
		ftemp++;
		btemp--;
	}
	return 0;
}