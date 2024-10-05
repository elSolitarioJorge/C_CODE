#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[21][21] = { 0 };
//	arr[1][1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
/////////////////////////////////////////////////////
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[21][21] = { 0 };
//	arr[1][1] = 1;
//	printf("%d\n", arr[1][1]);
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}