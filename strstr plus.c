#define _crt_secure_no_warnings
#include<stdio.h>
#include<stdlib.h>
char*my_strstr(char*src, char*dest);
int main()
{
	char src[] = "11abcd2222abcd999abcdifwemoidabcdjojojabcd4345565";
	char dest[] = "abcd";
	char *p = my_strstr(src, dest);
	//char *p = strstr(src, dest);
	printf("%s\n", p);
	int count = 0;
	/*while (p)
	{
		count++;
		p += strlen(dest);
		p = my_strstr(p, dest);
		printf("%s\n", p);

	}*/

	do{
		if (p){
			count++;
		}
		p += strlen(dest);
		p = my_strstr(p, dest);
	} while (p);
	printf("%d", count);
	getchar();
	getchar();
	return 0;
}
char*my_strstr(char*src, char*dest)
{
	char*fsrc = src;
	char*rsrc = src;
	char*tdest = dest;
	while (*fsrc)
	{
		rsrc = fsrc;
		while (*fsrc == *tdest&&*fsrc != 0)
		{
			fsrc++;
			tdest++;
		}
		if (*tdest == 0)
		{
			return rsrc;
		}
		tdest = dest;
		fsrc = rsrc;
		fsrc++;
	}
	return NULL;
}