#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main(void)
//{
//	int n, count = 0;
//	scanf("%d", &n);
//	int arr[100], b[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < n; k++)
//			{
//				if (k != i && k != j && i != j && arr[k] + arr[j] == arr[i])
//				{
//					b[i] = 1;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//////////////////////////////////////////////////////////
//#include <stdio.h>
//void bubble_sort(int arr[], int n);
//int main()
//{
//	int n;//3<=n<=100
//	int arr[101] = { 0 };
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, n);//排序
//	for (int i = n; i >= 3; i--)
//	{
//		int a = 0;//假设i不符合
//		for (int j = 1; j < i - 1; j++)
//		{
//			for (int k = j + 1; k < i; k++)
//			{
//				if (arr[i] == arr[j] + arr[k])
//				{
//					sum++;
//					a = 1;//i符合条件
//					break;
//				}
//			}
//			if (a)//一个数只能计一次
//			{
//				break;
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//void bubble_sort(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}



 










