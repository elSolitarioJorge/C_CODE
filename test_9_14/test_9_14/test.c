#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main(void)
//{
//	int n, x;
//	scanf("%d%d", &n, &x);
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 10 == x)
//		{
//			count++;
//		}
//		if (i / 10 % 10 == x)
//		{
//			count++;
//		}
//		if (i / 100 % 10 == x)
//		{
//			count++;
//		}
//		if (i / 1000 % 10 == x)
//		{
//			count++;
//		}
//		if (i / 10000 % 10 == x)
//		{
//			count++;
//		}
//		if (i / 100000 % 10 == x)
//		{
//			count++;
//		}
//		if(i / 1000000 == x)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int n, x, m, count=0;
//	scanf("%d%d", &n, &x);
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = i;
//		while (tmp != 0)
//		{
//			m = tmp % 10;
//			tmp = tmp / 10;
//			if (m == x)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int k, n;
//	double s = 0;
//	scanf("%d", &k);
//	for (int i= 1; s <= k; i++)
//	{
//		s += 1.0 / i;
//		n = i;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int k, count=0, i=1;
//	scanf("%d", &k);
//	while (k > 0)
//	{
//		if (k - i >= 0)
//		{
//			count += i * i;
//		}
//		else
//		{
//			count += k * i;
//		}
//		k -= i;
//		i++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n, s = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		s += i;
//	}
//	printf("%d", s);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//    int L, s = 0, num = 0;
//    scanf("%d", &L);
//    for (int i = 2; s < L; i++)
//    {
//        int f = 1;
//        for (int j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                f = 0;
//            }
//        }
//        if (f) 
//        {
//            if ((s + i) <= L)
//            {
//                printf("%d\n", i);
//                s += i;
//                num++;
//            }
//        }
//    }
//    printf("%d\n", num);
//    return 0;
//}

#include <stdio.h>
int main(void)
{
    int L, s = 0, num = 0;
    scanf("%d", &L);
    for (int i = 2; i <= L; i++)
    {
        int f = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f = 0;
            }
        }
        if (f && (s + i) <= L)
        {
            printf("%d\n", i);
            s += i;
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}























