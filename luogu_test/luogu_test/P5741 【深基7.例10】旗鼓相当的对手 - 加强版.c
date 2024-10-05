#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <math.h>
//struct Str
//{
//	char name[10];
//	int chinese, math, english;
//};
//struct Str p[1000];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s%d%d%d", p[i].name, &p[i].chinese, &p[i].math, &p[i].english);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			int c = p[i].chinese - p[j].chinese;
//			int m = p[i].math - p[j].math;
//			int e = p[i].english - p[j].english;
//			int sum = c + m + e;
//			if (abs(c) <= 5 && abs(m) <= 5 && abs(e) <= 5 && abs(sum) <= 10)
//			{
//				printf("%s %s\n", p[i].name, p[j].name);
//			}
//		}
//	}
//	return 0;
//}