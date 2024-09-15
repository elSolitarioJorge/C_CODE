#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <math.h>
//int hw(int n);
//int prime(int n);
//int main(void)
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a % 2 != 0)
//	{
//		for (int i = a; i <= b; i += 2)
//		{
//			if (hw(i) && prime(i))
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	else
//	{
//		for (int i = a + 1; i <= b; i += 2)
//		{
//			if (hw(i) && prime(i))
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}
//int hw(int n)
//{
//	int sum = 0;
//	int k = n;
//	while (n != 0)
//	{
//		sum = sum * 10 + n % 10;
//		n /= 10;
//	}
//	if (sum == k)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int prime(int n)
//{
//	for (int j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

//#include <stdio.h>
//int main(void)
//{
//	float s, sum=0.0f;
//	int n = 0;
//	scanf("%f", &s);
//	for (float a = 2.0f; sum < s; a *= 0.98)
//	{
//		sum += a;
//		n++;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int fz(int n);
//int main(void)
//{
//	int N;
//	scanf("%d", &N);
//	if (N >= 0)
//	{
//		printf("%d", fz(N));
//	}
//	else
//	{
//		printf("%d", -fz(-N));
//	}
//	return 0;
//}
//int fz(int n)
//{
//	int sum = 0;
//	while (n != 0)
//	{
//		sum = sum * 10 + n % 10;
//		n /= 10;
//	}
//	return sum;
//}

//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%.2lf", (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
//	return 0;
//}

//#include <stdio.h>
//double Fn(int n);
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%.2lf", Fn(n));
//	return 0;
//}
//double Fn(int n)
//{
//	double f[50];
//	f[0] = 0, f[1] = 1, f[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	return f[n];
//}





















