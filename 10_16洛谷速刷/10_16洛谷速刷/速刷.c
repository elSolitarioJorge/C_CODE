#define _CRT_SECURE_NO_WARNINGS

//P5707 �����2.��12����ѧ�ٵ�

//#include <stdio.h>
//int main()
//{
//	int s, v, h, m;
//	scanf("%d%d", &s, &v);
//	if (s % v == 0)
//	{
//		m = s / v + 10;
//	}
//	else
//	{
//		m = s / v + 1 + 10;
//	}
//	if (m % 60 == 0)
//	{
//		h = m / 60;
//	}
//	else
//	{
//		h = m / 60 + 1;
//	}
//	if (h <= 8)
//	{
//		printf("%02d:%02d", 8 - h, 60 - m % 60);
//	}
//	else
//	{
//		printf("%02d:%02d", 24 + 8 - h, 60 - m % 60);
//	}
//	return 0;
//}

//P5717 �����3.ϰ8�������η���

//#include <stdio.h>
////���x>y,�ͽ�������
//void my_sort(int* x, int* y)
//{
//	if (*x > *y)
//	{
//		int tmp = *x;
//		*x = *y;
//		*y = tmp;
//	}
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	my_sort(&a, &c);
//	my_sort(&a, &b);
//	my_sort(&b, &c);
//	if (a + b <= c)
//	{
//		printf("Not triangle\n");
//	}
//	else
//	{
//		if (a * a + b * b == c * c)
//		{
//			printf("Right triangle\n");
//		}
//		else if (a * a + b * b > c * c)
//		{
//			printf("Acute triangle\n");
//		}
//		else
//		{
//			printf("Obtuse triangle\n");
//		}
//		if (a == b || b == c)
//		{
//			printf("Isosceles triangle\n");
//		}
//		if (a == c)
//		{
//			printf("Equilateral triangle\n");
//		}
//	}
//	return 0;
//}

//P1055 [NOIP2008 �ռ���] ISBN ����

//#include <stdio.h>
//int main()
//{
//	char num[] = "0123456789X";
//	char s[14];
//	int n = 1, sum = 0;
//	scanf("%s", s);
//	for (int i = 0; i < 13; i++)
//	{
//		if (s[i] != '-' && i != 12)
//		{
//			sum += (s[i] - '0') * n++;
//		}
//	}
//	if (s[12] == num[sum % 11])
//	{
//		printf("Right");
//	}
//	else
//	{
//		s[12] = num[sum % 11];
//		printf("%s", s);
//	}
//	return 0;
//}

//P5723 �����4.��13�������ڴ�

//#include <math.h>
//#include <stdio.h>
//int prime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int L;
//	scanf("%d", &L);
//	int sum = 0, count = 0;
//	for (int i = 2; sum + i <= L; i++)
//	{
//		if (prime(i))
//		{
//			count++;
//			sum += i;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//P1217 [USACO1.5] �������� Prime Palindromes

//#include <stdio.h>
//#include <math.h>
//int huiwen(int n)
//{
//	int sum = 0, t = n;
//	while (t)
//	{
//		sum = sum * 10 + t % 10;
//		t /= 10;
//	}
//	if (n == sum)
//	{
//		return 1;
//	}
//	return 0;
//}
//int prime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		if (huiwen(i) && prime(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

// P1075[NOIP2012 �ռ���] �������ֽ�

//#include <stdio.h>
//#include <math.h>
//int prime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (prime(i) && n % i == 0)
//		{
//			printf("%d", n / i);
//			break;
//		}
//	}
//	return 0;
//}

//P5726 �����4.ϰ9�����

//#include <stdio.h>
//#include <stdlib.h>
////qsort��������
//int comp(const void* x,const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
////����ȥ�������ͷֺ��ƽ����
//double average(int a[], int n)
//{
//	double sum = 0.0;
//	for (int i = 1; i < n - 1; i++)
//	{
//		sum += a[i];
//	}
//	return sum / (n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* score = (int*)malloc(n * sizeof(int));
//	//����malloc����ʧ�ܵ����
//	if (score == NULL)
//	{
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	//����
//	qsort(score, n, sizeof(int), comp);
//    printf("%.2lf",	average(score, n));
//	//�ͷ�malloc������ڴ�
//	free(score);
//	return 0;
//}

//P2615 [NOIP2015 �����] ����Ļ÷�

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[40][40] = { 0 };
//	int x = 1, y = n / 2 + 1;
//	for (int i = 1; i <= n * n; i++)
//	{
//		a[x][y] = i;
//		if (x == 1 && y != n)
//		{
//			x = n;
//			y++;
//		}
//		else if (y == n && x != 1)
//		{
//			y = 1;
//			x--;
//		}
//		else if (x == 1 && y == n)
//		{
//			x++;
//		}
//		else if (a[x - 1][y + 1] == 0)
//		{
//			x--;
//			y++;
//		}
//		else
//		{
//			x++;
//		}	
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//P2141 [NOIP2014 �ռ���] ���������

//#include <stdio.h>
//#include <stdlib.h>
//int cmp(const void* x,const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int main()
//{
//	int n, count = 0;
//	int t[100] = { 0 };
//	scanf("%d", &n);
//	int* p = (int*)malloc(n * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	qsort(p, n, sizeof(int), cmp);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				if (p[i] + p[j] == p[k])
//				{
//					t[k] = 1;
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (t[i])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	free(p);
//	return 0;
//}

//P1125 [NOIP2008 �����] ��С��

//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int cmp(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int prime(int n)
//{
//	if (n < 2)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num[26] = { 0 };
//	char word[100];
//	scanf("%s", word);
//	int len = strlen(word);
//	for (int i = 0; i < len; i++)
//	{
//		num[word[i] - 'a']++;
//	}
//	qsort(num, 26, sizeof(int), cmp);
//	for (int i = 0; i < 26; i++)
//	{
//		if (num[i])
//		{
//			int tmp = num[25] - num[i];
//			if (prime(tmp))
//			{
//				printf("Lucky Word\n%d", tmp);
//			}
//			else
//			{
//				printf("No Answer\n0");
//			}
//			break;
//		}
//	}
//	return 0;
//}

//P5461 ����ս��

//#include <stdio.h>
//#include <math.h>
//int m[1025][1025];
//int fun(int a, int b, int c, int d)
//{
//	for (int i = a; i <= (a + c) / 2; i++)
//	{
//		for (int j = b; j <= (b + d) / 2; j++)
//		{
//			m[i][j] = 0;
//		}
//	}
//	if (a == (a + c) / 2)
//	{
//		return 0;
//	}
//	fun((a + c + 1) / 2, b, c, (b + d - 1) / 2);
//	fun(a, (b + d + 1) / 2, (a + c - 1) / 2, d);
//	fun((a + c + 1) / 2, (b + d + 1) / 2, c, d);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int k = pow(2, n);
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= k; j++)
//		{
//			m[i][j] = 1;
//		}
//	}
//	fun(1, 1, k, k);
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 1; j <= k; j++)
//		{
//			printf("%d ", m[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

 