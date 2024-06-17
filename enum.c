#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
enum kill
{
	run, attack, frozen
};

int main()
{
	while (1)
	{
		int value;
		scanf("%d", &value);
		switch (value)
		{
		case run:
			printf("run");
			break;
		case attack:
			printf("attack");
			break;
		case frozen:
			printf("frozen");
			break;
		default:
			break;
		}
	}

	system("pause");
	return EXIT_SUCCESS;
}
