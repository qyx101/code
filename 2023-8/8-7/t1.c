#define _CRT_SECURE_NO_WARNINGS
//3. 在一个有序数组中查找具体的某个数字n。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	int mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//			
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == n)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("找到下标%d", mid);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "*********************";
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//}

// 模拟用户登录

//int main()
//{
//	char arr1[10];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("输入密码: ");
//		scanf("%s", arr1);
//		if ((strcmp(arr1, "123abc")) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("fail\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("登陆失败\n");
//	}
//}

// 编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}


// 猜数字
//void menu()
//{
//	printf("**************************\n");
//	printf("******  1. play     ******\n");
//	printf("******  0. exit     ******\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("输入: ");
//		scanf("%d", &input);
//		if (input > ret)
//		{
//			printf("大\n");
//		}
//		else if (input < ret)
//		{
//			printf("小\n");
//		}
//		else
//		{
//			printf("正确\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int n = 0;
//	do
//	{
//		menu();
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;	
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (n);
//}

//int main()
//{
//	int n = 1;
//	int arr[n];
//}


