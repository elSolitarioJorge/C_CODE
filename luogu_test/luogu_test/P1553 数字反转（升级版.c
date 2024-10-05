#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char s[21], ch;
//	scanf("%s", s);
//	int len = strlen(s);
//	int t = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] < '0' || s[i]>'9')
//		{
//			t = i;
//			ch = s[i];
//			break;
//		}
//	}
//	if (t)
//	{
//		int a = t - 1, b = t + 1;
//		if (ch == '.')
//		{
//			while (s[a] == '0' && a > 0)
//			{
//				a--;
//			}
//			for (int i = a; i >= 0; i--)
//			{
//				printf("%c", s[i]);
//			}
//			printf(".");
//			while (s[b] == '0' && b < len - 1)
//			{
//				b++;
//			}
//			for (int i = len - 1; i >= b; i--)
//			{
//				printf("%c", s[i]);
//			}
//		}
//		else if (ch == '/')
//		{
//			while (s[a] == '0' && a > 0)
//			{
//				a--;
//			}
//			for (int i = a; i >= 0; i--)
//			{
//				printf("%c", s[i]);
//			}
//			printf("/");
//			while (s[len - 1] == '0')
//			{
//				len--;
//			}
//			for (int i = len - 1; i >= b; i--)
//			{
//				printf("%c", s[i]);
//			}
//		}
//		else
//		{
//			while (s[a] == '0' && a > 0)
//			{
//				a--;
//			}
//			for (int i = a; i >= 0; i--)
//			{
//				printf("%c", s[i]);
//			}
//			printf("%%");
//		}
//	}
//	else
//	{
//		while (s[len - 1] == '0' && len - 1 > 0)
//		{
//			len--;
//		}
//		for (int i = len - 1; i >= 0; i--)
//		{
//			printf("%c", s[i]);
//		}
//	}
//	return 0;
//}