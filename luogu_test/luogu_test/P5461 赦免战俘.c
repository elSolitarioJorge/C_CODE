#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <math.h>
//int fun(int, int, int, int);
//int m[1025][1025];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int k = pow(2, n);//��2��n�η�
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
//	if (a == (a + c) / 2)//����Ϊ��С��2*2���� �������ݹ�
//	{
//		return 0;
//	}
//	fun((a + c + 1) / 2, b, c, (b + d - 1) / 2);//�������ϽǷ��� 
//	fun(a, (b + d + 1) / 2, (a + c - 1) / 2, d);//�������½ŷ���
//	fun((a + c + 1) / 2, (b + d + 1) / 2, c, d);//�������½Ƿ��� 
//}