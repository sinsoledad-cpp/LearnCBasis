#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void BulleSort01(int *arr, int len);

int main()
{
	
	int arr[4];
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < 4; i++){
		scanf("%d", &arr[i]);
	}
	BulleSort01(arr, len);
	for (int k = 0; k < len; k++){
		printf("%d\t", arr[k]);
	}

	system("pause");
	return EXIT_SUCCESS;
}
//Ñ¡Ôñ
void BulleSort01(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++){
		for (int j = i + 1; j < len; j++){
			if (arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}