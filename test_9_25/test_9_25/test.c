#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int m = 1, n = m++, p = ++n, test = 0, i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		++test;
//		if (p < 5) 
//		{
//			p += 2;
//		    (m > n) ? ++m : --n;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 1, k = 1;
//
//	if (i && ++j)printf("OK\n");
//
//	if (i || ++k)printf("OK\n");
//
//	if (j == k)printf("T\n");
//
//	else printf("F\n");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[10] = { 3, 3, 2, 0, 0, 3, 3, 7, 5, 1 };
//
//	int b[5][2] = { {3, 3}, {2, 0}, {0, 3}, {3, 7}, {5, 1} };
//
//	int* p = (a + 2);
//
//	int(*m)[2] = (b + 3);
//
//	printf("%d %d", *p, (*m)[1]);
//
//	return 0;
//}

//#include<stdio.h>
//
//#define INT_PTR int* 
//
//typedef int* int_ptr;
//
//int main()
//{
//	INT_PTR a, b;
//
//	int_ptr c, d;
//
//	printf("sizeof a:%d\n", sizeof(a));
//	printf("sizeof a:%d\n", sizeof(b));
//	printf("sizeof a:%d\n", sizeof(c));
//	printf("sizeof a:%d\n", sizeof(d));
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 45, b = 37, c = 11;
//
//	printf("%d", b >> 1 | c & (a ^ b));
//
//	return 0;
//}

//#include<stdio.h>
//
//void Swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//
//	Swap(a, b);
//
//	printf("%d %d", a, b);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int a[5] = { 1,2,3,4,5 };
//
//	for (int i = 0; i <= 7; ++i) {
//		a[i] = 0;
//		printf("%d", &a[i]);
//		printf("6");
//	}
//
//	return 0;
//}









