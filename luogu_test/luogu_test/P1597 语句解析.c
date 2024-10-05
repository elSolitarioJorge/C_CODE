#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a=0,b=0,c=0;
//	char str[260];
//	scanf("%s", str);
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] == 'a')
//		{
//			if (str[i + 3] == 'a')
//			{
//				a = a;
//			}
//			else if (str[i + 3] == 'b')
//			{
//				a = b;
//			}
//			else if (str[i + 3] == 'c')
//			{
//				a = c;
//			}
//			else
//			{
//				a = str[i + 3] - '0';
//			}
//		}
//		else if (str[i] == 'b')
//		{
//			if (str[i + 3] == 'a')
//			{
//				b = a;
//			}
//			else if (str[i + 3] == 'b')
//			{
//				b = b;
//			}
//			else if (str[i + 3] == 'c')
//			{
//				b = c;
//			}
//			else
//			{
//				b = str[i + 3] - '0';
//			}
//		}
//		else if (str[i] == 'c')
//		{
//			if (str[i + 3] == 'a')
//			{
//				c = a;
//			}
//			else if (str[i + 3] == 'b')
//			{
//				c = b;
//			}
//			else if (str[i + 3] == 'c')
//			{
//				c = c;
//			}
//			else
//			{
//				c = str[i + 3] - '0';
//			}
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	char str[260];
//	scanf("%s", str);
//	for (int i = 0; i < strlen(str)-4; i++)
//	{
//		if (str[i] == 'a')
//		{
//			if (str[i + 3] == 'b')
//			{
//				a = b;
//			}
//			else if (str[i + 3] == 'c')
//			{
//				a = c;
//			}
//			else
//			{
//				a = str[i + 3] - '0';
//			}
//		}
//		else if (str[i] == 'b')
//		{
//			if (str[i + 3] == 'a')
//			{
//				b = a;
//			}
//			else if (str[i + 3] == 'c')
//			{
//				b = c;
//			}
//			else
//			{
//				b = str[i + 3] - '0';
//			}
//		}
//		else if (str[i] == 'c')
//		{
//			if (str[i + 3] == 'a')
//			{
//				c = a;
//			}
//			else if (str[i + 3] == 'b')
//			{
//				c = b;
//			}
//			else
//			{
//				c = str[i + 3] - '0';
//			}
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}