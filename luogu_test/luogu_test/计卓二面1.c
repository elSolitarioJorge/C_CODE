#define _CRT_SECURE_NO_WARNINGS

//P1554 梦中的统计
//#include <stdio.h>
//int main()
//{
//	int m, n;
//	int num[10] = {0};
//	scanf("%d%d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		for (int j = i; j > 0; j /= 10)
//		{
//			num[j % 10]++;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//P1035 [NOIP2002 普及组] 级数求和
//#include <stdio.h>
//int main()
//{
//	int k, n;
//	double s = 0.0;
//	scanf("%d", &k);
//	for (int i = 1; s <= k; i++)
//	{
//		s += 1.0 / i;
//		n = i;
//	}
//	printf("%d", n);
//	return 0;
//}

//P1055 [NOIP2008 普及组] ISBN 号码
//#include <stdio.h>
//int main()
//{
//	int j = 1, sum = 0;
//	char num[] = "0123456789X";
//	char str[14];
//	scanf("%s", str);
//	for (int i = 0; i < 11; i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			sum += (str[i] - '0') * j++;
//		}
//	}
//	if (num[sum % 11] == str[12])
//	{
//		printf("Right");
//	}
//	else
//	{
//		str[12] = num[sum % 11];
//		printf("%s", str);
//	}
//	return 0;
//}

//P5728 【深基5.例5】旗鼓相当的对手
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n,sum=0;
//	int a[1001][3];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			int x = a[i][0] - a[j][0];
//			int y = a[i][1] - a[j][1];
//			int z = a[i][2] - a[j][2];
//			int s = x + y + z;
//			if (abs(x) <= 5 && abs(y) <= 5 && abs(z) <= 5 && abs(s) <= 10)
//			{
//				sum++;
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//P1068 [NOIP2009 普及组] 分数线划定
//#include <stdio.h>
//void bubble_sort(struct number[], int);
//struct number
//{
//	int a, b;
//};
//struct number p[5000];
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &p[i].a, &p[i].b);
//	}
//	bubble_sort(p, n);
//	int t = m * 1.5;
//	printf("%d %d\n", p[t - 1].b, t);
//	for (int i = 0; i < t; i++)
//	{
//		printf("%d %d\n", p[i].a, p[i].b);
//	}
//	return 0;
//}
//void bubble_sort(struct number p[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (p[j].b < p[j + 1].b)
//			{
//				int x = p[j].a;
//				p[j + 1].a = p[j].a;
//				p[j].a = x;
//				int y = p[j].b;
//				p[j + 1].b = p[j].b;
//				p[j].b = y;
//				
//			}
//		}
//	}
//}
 
//P1223 排队接水





//P5717 【深基3.习8】三角形分类
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		int t = b;
//		b = c;
//		c = t;
//	}
//	if (a + b <= c)
//	{
//		printf("Not triangle");
//	}
//	else
//	{
//		if (a * a + b * b == c * c)
//		{
//			printf("Right triangle\n");
//		}
//		else if (a * a + b * b > c * c)
//		{
//			printf("Acute triangle\n");
//		}
//		else
//		{
//			printf("Obtuse triangle\n");
//		}
//		if (a == b || b == c)
//		{
//			printf("Isosceles triangle\n");
//		}
//		if (a == b && b == c)
//		{
//			printf("Equilateral triangle\n");
//		}
//	}
//}


//P5723 【深基4.例13】质数口袋
//#include <stdio.h>
//#include <math.h>
//int prime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n, sum = 0, count = 0;
//	scanf("%d", &n);
//	for (int i = 2; sum + i <= n; i++)
//	{
//		if (prime(i))
//		{
//			printf("%d\n", i);
//			sum += i;
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//P1217 [USACO1.5] 回文质数 Prime Palindromes
//#include <stdio.h>
//#include <math.h>
//int huiw(int n)
//{
//	int m = n, sum = 0;
//	while (n)
//	{
//		sum = sum * 10 + n % 10;
//		n /= 10;
//	}
//	if (m == sum)
//	{
//		return 1;
//	}
//	return 0;
//}
//int prime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a % 2 == 0)
//	{
//		for (int i = a + 1; i <= b; i += 2)
//		{
//			if (huiw(i)&&prime(i))
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	else
//	{
//		for (int i = a; i <= b; i += 2)
//		{
//			if (prime(i) && huiw(i))
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}


