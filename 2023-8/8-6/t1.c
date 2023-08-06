#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int max,min,mid;
//	scanf("%d %d %d", &max, &mid,&min);
//	// 找出最大
//	if (max > mid && max > min)
//	{	
//		int tmp;
//		if (mid < min)
//		{
//			tmp = mid;
//			mid = min;
//			min = mid;
//		}
//	}
//	else if (mid > max && mid > min)
//	{
//		int tmp = max;
//		max = mid;
//		mid = tmp;
//		if (mid < min)
//		{
//			tmp = mid;
//			mid = min;
//			min = mid;
//		}
//	}
//	else
//	{
//		int tmp = max;
//		max = min;
//		min = tmp;
//		if (mid < min)
//		{
//			tmp = mid;
//			mid = min;
//			min = mid;
//		}
//	}
//	printf("%d %d %d", max, mid, min);
//
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//
//#include <stdio.h>
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


//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2;  j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//}


//int main()
//{
//	int a, b, i,n;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	for (i = 1; i <= min; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			n = i;
//		}
//	}
//	printf("%d\n", i-1);
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ", i, j, i * j);
//		}
//		printf("\n");
//
//	}
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//}


//int main()
//{
//	int i = 0;
//	int res = 0;
//	int sign = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		res += 1 / i * sign;
//		sign *= -1;
//	}
//	printf("%d", res);
//}

//int main()
//{
//	int n = 5;
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//}

// 1! * 2! * 3!
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//}




