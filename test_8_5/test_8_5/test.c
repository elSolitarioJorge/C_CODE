#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////дһ���������Խ����������ͱ���������
////�β� - ��ʽ����
////void Swap1(int x, int y)
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ��ܸı�ʵ��
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
//	printf("����ǰ:>a=%d b=%d\n", a, b);
//	//ʵ�� - ʵ�ʲ���
//	//Swap1(a, b);
//	Swap2(&a, &b);
//	printf("������:>a=%d b=%d\n", a, b);
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
//	printf("����ǰ:>a=%d b=%d\n", a, b);
//	//ʵ�� - ʵ�ʲ���
//	Swap1(a, b);//��ֵ����
//	Swap2(&a, &b);//��ַ����
//	printf("������:>a=%d b=%d\n", a, b);
//	return 0;
//}

//��ӡ100-200֮�������
// 
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2-��i-1��֮�������ȥ�Գ�i
//		int j = 0;
//		int flag = 1;//flag��1����ʾ������
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
//�Ż�
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)//sqrt -- ��ƽ�� ͷ�ļ�<math.h>
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
////дһ�����������ж�һ�����ǲ�������
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)//sqrt -- ��ƽ�� ͷ�ļ�<math.h>
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
//дһ�������ж�һ���ǲ������꣬��ӡ1000-2000��֮�������
//�����жϹ���:1.�ܱ�4���������Ҳ��ܱ�100����������/2.�ܱ�400����������
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

//дһ�������ж�һ���ǲ�������
//�����귵��1
//�������귵��0
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

////дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[],int k,int sz)//�βκ�ʵ�����ֿ�����ͬ��Ҳ���Բ�ͬ
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	return -1;//�Ҳ���
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˷����±꣬�Ҳ�������-1
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
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
//	////��ʽ����
//	//printf("%d\n", strlen("abcdef"));
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf�ķ���ֵ�Ǵ�ӡ�ַ�������
//	return 0;
//}

////�����������Ͷ���
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

////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
////%d  ��ӡ�з��ŵ�����������������
////%u  ��ӡ�޷��ŵ�����
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

//���ַ������ȣ�ģ��ʵ��strlen
//int my_strlen(char* str)
//{
//	int count = 0;//��ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
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

//��д��������������ʱ���������ַ�������
//�ݹ����
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

//��n�Ľ׳�
// 
// �ݹ�ķ�ʽ
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	if (n > 1)
//		return n * fac(n - 1);
//}
//�����ķ�ʽ--�ǵݹ�
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
 
//���n��쳲�������
//쳲���������
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

 

















































































































