//P1075 [NOIP2012 普及组] 质因数分解
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("%d", n / 2);
//	}
//	for (int i = 3; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d", n / i);
//			break;
//		}
//	}
//}

//P1428 小鱼比可爱
//#include <stdio.h>
//int main()
//{
//	int n, arr[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int sum = 0;
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (arr[j] < arr[i])
//			{
//				sum++;
//			}
//		}
//		printf("%d ", sum);
//	}
//	return 0;
//}


//P1427 小鱼的数字游戏
//#include <stdio.h>
//int main()
//{
//	int i, arr[100];
//	scanf("%d", &arr[0]);
//	for (i = 0; arr[i]; i++)
//	{
//		scanf("%d", &arr[i + 1]);
//	}
//	for (i -= 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//P5727 【深基5.例3】冰雹猜想
//#include <stdio.h>
//int main()
//{
//	int i, n, arr[1000];
//	scanf("%d", &n);
//	arr[0] = n;
//	for (i = 0; arr[i] != 1; i++)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//			arr[i + 1] = n;
//		}
//		else
//		{
//			n = n * 3 + 1;
//			arr[i + 1] = n;
//		}
//	}
//	while (i>=0)
//	{
//		printf("%d ", arr[i--]);
//	}
//	return 0;
//}


//P1047 [NOIP2005 普及组] 校门外的树
//#include <stdio.h>
//int main()
//{
//	int n, m, a, b, sum = 0;
//	int tree[10000] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i <= n; i++)
//	{
//		tree[i] = 1;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d", &a, &b);
//		for (int j = a; j <= b; j++)
//		{
//			tree[j] = 0;
//		}
//	}
//	for (int i = 0; i <= n; i++)
//	{
//		if (tree[i])
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//P5729 【深基5.例7】工艺品制作
//#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int x, y, z, n;
//	int arr[21][21][21] = { 0 };
//	int a, b, c, d, e, f;
//	scanf("%d%d%d", &x, &y, &z);
//	scanf("%d", &n);
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= y; j++)
//		{
//			for (int k = 1; k <= z; k++)
//			{
//				arr[i][j][k] = 1;
//			}
//		}
//	}
//	while (n--)
//	{
//		scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
//		for (int i = a; i <= d; i++)
//		{
//			for (int j = b; j <= e; j++)
//			{
//				for (int k = c; k <= f; k++)
//				{
//					arr[i][j][k] = 0;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= y; j++)
//		{
//			for (int k = 1; k <= z; k++)
//			{
//				if (arr[i][j][k])
//				{
//					sum++;
//				}
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//P2550 [AHOI2001] 彩票摇奖
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[7], b[7], c[8] = { 0 };
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	while (n--)
//	{
//		int sum = 0;
//		for (int i = 0; i < 7; i++)
//		{
//			scanf("%d", &b[i]);
//			for (int j = 0; j < 7; j++)
//			{
//				if (b[i] == a[j])
//				{
//					sum++;
//				}
//			}
//		}
//		c[sum]++;
//	}
//	for (int i = 7; i > 0; i--)
//	{
//		printf("%d ", c[i]);
//	}
//	return 0;
//}



//P2615 [NOIP2015 提高组] 神奇的幻方
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[40][40] = { 0 };
//	int x = 1, y = n / 2 + 1;
//	arr[x][y] = 1;
//	for (int i = 2; i <= n * n; i++)
//	{
//		if (x == 1 && y != n)
//		{
//			x = n;
//			y++;
//		}
//		else if (y == n && x != 1)
//		{
//			y = 1;
//			x--;
//		}
//		else if (x == 1 && y == n)
//		{
//			x++;
//		}
//		else
//		{
//			if (arr[x - 1][y + 1])
//			{
//				x++;
//			}
//			else
//			{
//				x--, y++;
//			}
//		}
//		arr[x][y] = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//P1554 梦中的统计
//#include <stdio.h>
//int main()
//{
//	int m, n;
//	int num[10] = { 0 };
//	scanf("%d%d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		int t = i;
//		while (t)
//		{
//			num[t % 10]++;
//			t /= 10;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//P2141 [NOIP2014 普及组] 珠心算测验
//#include <stdio.h>
//void bubble_sort(int arr[], int n)
//{
//	for (int i= 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//int main()
//{
//	int n, arr[100];
//	int b[100] = { 0 }, count = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				if (arr[i] + arr[j] == arr[k])
//				{
//					b[k] = 1;
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//P1614 爱与愁的心痛
//#include <stdio.h>
//int main()
//{
//	int n, m;
//	int a[3000] = { 0 }, b[3000] = { 0 };
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i <= n - m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			b[i] += a[i+j];
//		}
//	}
//	int min = b[0];
//	for (int i = 1; i <= n - m; i++)
//	{
//		if (b[i] < min)
//		{
//			min = b[i];
//		}
//	}
//	printf("%d", min);
//	return 0;
//}

