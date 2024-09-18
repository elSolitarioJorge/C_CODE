#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int arr[40000] = { 0 };
//int main(void)
//{
//	int n, m, sum = 0;
//	scanf("%d", &n);
//	for(int y=0;sum != n * n;y++)
//	{
//		scanf("%d", &m);
//		if (y % 2 == 0)
//		{
//			for (int i = sum; i < sum + m; i++)
//			{
//				arr[i] = 0;
//			}
//		}
//		else
//		{
//			for (int i = sum; i < sum + m; i++)
//			{
//				arr[i] = 1;
//			}
//		}
//		sum += m;
//	}
//	int count = 0;
//	for (int i = 0; i < n * n; i++)
//	{
//		printf("%d", arr[i]);
//		count++;
//		if (count % n == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//char ch1[40000] = { 0 }, ch2[200] = { 0 };
//int main(void)
//{
//	int n, j, k;
//	scanf("%s", ch2);
//	n = strlen(ch2);
//	for (k = 0; k < n; k++)
//	{
//		ch1[k] = ch2[k];
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		scanf("%s", ch2);
//		for (j = k; j < k + n; j++, k++)
//		{
//			ch1[k] = ch2[k];
//		}
//	}
//	printf("%d ", n);
//	int count = 0;
//	char ch = '0';
//	for (int i = 0; i < n * n; i++)
//	{
//		if (ch1[i] == ch)
//		{
//			count++;
//		}
//		else
//		{
//			ch = ch1[i];
//			printf("%d ", count);
//			count = 1;
//		}
//	}
//	return 0;
//}

 






























