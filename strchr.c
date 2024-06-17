
#include<stdio.h>
#include<stdlib.h>
char *my_strchr(char*str, char ch);
int main()
{
	char str[] = "hello world";
	//char*p = strchr(str, 'l');
	char*p = my_strchr(str, 'l');
	if (p == NULL)
	{
		printf("Œ¥’“µΩ\n");
	}
	else
	{
		printf("%s\n", p);
	}

	getchar();
	getchar();
	return EXIT_SUCCESS;
}
char *my_strchr(char*str, char ch)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			return &str[i];
		}
		i++;
	}
	return NULL;
}