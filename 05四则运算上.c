#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
enum opt
{
	add, sub, mlt, dive
};
int main0501()
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/四则运算上.txt", "w");
	if (!fp)
		return -1;

	int a, b;
	char c;//+ - * /
	char* p = (char*)malloc(sizeof(char) * 20);

	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		switch (rand()%4)
		{
		case add:
			c = '+';
			break;
		case sub:
			c = '-';
			break;
		case mlt:
			c = '*';
			break;
		case dive:
			c = '/';
			break;
		}
		memset(p, 0, 20);
		sprintf(p, "%d%c%d=\n", a, c, b);
		fputs(p, fp);
	}
	free(p);
	fclose(fp);
	//p = NULL;
	//fp = NULL;

	system("pause");
	return 0;
}