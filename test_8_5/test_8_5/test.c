#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////写一个函数可以交换两个整型变量的内容
////形参 - 形式参数
////void Swap1(int x, int y)
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不能改变实参
//void Swap2(int* x, int* y)
//{
//	int z = 0;
//	z = *x;//z=a
//	*x = *y;//a=b
//	*y = z;//b=z
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	printf("交换前:>a=%d b=%d\n", a, b);
//	//实参 - 实际参数
//	//Swap1(a, b);
//	Swap2(&a, &b);
//	printf("交换后:>a=%d b=%d\n", a, b);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void Swap2(int* x, int* y)
//{
//	int z = 0;
//	z = *x;//z=a
//	*x = *y;//a=b
//	*y = z;//b=z
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:>a=%d b=%d\n", a, b);
//	//实参 - 实际参数
//	Swap1(a, b);//传值调用
//	Swap2(&a, &b);//传址调用
//	printf("交换后:>a=%d b=%d\n", a, b);
//	return 0;
//}

//打印100-200之间的素数
// 
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//是素数就打印
//		//用2-（i-1）之间的数字去试除i
//		int j = 0;
//		int flag = 1;//flag是1，表示是素数
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
//优化
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)//sqrt -- 开平方 头文件<math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//
////写一个函数可以判断一个数是不是素数
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)//sqrt -- 开平方 头文件<math.h>
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//写一个函数判断一年是不是闰年，打印1000-2000年之间的闰年
//闰年判断规则:1.能被4整除，并且不能被100整除是闰年/2.能被400整除是闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//	    }
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//写一个函数判断一年是不是闰年
//是闰年返回1
//不是闰年返回0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

////写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int arr[],int k,int sz)//形参和实参名字可以相同，也可以不同
//{
//	int left = 0;
//	int right =sz - 1;
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;//找不到
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标，找不到返回-1
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将 num 的值增加1
//
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	Add(&num);
//	printf("%d\n", num);//4
//	return 0;
//}
//
//int Add(int n)
//{
//	//return n + 1;
//	return ++n;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);//1
//	num = Add(num);
//	printf("%d\n", num);//2
//	num = Add(num);
//	printf("%d\n", num);//3
//	num = Add(num);
//	printf("%d\n", num);//4
//	return 0;
//}

//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	////链式访问
//	//printf("%d\n", strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf的返回值是打印字符的数量
//	return 0;
//}

////函数的声明和定义
//#include "add.h"
//#include "sub.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//30 40
//	int sum = Add(a, b);
//	printf("%d\n", sum);//70
//	//int ret = Sub(a, b);
//	//printf("%d\n", ret);//-10
//	return 0;
//}

////接受一个整型值（无符号），按照顺序打印它的每一位
////%d  打印有符号的整数（会有正负）
////%u  打印无符号的整数
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//1 2 3 4
//	return 0;
//}

//求字符串长度，模拟实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;//临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串长度
//递归求解
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//求n的阶乘
// 
// 递归的方式
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	if (n > 1)
//		return n * fac(n - 1);
//}
//迭代的方式--非递归
//int fac(n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
 
//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 ....... 
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}

 

















































































































































