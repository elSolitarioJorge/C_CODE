#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)//这里不是判断，而是赋值
//			printf("%d ", i);
//	}//无限循环打印5
//	return 0;
//}

//写代码将三个整数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int z = 0;
//	if (a < b)
//	{
//		z = a;
//		a = b;
//		b = z;
//	}
//	if (a < c)
//	{
//		z = a;
//		a = c;
//		c = z;
//	}
//	if (b < c)
//	{
//		z = b;
//		b = c;
//		c = z;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
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
//	printf("\n");
//	int n = 0;
//	for (n = 3; n <= 100; n += 3)
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a < b) ? a : b;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			printf("%d ", m);
//			break;
//		}
//		m--;
//	}
//	return 0;
//}
//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int z = 0;
//	scanf("%d %d", &a, &b);	
//	while (z = a % b)
//	{
//		a = b;
//		b = z;
//	}
//	printf("%d ", b);
//	return 0;
//}

//编写程序数一下1-100的所有整数中出现多少个数字9
//9 19 29 39 49 59 69 79 89 99
//90 91 92 93 94 95 96 97 98 99
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//个位上有9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//十位上有9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4......+1/99-1/100的值，并打印出结果
//int main()
//{
//	int i = 0;
//	int n = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + n * (1.0 / i);
//		n = -n;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求十个整数的最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int max = arr[0];
//	int n = 0;
//	for (n = 1; n < 10; n++)
//	{
//		if (max < arr[n])
//		{
//			max = arr[n];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}











