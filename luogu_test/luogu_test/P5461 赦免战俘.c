#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <math.h>
//int fun(int, int, int, int);
//int m[1025][1025];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int k = pow(2, n);//求2的n次方
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
//int fun(int a, int b, int c, int d)
//{
//	for (int i = a; i <= (a + c) / 2; i++)
//	{
//		for (int j = b; j <= (b + d) / 2; j++)
//		{
//			m[i][j] = 0;
//		}
//	}
//	if (a == (a + c) / 2)//矩阵为最小的2*2矩阵 ，结束递归
//	{
//		return 0;
//	}
//	fun((a + c + 1) / 2, b, c, (b + d - 1) / 2);//处理右上角方块 
//	fun(a, (b + d + 1) / 2, (a + c - 1) / 2, d);//处理左下脚方块
//	fun((a + c + 1) / 2, (b + d + 1) / 2, c, d);//处理右下角方块 
//}