//P2911 [USACO08OCT] Bovine Bones G
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	int arr[81] = { 0 };
//	scanf("%d%d%d", &a, &b, &c);
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			for (int k = 1; k <= c; k++)
//			{
//				arr[i + j + k]++;
//			}
//		}
//	}
//	int max = 0, tmp;
//	for (int i = 3; i <= a + b + c; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			tmp = i;
//		}
//	}
//	printf("%d", tmp);
//	return 0;
//}

//P1161 开灯
//#include <stdio.h>
//#define MAX 2000001
//int lap[MAX] = { 0 };
//int main()
//{
//	int n,t;
//	double a;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%lf%d", &a, &t);
//		for (int j = 1; j <= t; j++)
//		{
//			int m = a * j;
//			if (lap[m])
//			{
//				lap[m] = 0;
//			}
//			else
//			{
//				lap[m] = 1;
//			}
//		}
//	}
//	for (int i = 1; i <= MAX; i++)
//	{
//		if (lap[i])
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//P5731 【深基5.习6】蛇形方阵
//#include <stdio.h>
//int main()
//{
//	int n;
//	int a[10][10];
//	scanf("%d", &n);
//	int x = 1, y = 1;
//	int up = 1, left = 1, down = n, right = n;
//	for (int i = 1; i <= n * n; i++)
//	{
//		a[x][y] = i;
//		if (x == left && y < right)
//		{
//			y++;
//		}
//		else if (y == right && x < down)
//		{
//			x++;
//		}
//		else if (x == down && y > left)
//		{
//			y--;
//		}
//		else if (y == left && x > up + 1)
//		{
//			x--;
//		}
//		else
//		{
//			up++, down--, left++, right--;
//			y++;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//P1319 压缩技术
//#include <stdio.h>
//int a[40000];
//int main()
//{
//	int n, m,sum=0;
//	scanf("%d", &n);
//	for (int i = 0; sum<n*n; i++)
//	{
//		scanf("%d", &m);
//		if (i % 2 == 0)
//		{
//			for (int i = sum; i < sum + m; i++)
//			{
//				a[i] = 0;
//			}
//		}
//		else
//		{
//			for (int i = sum; i < sum + m; i++)
//			{
//				a[i] = 1;
//			}
//		}
//		sum += m;
//	}
//	int count = 0;
//	for (int i = 0; i < n * n; i++)
//	{
//		printf("%d",a[i]);
//		count++;
//		if (count % n == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//P1320 压缩技术（续集版
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[40000], b[200];
//	scanf("%s", b);
//	strcat(a, b);
//	int n = strlen(b);
//	for (int i = 1; i < n; i++)
//	{
//		scanf("%s", b);
//		strcat(a, b);
//	}
//	printf("%d ", n);
//	int sum1 = 0, sum0 = 0;
//	for (int j = 0; j < n * n; j++)
//	{
//		if (a[j] == '0')
//		{
//			sum0++;
//			if (sum1 != 0)
//			{
//				printf("%d ", sum1);
//				sum1 = 0;
//			}
//		}
//		if (a[j] == '1')
//		{
//			sum1++;
//			if (sum0 != 0)
//			{
//				printf("%d ", sum0);
//				sum0 = 0;
//			}
//		}
//	}
//	if (sum0 == 0 && sum1 != 0)
//	{
//		printf("%d ", sum1);
//	}
//	else
//	{
//		printf("%d ", sum0);
//	}
//	return 0;
//}