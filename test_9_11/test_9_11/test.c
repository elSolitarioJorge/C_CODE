#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main(void)
//{
//	int a[7], b[7];
//	int i = 0, max = 0, t = 0, m = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d%d", &a[i], &b[i]);
//		if (a[i] + b[i] > 8)
//		{
//			m = a[i] + b[i];
//		}
//		if (m > max)
//		{
//			max = m;
//			t = i + 1;
//		}
//	}
//	printf("%d", t);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a[7], b[7];
//	int i = 0, max = 0, t = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d%d", &a[i], &b[i]);
//		if (a[i] + b[i] > 8)
//		{
//			if (a[i] + b[i] > max)
//			{
//				max = a[i] + b[i];
//				t = i + 1;
//			}
//		} 
//	}
//	printf("%d", t);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int a[3], b[3];
//	int y, min=0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d%d", &a[i], &b[i]);
//		if (n % a[i] != 0)
//		{
//			y = (n / a[i] + 1) * b[i];
//		}
//		else
//		{
//			y = (n / a[i]) * b[i];
//		}
//		if (i == 0||y < min)
//		{
//			min = y;
//		}
//	}
//	printf("%d", min);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b <= c || a + c <= b || b + c <= a)
//	{
//		printf("Not triangle\n");
//	}
//	else
//	{
//		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
//		{
//			printf("Right triangle\n");
//		}
//		if (a * a + b * b > c * c && a * a + c * c > b * b && b * b + c * c > a * a)
//		{
//			printf("Acute triangle\n");
//		}
//		if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
//		{
//			printf("Obtuse triangle\n");
//		}
//		if (a == b || a == c || b == c)
//		{
//			printf("Isosceles triangle\n");
//		}
//		if (a == b && b == c)
//		{
//			printf("Equilateral triangle\n");
//		}
//	}
//	return  0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int w;
//	scanf("%d", &w);
//	if (w <= 150)
//	{
//		printf("%.1f", w * 0.4463);
//	}
//	else if (w > 150 && w < 401)
//	{
//		printf("%.1f", 150 * 0.4463 + (w - 150) * 0.4663);
//	}
//	else
//	{
//		printf("%.1f", 150 * 0.4463 + 250 * 0.4663 + (w - 400) * 0.5663);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int x, n, d=0;
//	scanf("%d%d", &x, &n);
//	for (int i = 0; i < n; i++)
//	{
//		if (x == 8)
//		{
//			x = 1;
//		}
//		if (x != 6 && x != 7)
//		{
//			d++;
//		}
//		x++;
//	}
//	printf("%d", d * 250);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	for (int i = 1; i < a + 1; i++)
//	{
//		if (a % i == 0 && c % i == 0)
//		{
//			t = i;
//		}
//	}
//	printf("%d/%d", a / t, c / t);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int h, m = 0;
//	scanf("%d", &h);
//	for (int i = 0; i < 10; i++)
//	{
//		if (h + 30 >= arr[i])
//		{
//			m++;
//		}
//	}
//	printf("%d", m);
//	return 0;
//}

// #include<stdio.h>
//int main(void)
//{
//	char code[] = "0123456789X";
//	char ch[14];
//	int n = 1,sum = 0;
//	scanf("%s", ch);
//	for (int i = 0; i < 13; i++)
//	{
//		if (ch[i] != '-' && i != 12)
//		{
//			sum += (ch[i] - '0') * n++;
//		}
//	}
//	if (ch[12] == code[sum % 11])
//	{
//		printf("Right");
//	}
//	else
//	{
//		ch[12] = code[sum % 11];
//		printf("%s", ch);
//	}
//	return 0;
//}