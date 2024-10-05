#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int len(int);
//int main()
//{
//	int n, b, c, p;
//	scanf("%d", &n);
//	char s[50], k;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", s);
//		switch (s[0])
//		{
//		case 'a':
//			k = 'a';
//			scanf("%d%d", &b, &c);
//			printf("%d+%d=%d\n", b, c, b + c);
//			p = len(b + c) + 2;
//			break;
//		case 'b':
//			k = 'b';
//			scanf("%d%d", &b, &c);
//			printf("%d-%d=%d\n", b, c, b - c);
//			p = len(b - c) + 2;
//			break;
//		case 'c':
//			k = 'c';
//			scanf("%d%d", &b, &c);
//			printf("%d*%d=%d\n", b, c, b * c);
//			p = len(b * c) + 2;
//			break;
//		default:
//			b = atoi(s);//atoi函数可以将字符串转化为整数-----例：char ch[]="123"---> atoi(ch)=123 
//			scanf("%d", &c);
//			switch (k)
//			{
//			case 'a':
//				printf("%d+%d=%d\n", b, c, b + c);
//				p = len(b + c) + 2;
//				break;
//			case 'b':
//				printf("%d-%d=%d\n", b, c, b - c);
//				p = len(b - c) + 2;
//				break;
//			case 'c':
//				printf("%d*%d=%d\n", b, c, b * c);
//				p = len(b * c) + 2;
//				break;
//			default:
//				break;
//			}
//		}
//		printf("%d\n", len(b) + len(c) + p);
//	}
//	return 0;
//}
//int len(int x)
//{
//	int g = 0;
//	if (x == 0)
//	{
//		return 1;
//	}
//	else if (x > 0)
//	{
//		while (x > 0)
//		{
//			x /= 10;
//			g++;
//		}
//	}
//	else
//	{
//		x = -x;
//		g = 1;
//		while (x > 0)
//		{
//			x /= 10;
//			g++;
//		}
//	}
//	return g;
//}