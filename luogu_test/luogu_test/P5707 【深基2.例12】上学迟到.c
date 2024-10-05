#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int s, v;
//	int m, h;
//	scanf("%d%d", &s, &v);
//	if (s % v)
//	{
//		m = (s / v) + 11;
//	}
//	else
//	{
//		m = (s / v) + 10;
//	}
//	if (m % 60)
//	{
//		h = (m / 60) + 1;
//	}
//	else
//	{
//		h = m / 60;
//	}
//	if (h <= 8)
//	{
//		printf("%02d:%02d", 8 - h, 60 - m % 60);
//	}
//	else
//	{
//		printf("%02d:%02d", 8 - h + 24, 60 - m % 60);
//	}
//	return 0;
//}