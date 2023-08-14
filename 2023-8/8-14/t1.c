#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �ַ�������
//void reverse_string(char* string)
//{
//	int left = 0;
//	int right = strlen(string) - 1;
//	while (left < right)
//	{
//		char tmp = string[left];
//		string[left] = string[right];
//		string[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//}

//int main()
//{
//	int arrA[] = { 1,2,3 };
//	int arrB[] = { 3,2,1 };
//	int tmp[3];
//	for (int i = 0; i < 3; i++)
//	{
//		tmp[i] = arrA[i];
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		arrA[i] = arrB[i];
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		arrB[i] = tmp[i];
//	}
//}