#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//char a[6][20];
//int b[6] = { 0 };
//int main()                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
//{
//	int i, j;
//	scanf("%s%s%s%s%s%s", a[0], a[1], a[2], a[3], a[4], a[5]);
//	for (i = 0; i < 6; i++)
//	{
//		if (strcmp(a[i], "one") == 0 || strcmp(a[i], "first") == 0 || strcmp(a[i], "a") == 0 || strcmp(a[i], "another") == 0)
//		{
//			b[i] = 1;
//		}
//		else if (strcmp(a[i], "two") == 0 || strcmp(a[i], "both") == 0 || strcmp(a[i], "second") == 0)
//		{
//			b[i] = 4;
//		}
//		else if (strcmp(a[i], "three") == 0 || strcmp(a[i], "third") == 0)
//		{
//			b[i] = 9;
//		}
//		else if (strcmp(a[i], "four") == 0)
//		{
//			b[i] = 16;
//		}
//		else if (strcmp(a[i], "five") == 0)
//		{
//			b[i] = 25;
//		}
//		else if (strcmp(a[i], "six") == 0)
//		{
//			b[i] = 36;
//		}
//		else if (strcmp(a[i], "seven") == 0)
//		{
//			b[i] = 49;
//		}
//		else if (strcmp(a[i], "eight") == 0)
//		{
//			b[i] = 64;
//		}
//		else if (strcmp(a[i], "nine") == 0)
//		{
//			b[i] = 81;
//		}
//		else if (strcmp(a[i], "ten") == 0)
//		{
//			b[i] = 0;
//		}
//		else if (strcmp(a[i], "eleven") == 0)
//		{
//			b[i] = 21;
//		}
//		else if (strcmp(a[i], "twelve") == 0)
//		{
//			b[i] = 44;
//		}
//		else if (strcmp(a[i], "thirteen") == 0)
//		{
//			b[i] = 69;
//		}
//		else if (strcmp(a[i], "fourteen") == 0)
//		{
//			b[i] = 96;
//		}
//		else if (strcmp(a[i], "fifteen") == 0)
//		{
//			b[i] = 25;
//		}
//		else if (strcmp(a[i], "sixteen") == 0)
//		{
//			b[i] = 56;
//		}
//		else if (strcmp(a[i], "seventeen") == 0)
//		{
//			b[i] = 89;
//		}
//		else if (strcmp(a[i], "eighteen") == 0)
//		{
//			b[i] = 24;
//		}
//		else if (strcmp(a[i], "nineteen") == 0)
//		{
//			b[i] = 61;
//		}
//		else if (strcmp(a[i], "twenty") == 0)
//		{
//			b[i] = 0;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - i; j++)
//		{
//			if (b[j] > b[j + 1])
//			{
//				int t = b[j];
//				b[j] = b[j + 1];
//				b[j + 1] = t;
//			}
//		}
//	}
//	if (b[5] == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			if (b[i])
//			{
//				printf("%d", b[i]);
//				if (i + 1 < 6 && b[i + 1] < 10)
//				{
//					printf("0");
//				}
//			}
//		}
//	}
//	return 0;
//}