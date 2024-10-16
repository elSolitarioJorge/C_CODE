#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int count = 0, m = 0;
//	char str[81], ch[81];
//	scanf("%[^\n]", str);
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			ch[m++] = str[i];
//			count++;
//		}
//	}
//	if (count)
//	{
//		for (int i = 0; i < count; i++)
//		{
//			int t = 1;
//			for (int j = 0; j < i; j++)
//			{
//				if (ch[i] == ch[j])
//				{
//					t = 0;
//				}
//			}
//			if (t)
//			{
//				printf("%c", ch[i]);
//			}
//		}
//	}
//	else
//	{
//		printf("Not Found");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
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
//	int n, k;
//	int sum = 0;
//	scanf("%d%d", &n, &k);
//	if (n % 2 == 0)
//	{
//		for (int i = n - 1; k > 0&&i>1; i -= 2)
//		{
//			if (prime(i) && --k)
//			{
//				sum += i;
//				printf("%d+", i);
//			}
//			if (k == 0)
//			{
//				sum += i;
//				printf("%d=%d", i, sum);
//			}
//		}
//	}
//	else
//	{
//		for (int i = n; k > 0&&i>1; i -= 2)
//		{
//			if (prime(i) && --k)
//			{
//				sum += i;
//				printf("%d+", i);
//			}
//			if (k == 0)
//			{
//				sum += i;
//				printf("%d=%d", i, sum);
//			}
//		}
//	}
//	return 0;
//}
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//int cmp(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int main()
//{
//	int m, n;
//	int count = 0;
//	scanf("%d", &m);
//	int* a = (int*)malloc(m * sizeof(int));
//	if (a == NULL) {
//		return 0;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	qsort(a, m, sizeof(int), cmp);
//	scanf("%d", &n);
//	int* b = (int*)malloc(n * sizeof(int));
//	if (b == NULL) {
//		free(a);
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	qsort(b, n, sizeof(int), cmp);
//	int s = (m > n) ? m : n;
//	int* c = (int*)malloc(s * sizeof(int));
//	if (c == NULL) {
//		free(a);
//		free(b);
//		return 0;
//	}
//	int t = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i] == b[j])
//			{
//				c[t++] = a[i];
//				count++;
//			}
//		}
//	}
//	for (int i = 0; i < count; i++)
//	{
//		if (i == 0 || c[i] != c[i - 1])
//		{
//			printf("%d ", c[i]);
//		}
//	}
//	free(a);
//	free(b);
//	free(c);
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//int main() 
//{
//	char str[10000];
//	scanf("%s", str);
//	int len = strlen(str);
//	int num[4] = { 0 };
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] == 'g' || str[i] == 'G')
//		{
//			num[0]++;
//		}
//		else if (str[i] == 'p' || str[i] == 'P')
//		{
//			num[1]++;
//		}
//		else if (str[i] == 'l' || str[i] == 'L')
//		{
//			num[2]++;
//		}
//		else if (str[i] == 't' || str[i] == 'T')
//		{
//			num[3]++;
//		}
//	}
//	int max = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (num[i] > max)
//		{
//			max = num[i];
//		}
//	}
//	for (int i = 0; i < max; i++)
//	{
//		if (num[0])
//		{
//			printf("G");
//			num[0]--;
//		}	
//		if (num[1])
//		{
//			printf("P");
//			num[1]--;
//		}
//		if (num[2])
//		{
//			printf("L");
//			num[2]--;
//		}
//		if (num[3])
//		{
//			printf("T");
//			num[3]--;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
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
//	int n, k;
//	int sum = 0;
//	scanf("%d%d", &n, &k);
//	if (n % 2 == 0)
//	{
//		for (int i = n - 1; k > 0; i -= 2)
//		{
//			if (k > 1)
//			{
//				if (prime(i))
//				{
//					sum += i;
//					printf("%d+", i);
//					k--;
//				}
//			}
//			else
//			{
//				if (prime(i))
//				{
//					sum += i;
//					printf("%d=%d", i, sum);
//					k--;
//				}
//			}
//		}
//	}
//	else
//	{
//		for (int i = n; k > 0; i -= 2)
//		{
//			if (k > 1)
//			{
//				if (prime(i))
//				{
//					sum += i;
//					printf("%d+", i);
//					k--;
//				}
//			}
//			else
//			{
//				if (prime(i))
//				{
//					sum += i;
//					printf("%d=%d", i, sum);
//					k--;
//				}
//			}
//		}
// 
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[31];
//	int tmp = n;
//	int i = 0;
//	while (tmp)
//	{
//		a[++i] = tmp % 8;
//		tmp /= 8;
//	}
//	while (i)
//	{
//		printf("%d", a[i--]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int cmp(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* a = (int*)malloc(n * sizeof(int));
//	if (a == NULL) {
//		return 0;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	qsort(a, n, sizeof(int), cmp);
//
//
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <math.h>
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
//	int n, k;
//	int sum = 0;
//	scanf("%d%d", &n, &k);
//	for (int i = n; k > 0 && i > 1; i--)
//	{
//
//	}
//	return 0;
//}




