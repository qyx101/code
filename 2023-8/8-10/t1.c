#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
////int Fun(int n)
////{
////    if (n == 5)
////        return 2;
////    else
////        return 2 * Fun(n + 1);
////}
////
////
////int main()
////{
////    int ret = Fun(2);
////}
//
////void print(int n)
////{
////	if (n > 9)
////	{
////		print(n / 10);
////	}
////	printf("%d ", n % 10);
////}
////
////
////int main()
////{
////	int n = 1234;
////	print(n);
////}
//
//int fac1(int n)
//{
//	if (n > 0)
//	{
//		return n * fac1(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int fac2(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 5;
//	printf("%d\n", fac1(n));
//	printf("%d\n", fac2(n));
//}

//int my_strlen1(char* ps)
//{
//	if (*ps != '\0')
//	{
//		return 1 + my_strlen1(1 + ps);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int my_strlen2(char* ps)
//{	
//	int count = 0;
//	while (*ps != '\0')
//	{
//		count++;
//		ps++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//}


//void reverse_string(char* string)
//{
//	// fedcba
//}
//int main()
//{
//	char arr[] = "abcdef"; 
//	reverse_string(arr);
//
//}
//int sum = 0;
//int DigitSum(n)
//{
//	if (n > 9)
//	{
//		DigitSum(n / 10);
//	}
//	return sum += (n % 10);	
//}
//
//int main()
//{
//	printf("%d", DigitSum(1729));
//}

// 编写一个函数实现n的k次方，使用递归实现。
//int func(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * func(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 2;
//	int k = 3;
//	printf("%d\n", func(2, 3));
//
//}

// 递归和非递归分别实现求第n个斐波那契数


/*
递归方式：
对于字符串“abcdefg”，递归实现的大概原理：
  1. 交换a和g，
  2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
*/
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef"; 
//	reverse_string(arr);
//
//}

//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	printf("%d %d", sizeof(acX), sizeof(acY));
//}

//void init(int* pa,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*pa = 0;
//		pa++;
//	}
//}
//void print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *pa);
//		pa++;
//	}
//	printf("\n");
//}
//void reverse(int* pa, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = pa[left];
//		pa[left] = pa[right];
//		pa[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr,sz);
//	reverse(arr, sz);
//	print(arr, sz);
//}

//void print(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *pa);
//		pa++;
//	}
//	printf("\n");
//}
//
//void sort(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (pa[j] < pa[j + 1])
//			{
//				int tmp = pa[j];
//				pa[j] = pa[j + 1];
//				pa[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	print(arr, sz);
//}

