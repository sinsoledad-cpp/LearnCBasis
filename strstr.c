//#define _crt_secure_no_warnings
//#include<stdio.h>
//char*my_strstr(char*src, char*dest);
//int main()
//{
//	char src[] = "hello world";
//	char dest[] = "llo";
//	//char *p = my_strstr(src, dest);
//	char *p = strstr(src, dest);
//	printf("%s", p);
//	getchar();
//	getchar();
//	return 0;
//}
//char*my_strstr(char*src, char*dest)
//{
//	char*fsrc = src;
//	char*rsrc = src;
//	char*tdest = dest;
//	while (*fsrc)
//	{
//		rsrc = fsrc;
//		while (*fsrc == *tdest&&*fsrc!=0)
//		{
//			fsrc++;
//			tdest++;
//		}
//		if (*tdest == 0)
//		{
//			return rsrc;
//		}
//		tdest = dest;
//		fsrc = rsrc;
//		fsrc++;
//	}
//	return NULL;
//}