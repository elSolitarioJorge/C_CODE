#define _CRT_SECURE_NO_WARNINGS

//__client_id=  dfaa08b1d8f12e5f670fa8ce5075fac23905cb1e
// _uid=1073049

//测试

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//小鱼比可爱

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		int count = 0;
//		scanf("%d", &arr[i]);
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				count++;
//			}
//		}
//		printf("%d ", count);
//	}
//	return 0;
//}

//车厢重组

//#include <stdio.h>
//int main()
//{
//	int n, count = 0;
//	scanf("%d", &n);
//	int arr[10000];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				count++;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//数字统计

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		int t = i;
//		while (t > 0)
//		{
//			if (t % 10 == 2)
//			{
//				count++;
//			}
//			t /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//扫雷游戏

//#include <stdio.h>
//int main()
//{
//	int n, m;
//	char str[102][102] = { 0 };
//	char s[102][102] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%c", &str[i][j]);
//		}
//		char t = getchar();
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			printf("%c", str[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int count = 0;
//			if (str[i][j] == '*')
//			{
//				s[i][j] = '*';
//			}
//			else if (str[i][j] == '?')
//			{
//				if (str[i - 1][j - 1] == '*')
//				{
//					count++;
//				}
//				if (str[i - 1][j] == '*')
//				{
//					count++;
//				}
//				if (str[i - 1][j + 1] == '*')
//				{
//					count++;
//				}
//				if (str[i][j - 1] == '*')
//				{
//					count++;
//				}
//				if (str[i][j + 1] == '*')
//				{
//					count++;
//				}
//				if (str[i + 1][j - 1] == '*')
//				{
//					count++;
//				}
//				if (str[i + 1][j] == '*')
//				{
//					count++;
//				}
//				if (str[i + 1][j + 1] == '*')
//				{
//					count++;
//				}
//				s[i][j] = count + '0';
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%c", s[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//统计天数

//#include <stdio.h>
//#include <stdlib.h>
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
//	int max = 1, i = 0, count = 0;
//	while (i < n)
//	{
//		if (i == 0 || a[i] <= a[i - 1])
//		{
//			count = 1;
//		}
//		else
//		{
//			count++;
//		}
//		if (count > max)
//		{
//			max = count;
//		}
//		i++;
//	}
//	printf("%d", max);
//	free(a);
//	return 0;
//}

//A+B Problem（高精）

//#include <stdio.h>
//typedef struct {
//	char num[505];
//	int len;
//}hugeint;
//hugeint strtoint(hugeint n)
//{
//	hugeint ans = { {0},0 };
//	for (int i = 0; i < n.len; i++)
//	{
//		ans.num[ans.len++] = n.num[i];
//	}
//	return n;
//}
//void printfint(hugeint n)
//{
//	for (int i = n.len - 1; i >= 0; i--)
//	{
//		printf("%c", n.num[i]);
//	}
//	printf("\n");
//}
//hugeint add(hugeint a, hugeint b)
//{
//	hugeint ans = { {0},0 };
//	ans.len = (a.len > b.len) ? a.len : b.len;
//	for (int i = 0; i < ans.len; i++)
//	{
//		ans.num[i] += a.num[i] + b.num[i];
//		if (ans.num[i] > 10)
//		{
//			ans.num[i + 1] = 1;
//			ans.num[i] %= 10;
//		}
//		if (ans.num[ans.len])
//		{
//			ans.len++;
//		}
//	}
//	return ans;
//}
//int main()
//{
//	hugeint a, b;
//	scanf("%s %s", a.num, b.num);
//	a.len = strlen(a.num);
//	b.len = strlen(b.num);
//	hugeint m = strtoint(a);
//	hugeint n = strtoint(b);
//
//	printfint(m);
//	printfint(n);
//	printfint(a);
//	printfint(b);
//	return 0;
//}

//猴子吃桃

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 1;
//	for (int i = 1; i < n; i++)
//	{
//		count = (count + 1) * 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//笨小猴

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
//	char word[100];
//	int num[26] = { 0 };
//	scanf("%s", word);
//	for (int i = 0; i < strlen(word); i++)
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


