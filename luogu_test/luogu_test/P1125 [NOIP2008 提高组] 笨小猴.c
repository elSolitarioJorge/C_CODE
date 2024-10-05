#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int prime(int);
//int main()
//{
//	int maxn = 0, minn = 100;
//	char word[100];
//	int arr[26] = { 0 };
//	scanf("%s", word);
//	for (int i = 0; word[i] != '\0'; i++)
//	{
//		arr[word[i] - 'a']++;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (arr[i] > maxn)
//		{
//			maxn = arr[i];
//		}
//		if (arr[i] != 0 && arr[i] < minn)
//		{
//			minn = arr[i];
//		}
//	}
//	if (prime(maxn - minn))
//	{
//		printf("Lucky Word\n%d", maxn - minn);
//	}
//	else
//	{
//		printf("No Answer\n0");
//	}
//	return 0;
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