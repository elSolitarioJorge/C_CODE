#define _CRT_SECURE_NO_WARNINGS
 
//#include <stdio.h>
//int main(void)
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[3000] = { 0 }, sum[3000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i <= n - m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			sum[i] += arr[i + j];
//		}
//	}
//	int min = sum[0];
//	for (int i = 1; i <= n - m; i++)
//	{
//		if (sum[i] < min)
//		{
//			min = sum[i];
//		}
//	}
//	printf("%d", min);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int s1, s2, s3;
//	scanf("%d%d%d", &s1, &s2, &s3);
//	int sum[81] = { 0 };
//	int num[41] = { 0 };
//	for (int i = 1; i < 41; i++)
//	{
//		num[i] = num[i - 1] + 1;
//	}
//	for (int i = 1; i <= s1; i++)
//	{
//		for (int j = 1; j <= s2; j++)
//		{
//			for (int k = 1; k <= s3; k++)
//			{
//				sum[i + j + k]++;
//			}
//		}
//	}
//	int max = sum[3], s = 3;
//	for (int i = 4; i <= s1 + s2 + s3; i++)
//	{
//		if (sum[i] > max)
//		{
//			max = sum[i];
//			s = i;
//		}
//	}
//	printf("%d", s);
//	return 0;
//}

//#include <stdio.h>
//double a[5000];
//int t[5000], d[2000001] = { 0 };
//int main(void)
//{
//	int n, m;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int k = 2;
//		scanf("%lf%d", &a[i], &t[i]);
//		m = (int)(a[i] * t[i]);
//		for (int j = (int)a[i]; j <= m; j = (int)(a[i] * k++))
//		{
//			if (d[j]==0)
//			{
//				d[j] = 1;
//			}
//			else
//			{
//				d[j] = 0;
//			}
//		}
//	}
//	for (int i = 1;; i++)
//	{
//		if (d[i])
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int num[10][10] = { 0 };
//	int x = 1, y = 1;
//	int up = 1, down = n, left = 1, right = n;
//	for (int i = 1; i <= n * n; i++)
//	{
//		num[x][y] = i;
//		if (x == up && y < right)
//		{
//			y++;
//		}
//		else if (x < down && y == right)
//		{
//			x++;
//		}
//		else if (x == down && y > left)
//		{
//			y--;
//		}
//		else if (x > up + 1 && y == left)
//		{
//			x--;
//		}
//		else
//		{
//			y++;
//			up++, down--, left++, right--;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			printf("%3d", num[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	int yh[21][21] = { 0 };
//	scanf("%d", &n);
//	yh[1][1] = 1;
//	printf("%d\n", yh[1][1]);
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			yh[i][j] = yh[i - 1][j - 1] + yh[i - 1][j];
//			printf("%d ", yh[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int a[101][101] = { 0 };
//int main(void)
//{
//	int n, m, t, count = 0;
//	scanf("%d%d%d", &n, &m, &t);
//	int x, y, o, p;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d", &x, &y);
//		for (int j = x - 1; j <= x + 1; j++)
//		{
//			for (int k = y - 1; k <= y + 1; k++)
//			{
//				if (j > 0 && j <= n && k > 0 && k <= n)
//				{
//					a[j][k] = 1;
//				}
//			}
//		}
//		if (x - 2 > 0)
//		{
//			a[x - 2][y] = 1;
//		}
//		if (x + 2 <= n)
//		{
//			a[x + 2][y] = 1;
//		}
//		if (y - 2 > 0)
//		{
//			a[x][y - 2] = 1;
//		}
//		if (y + 2 <= n)
//		{
//			a[x][y + 2] = 1;
//		}
//	}
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%d%d", &o, &p);
//		for (int j = o - 2; j <= o + 2; j++)
//		{
//			for (int k = p - 2; k <= p + 2; k++)
//			{
//				if (j > 0 && j <= n && k > 0 && k <= n)
//				{
//					a[j][k] = 1;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (!a[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//  }

//#include <stdio.h>
//int main()
//{
//	int n, x, y, sum, min;
//	scanf("%d", &n);
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d%d", &x, &y);
//		if (n % x == 0)
//		{
//			sum = y * (n / x);
//		}
//		else
//		{
//			sum = y * (n / x + 1);
//		}
//		if (i == 0 || sum < min)
//		{
//			min = sum;
//		}
//	}
//	printf("%d", min);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	char ch[4];
//	scanf("%s", ch);
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
//	for (int i = 0; i < 3; i++)
//	{
//		switch (ch[i])
//		{
//		case 'A':
//			printf("%d ", a);
//			break;
//		case 'B':
//			printf("%d ", b);
//			break;
//		case 'C':
//			printf("%d ", c);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char code[] = "0123456789X";
//	char ch[14];
//	int n = 1, sum = 0;
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

//#include <stdio.h>
//int main()
//{
//	int n, min = 1000;
//	int arr[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d", min);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	char ch[4];
//	scanf("%s", ch);
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
//	for (int i = 0; i < 3; i++)
//	{
//		switch (ch[i])
//		{
//		case 'A':
//			printf("%d ", a);
//			break;
//		case 'B':
//			printf("%d ", b);
//			break;
//		case 'C':
//			printf("%d ", c);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	int n1 = 0, n2 = 0, s1 = 0, s2 = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 16 == 0)
//		{
//			s1 += i;
//			n1++;
//		}
//		else
//		{
//			s2 += i;
//			n2++;
//		}
//	}
//	printf("%.1f %.1f", (float)s1 / n1, (float)s2 / n2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3] = { 1,5,3 };
//	for (int i = 0; i < 2; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			int t = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = t;
//		}
//	}
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, i;
//	scanf("%d", &a);
//	for (i = 1; a != 1; i++)
//	{
//		a /= 2;
//	}
//	printf("%d", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, num = 1;
//	scanf("%d", &n);
//	for (int i = n; i > 0; i--)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			printf("%02d", num++);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, x, m, count = 0;
//	scanf("%d%d", &n, &x);
//	for (int i = 1; i <= n; i++)
//	{
//		int t = i;
//		while (t != 0)
//		{
//			m = t % 10;
//			t /= 10;
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
//int main()
//{
//	int k, n;
//	scanf("%d", &k);
//	float sum = 0.0f;
//	for (int i = 1; sum <= k; i++)
//	{
//		sum += 1.0 / i;
//		n = i;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int k, sum = 0;
//	scanf("%d", &k);
//	for (int i = 1; k > 0; i++)
//	{
//		for (int j = i; j > 0 && k > 0; j--)
//		{
//			sum += i;
//			k--;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int k, sum = 0, i = 1;
//	scanf("%d", &k);
//	while (k > 0)
//	{
//		if (k - i >= 0)
//		{
//			sum += i * i;
//		}
//		else
//		{
//			sum += k * i;
//		}
//		k -= i;
//		i++;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int L;
//	scanf("%d", &L);
//	int count = 0, sum = 0;
//	for (int i = 2; sum + i <= L; i++)
//	{
//		int t = 1;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				t = 0;
//			}
//		}
//		if (t)
//		{
//			printf("%d\n", i);
//			count++;
//			sum += i;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int hw(int n)
//{
//	int sum = 0, k = n;
//	while (k != 0)
//	{
//		sum = sum * 10 + k % 10;
//		k /= 10;
//	}
//	if (sum == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
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
//	if (a % 2 != 0)
//	{
//		for (int i = a; i <= b; i += 2)
//		{
//			if (hw(i) && prime(i))
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	else
//	{
//		for (int i = a + 1; i <= b; i += 2)
//		{
//			if (hw(i) && prime(i))
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	float s, sum = 0.0f;
//	scanf("%f", &s);
//	for (float i = 2.0f; sum <= s; i *= 0.98)
//	{
//		count++;
//		sum += i;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int fz(int n)
//{
//	int t = n, m = 0;
//	while (t != 0)
//	{
//		m = m * 10 + t % 10;
//		t /= 10;
//	}
//	return m;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 0)
//	{
//		printf("%d", fz(n));
//	}
//	else
//	{
//		printf("%d", -fz(-n));
//	}
//	return 0;
//}

//#include <stdio.h>
//double Fn(int n)
//{
//	int a[50];
//	a[0] = 0, a[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	return a[n];
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%.2lf", Fn(n));
//	return 0;
//}

//#include <stdio.h>
//double Fn(int n);
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%.2lf", Fn(n));
//	return 0;
//}
//double Fn(int n)
//{
//	double f[50];
//	f[0] = 0, f[1] = 1, f[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	return f[n];
//}

//#include <stdio.h>
//double Fn(int n)
//{
//	double f[50];
//	f[0] = 0.0, f[1] = 1.0;
//	for (int i = 2; i <= n; i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	return f[n];
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%.2lf", Fn(n));
//	return 0;
//}


//#include <stdio.h>
//void bubble_sort(int[], int);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr,n);//ð������ 
//	printf("%d", arr[n - 1] - arr[0]);
//	return 0;
//}
//void bubble_sort(int arr[],int n)
//{
//	for (int i = 0; i < n - 1; i++)
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

//#include <stdio.h>
//#define MIN 0
//#define MAX 1000
//int max(int[], int);
//int min(int[], int);
//int main()
//{
//	int n;
//	scanf("%d", &n);//1 <= n <=100 
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);//0 <= arr[i] <=1000
//	}
//	printf("%d", max(arr, n) - min(arr, n));//�ֱ��ҳ������Сֵ 
//	return 0;
//}
//int max(int arr[], int n)
//{
//	int max = MIN;//��max��ʼ��Ϊ���ݷ�Χ����Сֵ 
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int min(int arr[], int n)
//{
//	int min = MAX;//��min��ʼ��Ϊ���ݷ�Χ�����ֵ 
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	return min;
//}

//#include <stdio.h>
//#define MIN 0
//#define MAX 1000
//int jicha(int[], int);
//int main()
//{
//	int n;
//	scanf("%d", &n);//1 <= n <=100 
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);//0 <= arr[i] <=1000
//	}
//	printf("%d", jicha(arr, n));//�󼫲� 
//	return 0;
//}
//int jicha(int arr[], int n)
//{
//	int max = MIN;//��max��ʼ��Ϊ���ݷ�Χ����Сֵ 
//	int min = MAX;//��min��ʼ��Ϊ���ݷ�Χ�����ֵ
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	return max - min;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10000];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int lian = 1, max = 1;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] == arr[i - 1] + 1)
//		{
//			lian++;
//			if (lian > max)
//			{
//				max = lian;
//			}
//		}
//		else
//		{
//			lian = 1;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		int z = 1;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				z = 0;
//				break;
//			}
//		}
//		if (z && n % i == 0)
//		{
//			printf("%d", n / i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//void square(int);
//void triangle(int);
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	square(n);//��ӡ������ 
//	printf("\n");//�ո� 
//	triangle(n);//��ӡ������ 
//	return 0;
//}
//void square(int n)
//{
//	int m = 1;
//	for (int i = 1; i <= n; i++)//�� 
//	{
//		for (int j = 1; j <= n; j++)//�� 
//		{
//			printf("%02d", m++);
//		}
//		printf("\n");//ÿ��ӡһ�к��� 
//	}
//}
//void triangle(int n)
//{
//	int m = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int k = 1; k <= n - i; k++)
//		{
//			printf("  ");//��i�д�ӡ2*(n-i)���ո� 
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%02d", m++);//��i�д�ӡi���� 
//		}
//		printf("\n");//ÿ��ӡһ�к���
//	}
//}

//#include <stdio.h>
//void bubble_sort(int[], int);
//int main()
//{
//	int n, sum = 0;
//	int arr[1000];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, n);//ð������
//	for (int i = 1; i < n - 1; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%.2lf", (double)sum / (n - 2));
//	return 0;
//}
//void bubble_sort(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
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

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int x = 0, k = 0;
//	if (n % (52 * 7) == 0 && n / (52 * 7) >= 4)//�ж��Ƿ��н� 
//	{
//		int	m = n / (52 * 7);//ƽ��ÿ��Ｏx+3*kԪ 
//		while (++k)
//		{
//			for (x = 100; x > 0; x--)
//			{
//				if (x + 3 * k == m)
//				{
//					printf("%d\n%d", x, k);
//					return 0;
//				}
//			}
//		}
//	}
//	else
//	{
//		printf("�޽�");
//		return 0;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int total = 52 * 7;//52��,ÿ������
//	if (n % total == 0 && n / total >= 4)//�ж��Ƿ��н� 
//	{
//		int x, k;
//		int m = n / total;//ƽ��ÿ��Ｏ�Ľ��
//		for (k = 1; ; k++)//k��1��ʼ,ֱ���ҵ����ʵ�x
//		{
//			x = m - k * 3;//������������x
//			if (x >= 1 && x <= 100)//�ж�x�Ƿ����
//			{
//				printf("%d\n%d", x, k);
//				return 0;
//			}
//		}
//	}
//	else
//	{
//		printf("�޽�\n");
//		return 0;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;//a��ʾ����ʣ��Ǯ��b��ʾ���Ǯ
//	int arr[13] = { 0 };
//	for (int i = 1; i < 13; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i < 13; i++)
//	{
//		if (a + 300 < arr[i])
//		{
//			printf("%d\n", -i);
//			break;
//		}
//		else
//		{
//			a += 300 - arr[i];
//		}
//		if (a >= 100)
//		{
//			b += (a / 100) * 100;
//			a -= (a / 100) * 100;
//		}
//		if (i == 12)
//		{
//			printf("%d", (int)(1.2 * b) + a);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[13];
//	int a = 0, b = 0;//a ��������ʣ��Ǯ b������Ǯ
//	for (int i = 1; i < 13; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (300 + a < arr[i])
//		{
//			printf("%d", -i);
//			break;
//		}
//		else
//		{
//			a += 300 - arr[i];
//			if (a >= 100)
//			{
//				b += (a / 100) * 100;
//				a -= (a / 100) * 100;
//			}
//		}
//		if (i == 12)
//		{
//			//printf("%.0lf", b * 1.2 + a);
//			printf("%d", (int)(1.2 * b) + a);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int count = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				count++;
//			}
//		}
//		printf("%d ", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[100];
//	do
//	{
//		scanf("%d", &arr[i]);
//	} while (arr[i++] != 0);
//	for (i = i - 2; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[100];
//	scanf("%d", &arr[i]);
//	while(arr[i]!=0)
//	{
//		i++;
//		scanf("%d", &arr[i]);
//	}
//	for (i -= 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, arr[1000];//1<=n<=100
//	int i = 0;
//	scanf("%d", &n);
//	arr[0] = n;
//	while (arr[i] != 1)
//	{
//		i++;
//		if (arr[i - 1] % 2 == 0)
//		{
//			arr[i] = arr[i - 1] / 2;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] * 3 + 1;
//		}
//	}
//	for (; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int tree[10000];
//	int l, m, u, v;//lΪ��·���ȣ�mΪ������Ŀ��uΪ������㣬vΪ�����յ�
//	int sum = 0;//sumΪ���ʣ����ľ���� 
//	scanf("%d%d", &l, &m);
//	for (int i = 0; i <= l; i++)
//	{
//		tree[i] = 1;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d%d", &u, &v);
//		for (int j = u; j <= v; j++)
//		{
//			tree[j] = 0;
//		}
//	}
//	for (int i = 0; i <= l; i++)
//	{
//		if (tree[i])//���tree[i]==1������Ϊ�� 
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>//��������ֵ����abs 
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int num[1001][4];
//	int count = 0;//��ʾ������൱�Ķ��֡��Ķ���
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= 3; j++)
//		{
//			scanf("%d", &num[i][j]);
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = i + 1; j <= N; j++)
//		{
//			int c = num[i][1] - num[j][1];//���ĳɼ�֮�� 
//			int m = num[i][2] - num[j][2];//��ѧ�ɼ�֮�� 
//			int e = num[i][3] - num[j][3];//Ӣ��ɼ�֮�� 
//			int sum = c + m + e;//�ܳɼ�֮�� 
//			if (abs(c) <= 5 && abs(m) <= 5 && abs(e) <= 5 && abs(sum) <= 10)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int cube[21][21][21];//������ά����
//int main()
//{
//	int w, x, h;
//	int q;
//	int sum = 0;
//	scanf("%d%d%d", &w, &x, &h);//����������ĳߴ�
//	for (int i = 1; i <= w; i++)
//	{
//		for (int j = 1; j <= x; j++)
//		{
//			for (int k = 1; k <= h; k++)
//			{
//				cube[i][j][k] = 1;
//			}
//		}
//	}
//	scanf("%d", &q);//�����и����
//	for (int n = 0; n < q; n++)
//	{
//		int x1, y1, z1, x2, y2, z2;
//		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);//�����иΧ
//		for (int i = x1; i <= x2; i++)
//		{
//			for (int j = y1; j <= y2; j++)
//			{
//				for (int k = z1; k <= z2; k++)
//				{
//					cube[i][j][k] = 0;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= w; i++)
//	{
//		for (int j = 1; j <= x; j++)
//		{
//			for (int k = 1; k <= h; k++)
//			{
//				if (cube[i][j][k] == 1)
//				{
//					sum++;//����ʣ��С��������
//				}
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;//��Ʊ����
//	int a[7], b[7], c[7] = { 0 };//a[7]Ϊ�н�����,b[7]Ϊ��Ʊ����,c[7]Ϊÿ�ֽ���������
//	scanf("%d", &n);
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &a[i]);//�����߸���ͬ������
//	}
//	for (int i = 0; i < n; i++)
//	{
//
//		int sum = 0;//��¼��ͬ��������
//		for (int j = 0; j < 7; j++)
//		{
//			scanf("%d", &b[j]);//�����߸���ͬ������
//		    for (int k = 0; k < 7; k++)
//			{
//				if (b[j] == a[k])
//				{
//					sum++;
//				}
//			}
//		}
//		if (sum > 0)
//		{
//			c[7 - sum]++;
//		}
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", c[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int cube[21][21][21];//������ά����
//int main()
//{
//	int w, x, h;
//	int q;
//	int sum = 0;
//	scanf("%d%d%d", &w, &x, &h);//����������ĳߴ�
//	for (int i = 1; i <= w; i++)
//	{
//		for (int j = 1; j <= x; j++)
//		{
//			for (int k = 1; k <= h; k++)
//			{
//				cube[i][j][k] = 1;
//			}
//		}
//	}
//	scanf("%d", &q);//�����и����
//	for (int n = 0; n < q; n++)
//	{
//		int x1, y1, z1, x2, y2, z2;
//		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);//�����иΧ
//		for (int i = x1; i <= x2; i++)
//		{
//			for (int j = y1; j <= y2; j++)
//			{
//				for (int k = z1; k <= z2; k++)
//				{
//					cube[i][j][k] = 0;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= w; i++)
//	{
//		for (int j = 1; j <= x; j++)
//		{
//			for (int k = 1; k <= h; k++)
//			{
//				if (cube[i][j][k] == 1)
//				{
//					sum++;//����ʣ��С��������
//				}
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	int arr[40][40] = { 0 };
//	scanf("%d", &n);
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
//			if (arr[x - 1][y + 1] == 0)
//			{
//				x--;
//				y++;
//			}
//			else
//			{
//				x++;
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





//#include <stdio.h>
//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//void bubble_sort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				swap(&a[j], &a[j + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int n = 3;
//	int arr[3] = { 9,10,1 };
//	bubble_sort(arr, n);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main() {
//    char p0[] = "I love Linux";
//    const char* p1 = "I love Linux\0Group";
//    char p2[] = "I love Linux\0";
//    printf("%d\n%d\n", strcmp(p0, p1), strcmp(p0, p2));
//    printf("%d\n%d\n", sizeof(p0) == sizeof(p1), strlen(p0) == strlen(p1));
//    printf("%p\n%p\n%p\n", p0, p1, p2);
//    return 0;
//}

//#include <stdio.h>
//int i = 1;
//static int j = 15;
//int func() {
//    int i = 10;
//    if (i > 5) i++;
//    printf("i = %d, j = %d\n", i, j);
//    return i % j;
//}
//int main() {
//    int a = func();
//    printf("a = %d\n", a);
//    printf("i = %d, j = %d\n", i, j);
//    return 0;
//}
//#include <stdio.h>
//int main() {
//    float a = 1.0, b = 1.1, ex = 0.1;
//    printf("%.50f\n%.50f\n%.50f\n", a, b, ex);
//    printf("b - a == ex is %s\n", (b - a == ex) ? "true" : "false");
//    int A = a * 10, B = b * 10, EX = ex * 10;
//    printf("B - A == EX is %s\n", (B - A == EX) ? "true" : "false");
//}
 


//#define SQUARE(x) x *x 
//#define MAX(a, b) (a > b) ? a : b; 
//#define PRINT(x) printf("�����������¶����𣬰�%d��\n", x); 
//#define CONCAT(a, b) a##b 
//int main() {
//    int CONCAT(x, 1) = 5;
//    int CONCAT(y, 2) = 3;
//    int max = MAX(SQUARE(x1 + 1), SQUARE(y2))
//        PRINT(max)
//        return 0;
//}

//int main(int argc, char* argv[]) {
//    while (argc++ > 0);
//    int a = 1, b = argc, c = 0;
//    if (--a || b++ && c--)
//        for (int i = 0; argv[i] != NULL; i++)
//            printf("argv[%d] = %s\n", i, argv[i]);
//    printf("a = %d, b = %d, c = %d\n", a, b, c);
//    return 0;
//}

//int main() {
//    void* a[] = { (void*)1, (void*)2, (void*)3, (void*)4, (void*)5 };
//    printf("%d\n", *((char*)a + 1));
//    printf("%d\n", *(int*)(char*)a + 1);
//    printf("%d\n", *((int*)a + 2));
//    printf("%lld\n", *((long long*)a + 3));
//    printf("%d\n", *((short*)a + 4));
//    return 0;
//}



//#include <stdio.h>
//int main(int argc, char* argv[]) {
//    while (argc++ > 0);
//    int a = 1, b = argc, c = 0;
//    if (--a || b++ && c--)
//        for (int i = 0; argv[i] != NULL; i++)
//            printf("argv[%d] = %s\n", i, argv[i]);
//    printf("a = %d, b = %d, c = %d\n", a, b, c);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int k = a++ || b++ && ++c;
//	while (c++ > 0);
//	printf("%d\n%d\n%d\n%d", a, b, c, k);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	printf("%p\n", &a);
//	printf("%p\n", (void*)-1);
//	void* p = (void*)1;
//	printf("%p\n", p);
//	printf("%p\n", (int*)11);
//	printf("%d\n", sizeof(p));
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    void* a[] = { (void*)1, (void*)2, (void*)3, (void*)4, (void*)5 };
//    printf("%p\n", 1);
//    printf("%p\n", a);
//    printf("%p\n", a+1);
//    printf("%p\n", a+2);
//    printf("%p\n", a+3);
//    printf("%p\n", a+4);
//    printf("%p\n", (void*)1);
//    printf("%p\n", (void*)2);
//    printf("%p\n", (void*)3);
//    printf("%p\n", (void*)4);
//    printf("%p\n", (void*)5);
//    printf("%zu\n", sizeof(a));
//    printf("%zu\n", sizeof(a+1));
//    printf("%zu\n", sizeof(a+2));
//    printf("%zu\n", sizeof(a+3));
//    printf("%zu\n", sizeof(a+4));
//    printf("%p\n", a[0]);
//    printf("%p\n", a[1]);
//    printf("%p\n", a[2]);
//    printf("%p\n", a[3]);
//    printf("%p\n", a[4]);
//    printf("%c\n", *((char*)a+1));
//    printf("%d\n", *(int*)(char*)a + 1);
//    printf("%d\n", *((int*)a + 2));
//    printf("%lld\n", *((long long*)a + 3));
//    printf("%d\n", *((short*)a + 4));
//    printf("%d\n", a[0]);
//    printf("%c\n", 3);
//    return 0;
//}

//#include <stdio.h>
//typedef struct { int* arr; int len; }result;
//void your_sort(int arr1[],int len1,int arr2[],int len2, result*res)
//{
//    for (int i = 0; i < len1 - 1; i++)
//    {
//        int flag = 0;
//        for (int j = 0; j < len1 - i - 1; i++)
//        {
//            if (arr1[j] > arr1[j + 1])
//            {
//                flag = 1;
//                int tmp = arr1[j];
//                arr1[j] = arr1[j + 1];
//                arr1[j + 1] = tmp;
//            }
//        }
//        if (flag == 0)
//        {
//            break;
//        }
//    }
//    for (int i = 0; i < len2 - 1; i++)
//    {
//        int flag = 0;
//        for (int j = 0; j < len2 - i - 1; i++)
//        {
//            if (arr2[j] > arr2[j + 1])
//            {
//                flag = 1;
//                int tmp = arr2[j];
//                arr2[j] = arr2[j + 1];
//                arr2[j + 1] = tmp;
//            }
//        }
//        if (flag == 0)
//        {
//            break;
//        }
//    }
//    int newarr
//}
//
//int main() {
//    int arr1[] = { 2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 10 };
//    int arr2[] = { 2, 1, 4, 3, 9, 6, 8 };
//    int len1 = sizeof(arr1) / sizeof(arr1[0]);
//    int len2 = sizeof(arr2) / sizeof(arr2[0]);
//
//    result result;
//    your_sort(arr1, len1, arr2, len2, &result);
//    for (int i = 0; i < result.len; i++) {
//        printf("%d ", result.arr[i]);
//    }
//
//    free(result.arr);
//    return 0;
//}


//#include <stdio.h>
//#include <float.h>
//int main() {
//    float a = 1.0, b = 1.1, ex = 0.1;
//    printf("%e\n", FLT_EPSILON);
//    printf("b - a == ex is %s\n", (b - a - ex)< FLT_EPSILON ? "true" : "false");
//    int A = a * 10, B = b * 10, EX = ex * 10;
//    printf("B - A == EX is %s\n", (B - A == EX) ? "true" : "false");
//}


//#include <stdio.h>
//#include <stdlib.h>
//typedef struct {
//    int* arr;
//    int len;
//}result;
//int compare(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//void your_sort(int* arr1, int len1, int* arr2, int len2,result *res)
//{
//    int total_len = len1 + len2;
//    int* tmp = (int*)malloc(total_len * sizeof(int));
//    if (tmp == NULL) 
//    { 
//        res->arr = NULL;
//        res->len = 0;
//        return;
//    }
//    for (int i = 0; i < len1; i++)
//    {
//        tmp[i] = arr1[i];
//    }
//    for (int i = 0; i < len2; i++)
//    {
//        tmp[len1 + i] = arr2[i];
//    }
//    qsort(tmp, total_len, sizeof(int), compare);
//    int unique_count = 0;
//    for (int i = 0; i < total_len; i++)
//    {
//        if (i == 0 || tmp[i] != tmp[i - 1])
//        {
//            unique_count++;
//        }
//    }
//    res->arr = (int*)malloc(unique_count * sizeof(int));
//    if (res->arr == NULL)
//    {     
//        res->len = 0;
//        free(tmp);
//        return;
//    }
//    res->len = unique_count;
//    int j = 0;
//    for (int i = 0; i < total_len; i++)
//    {
//        if (i == 0 || tmp[i] != tmp[i - 1])
//        {
//            if (j < res->len)
//            {
//                res->arr[j++] = tmp[i];
//            }
//        }
//    }
//    free(tmp);
//}
//int main() {
//    int arr1[] = { 2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 10 };
//    int arr2[] = { 2, 1, 4, 3, 9, 6, 8 };
//    int len1 = sizeof(arr1) / sizeof(arr1[0]);
//    int len2 = sizeof(arr2) / sizeof(arr2[0]);
//
//    result result;
//    your_sort(arr1, len1, arr2, len2, &result);
//    for (int i = 0; i < result.len; i++) {
//        printf("%d ", result.arr[i]);
//    }
//    free(result.arr);
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    void* a[] = { (void*)1, (void*)2, (void*)3, (void*)4, (void*)5 };
//    printf("%p\n", (char*)a + 1);
//    printf("%d\n", *(int*)(char*)a + 1);
//    printf("%d\n", *((int*)a + 2));
//    printf("%lld\n", *((long long*)a + 3));
//    printf("%d\n", *((short*)a + 4));
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int a[2] = { 4, 8 };
//    int(*b)[2] = &a;
//    int* c[2] = { a, a + 1 };
//    printf("%p\n", a);
//    printf("%p\n", a + 1);
//    printf("%p\n", &a);
//    printf("%p\n", &a + 1);
//    printf("%d\n", *(a + 1));
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(&a));
//    printf("%p\n", *b);
//    printf("%p\n", *b + 1);
//    printf("%p\n", b);
//    printf("%p\n", b + 1);
//    printf("%d\n", *(*b + 1));
//    printf("%d\n", sizeof(*b));
//    printf("%d\n", sizeof(b));
//    
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double x;
//	scanf("%lf", &x);
//	if (x < -2)
//	{
//		printf("%.4f", x / 3 + 1);
//	}
//	else if (x >= -2 && x < 2)
//	{
//		printf("%.4f", 2 * x + 1.0 / 3);
//	}
//	else
//	{
//		printf("%.4f", x / 7 - 1);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	printf("�������: %d ", year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double a, sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%lf", &a);
//		if (a < 9.9)
//		{
//			sum += a + 0.99;
//		}
//		else
//		{
//			sum += a;
//		}
//	}
//	printf("%.2f", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	char c;
//	scanf("%d %c", &n, &c);
//	if (c == 'Y')
//	{
//		if (n % 5 == 0)
//		{
//			printf("Right");
//		}
//		else
//		{
//			printf("Wrong");
//		}
//	}
//	else if(c == 'N')
//	{
//		if (n % 5 != 0)
//		{
//			printf("Right");
//		}
//		else
//		{
//			printf("Wrong");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, flag = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &a);
//		if (a < 80)
//		{
//			flag = 0;
//		}
//	}
//	if (flag)
//	{
//		printf("A");
//	}
//	else
//	{
//		printf("B");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double x;
//	scanf("%lf", &x);
//	if (x <= 10)
//	{
//		printf("%.2f", x * 500);
//	}
//	else
//	{
//		printf("%.2f", 5000 + 800 * (x - 10));
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//	double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//	if (b * b == 4 * a * c)
//	{
//		printf("x1=x2=%.5f", x1);
//	}
//	else if (b * b > 4 * a * c)
//	{
//		printf("x1=%.5f;x2=%.5f", x1, x2);
//	}
//	else
//	{
//		double i = -b / (2 * a);
//		double j = sqrt(4 * a * c - b * b) / (2 * a);
//		if (i)
//		{
//			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", i, j, i, j);
//		}
//		else
//		{
//			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", -i, j, -i, j);
//		}
//	}
//	return 0;
//}


//7-1 �����ݺ�ɫ�����Ƽ�

//#include <stdio.h>
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	if (age >= 10 && age < 20)
//	{
//		printf("ʮ�˶�");
//	}
//	else if (age >= 20 && age < 40)
//	{
//		printf("��ɽ������");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("��˳����");
//	}
//	else if (age >= 60 && age < 80)
//	{
//		printf("�����ݲ����");
//	}
//	else
//	{
//		printf("���Ƽ�");
//	}
//	return 0;
//}

//7-2 ���֧�ṹ���

//#include <stdio.h>
//int main()
//{
//	int score;
//	scanf("%d", &score);
//	if (score >= 90 && score <= 100)
//	{
//		printf("A");
//	}
//	else if (score >= 80 && score <= 89)
//	{
//		printf("B");
//	}
//	else if (score >= 70 && score <= 79)
//	{
//		printf("C");
//	}
//	else if (score >= 60 && score <= 69)
//	{
//		printf("D");
//	}
//	else if (score >= 0 && score <= 59)
//	{
//		printf("E");
//	}
//	else
//	{
//		printf("error");
//	}
//	return 0;
//}

//7-3 С�ͽγ������շ�����

//#include <stdio.h>
//int main()
//{
//	int m;
//	float h, q;
//	scanf("%d%f", &m, &h);
//	int d = (int)(h / 24);
//	float s = h - d * 24;
//	if (m == 1)
//	{
//
//		if (s == 0)
//		{
//			q = 0;
//		}
//		else if (s <= 1)
//		{
//			q = 5;
//		}
//		else
//		{
//			q = 5 + 4 * (s - 1);
//		}
//		if (q > 50)
//		{
//			q = 50;
//		}
//		q += d * 50;
//	}
//	else if (m == 2)
//	{
//		if (s == 0)
//		{
//			q = 0;
//		}
//		else if (s <= 2)
//		{
//			q = 5;
//		}
//		else
//		{
//			q = 5 + 2 * (s - 2);
//		}
//		if (q > 30)
//		{
//			q = 30;
//		}
//		q += d * 30;
//	}
//	else if (m == 3)
//	{
//		if (s == 0)
//		{
//			q = 0;
//		}
//		else if (s <= 3)
//		{
//			q = 5;
//		}
//		else
//		{
//			q = 5 + s - 3;
//		}
//		if (q > 20)
//		{
//			q = 20;
//		}
//		q += d * 20;
//	}
//	printf("%.2f", q);
//	return 0;
//}


//7-4 ����n�Ľ׳�

//#include <stdio.h>
//int main()
//{
//	int n;
//	long long fact = 1;
//	scanf("%d", &n);
//	for (int i = n; i > 0; i--)
//	{
//		fact *= i;
//	}
//	printf("fact = %lld", fact);
//	return 0;
//}


//7-5 �������

//int fact(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fact(n - 1);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	double e;
//	int n = 0;
//	double sum = 0;
//	scanf("%lf", &e);
//	double tmp = 1;
//	for (int i = 1;tmp >= e;i+=2)
//	{
//		tmp = 1.0 / fact(i);
//		n++;
//		sum += tmp;
//	}
//	printf("һ��������%d������%lf", n, sum);
//	return 0;
//}

//7-6 �ɼ�ͳ��

//#include <stdio.h>
//int main()
//{
//	int n;
//	int a = 0, b = 0, c = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n < 0)
//		{
//			break;
//		}
//		else
//		{
//			if (n >= 90 && n <= 100)
//			{
//				a++;
//			}
//			else if (n >= 60 && n <= 89)
//			{
//				b++;
//			}
//			else
//			{
//				c++;
//			}
//		}
//	}
//	printf("A�ȼ�%d��\nP�ȼ�%d��\nF�ȼ�%d��", a, b, c);
//	return 0;
//}

//7-7 ���������ǰN���

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double sum = 0;
//	for (int i = 1; n > 0; i+=2)
//	{
//		sum += 1.0 / i;
//		n--;
//	}
//	printf("sum = %.6f", sum);
//	return 0;
//}

//���ڸ�������̽��

//#include <stdio.h>
//int main()
//{
//	double a, b;
//	scanf("%lf%lf", &a, &b);
//	double c = a / b;
//	printf("%.0f\n%.50f\n%.15f\n%.10f\n%f\n%f\n%d\n%d\n", c, c, c, c, c, (double)(int)c, (int)c, c);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//struct gift_list
//{
//    int number;
//    double price;
//    int item_type;
//    union item {
//        struct book
//        {
//            char name[50];
//            char author[50];
//            int page;
//        }book;
//        struct mug
//        {
//            char design[20];
//        }mug;
//        struct shirt
//        {
//            char design[20];
//            int size;
//            char color[20];
//        }shirt;
//    }item;
//};
//
//int main()
//{
//    struct gift_list gift;
//    gift.number = 3;
//    gift.price = 9.9;
//    gift.item_type = 0;
//    strcpy(gift.item.book.name, "horry_potter");
//    strcpy(gift.item.book.author, "JK_roling");
//    printf("还有%d本,每一本价%f，书名是%s,作者是%s", gift.number, gift.price, gift.item.book.name, gift.item.book.author);
//    return 0;
//}






//A + B Problem（高精）

//#include <stdio.h>
//#include <string.h>
//#define LEN 100
//void Clear(int a[]) {
//    for (int i = 0; i < LEN; i++) {
//        a[i] = 0;
//    }
//}//清零
//void Read(int a[]) {
//    char s[LEN + 1];
//    scanf("%s", s);
//    Clear(a);
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        a[i] = s[len - 1 - i] - '0';
//    }//将字符串转化为数组
//}//读入数字
//void Print(int a[]) {
//    int i;
//    for (i = LEN - 1; i >= 1; i--) {
//        if (a[i] != 0) {
//            break;
//        }
//    }//从后往前找第一个非零数字，且保证数字为0时也能打印出来
//    while (i >= 0) {
//        printf("%d", a[i--]);
//    }//从后往前打印数字
//    printf("\n");
//}//打印数字
//void Add(int a[], int b[], int c[]) {
//    Clear(c);
//    for (int i = 0; i < LEN - 1; i++) {
//        c[i] += a[i] + b[i];
//        if (c[i] >= 10) {
//            c[i + 1] += 1;
//            c[i] -= 10;
//        }//进位
//    }
//}//高精度加法
//int main() {
//    int a[LEN], b[LEN], c[LEN];
//    Read(a);//读入第一个数字
//    Read(b);//读入第二个数字
//    Add(a, b, c);//高精度加法
//    Print(c);//打印结果
//    return 0;
//}


//	高精度减法

//#include <stdio.h>
//#include <string.h>
//#define LEN 10086
//void Clear(int a[]) {
//    for (int i = 0; i < LEN; i++) {
//        a[i] = 0;
//    }
//}//清零
//void Read(int a[]) {
//    char s[LEN + 1];
//    scanf("%s", s);
//    Clear(a);
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        a[i] = s[len - 1 - i] - '0';
//    }//将字符串转化为数组
//}//读入数字
//void Print(int a[]) {
//    int i;
//    for (i = LEN - 1; i >= 1; i--) {
//        if (a[i] != 0) {
//            break;
//        }
//    }//从后往前找第一个非零数字，且保证数字为0时也能打印出来
//    while (i >= 0) {
//        printf("%d", a[i--]);
//    }//从后往前打印数字
//    printf("\n");
//}//打印数字
//int Judge_size(int a[], int b[]) {
//    for (int i = LEN - 1; i >= 0; i--) {
//        if (a[i] > b[i]) {
//            return 1;
//        }//如果a大于b，返回1
//        if (a[i] < b[i]) {
//            return -1;
//        }//如果a小于b，返回-1
//    }
//    return 0;//如果a等于b，返回0
//}//判断a和b的大小
//void Sub(int a[], int b[], int c[]) {
//    Clear(c);
//    for (int i = 0; i < LEN - 1; i++) {
//        c[i] += a[i] - b[i];
//        if (c[i] < 0) {//借位
//            c[i + 1] -= 1;
//            c[i] += 10;
//        }
//    }
//}//高精度减法
//int main() {
//    int a[LEN], b[LEN], c[LEN];
//    Read(a);//读入第一个数字
//    Read(b);//读入第二个数字
//    if (Judge_size(a, b) >= 0) {
//        Sub(a, b, c);//如果a大于等于b，进行高精度减法
//    }
//    else {
//        printf("-");//如果a小于b，输出负号
//        Sub(b, a, c);//如果a小于b，将b-a存入c
//    }
//    Print(c);//打印结果
//    return 0;
//}

//	A*B Problem

//#include <stdio.h>
//#include <string.h>
//#define LEN 10086
//void Clear(int a[]) {
//    for (int i = 0; i < LEN; i++) {
//        a[i] = 0;
//    }
//}//清零
//void Read(int a[]) {
//    char s[LEN + 1];
//    scanf("%s", s);
//    Clear(a);
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        a[i] = s[len - 1 - i] - '0';
//    }//将字符串转化为数组
//}//读入数字
//void Print(int a[]) {
//    int i;
//    for (i = LEN - 1; i >= 1; i--) {
//        if (a[i] != 0) {
//            break;
//        }
//    }//从后往前找第一个非零数字，且保证数字为0时也能打印出来
//    while (i >= 0) {
//        printf("%d", a[i--]);
//    }//从后往前打印数字
//    printf("\n");
//}//打印数字
//void Mul(int a[], int b, int c[]) {
//    Clear(c);
//    for (int i = 0; i < LEN - 1; i++) {
//        c[i] += a[i] * b;
//        if (c[i] >= 10) {
//            c[i + 1] += c[i] / 10;
//            c[i] %= 10;
//        }//进位
//    }
//}//高精度乘高精度乘低精度
//int main() {
//    int a[LEN], b, c[LEN];
//    Read(a);//读入第一个数字
//    scanf("%d", &b);//读入第二个数字
//    Mul(a, b, c);//进行高精度乘法
//    Print(c);//打印结果
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#define LEN 10086
//void Clear(int a[]) {
//    for (int i = 0; i < LEN; i++) {
//        a[i] = 0;
//    }
//}//清零
//void Read(int a[]) {
//    char s[LEN + 1];
//    scanf("%s", s);
//    Clear(a);
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        a[i] = s[len - 1 - i] - '0';
//    }//将字符串转化为数组
//}//读入数字
//void Print(int a[]) {
//    int i;
//    for (i = LEN - 1; i >= 1; i--) {
//        if (a[i] != 0) {
//            break;
//        }
//    }//从后往前找第一个非零数字，且保证数字为0时也能打印出来
//    while (i >= 0) {
//        printf("%d", a[i--]);
//    }//从后往前打印数字
//    printf("\n");
//}//打印数字
//void Mul(int a[], int b[], int c[]) {
//    Clear(c);
//    for (int i = 0; i < LEN - 1; i++) {
//        for (int j = 0; j <= i; j++) {
//            c[i] += a[j] * b[i - j];
//        }
//        if (c[i] >= 10) {//进位
//            c[i + 1] += c[i] / 10;
//            c[i] %= 10;
//        }
//    }
//}//高精度乘法
//int main() {
//    int a[LEN], b[LEN], c[LEN];
//    Read(a);//读入第一个数字
//    Read(b);//读入第二个数字
//    Mul(a, b, c);//进行高精度乘法
//    Print(c);//打印结果
//    return 0;
//}

//	A/B Problem

//#include <stdio.h>
//#include <string.h>
//#define len 10086
//int main() {
//    int a[len] = { 0 }, c[len] = { 0 };//a为被除数,c为商
//    long long b, d = 0;//b为除数,d为余数
//    char s[len + 1];//被除数
//    scanf("%s", s);
//    int la = strlen(s);//被除数的长度
//    for (int i = 0; i < la; i++) {
//        a[i] = s[i] - '0';
//    }//将字符串转换为数字
//    scanf("%lld", &b);//读入除数
//    if (b == 0) {
//        printf("除数不能为0\n");
//    }//判断除数是否为0
//    for (int i = 0; i < la; i++) {
//        c[i] = (d * 10 + a[i]) / b;//计算商
//        d = (d * 10 + a[i]) % b;//计算余数
//    }
//    int lc = 0;
//    while (c[lc] == 0 && lc < la - 1) {
//        lc++;
//    }//去掉前导0
//    for (int i = lc; i < la; i++) {
//        printf("%d", c[i]);
//    }//输出商
//    printf("\n%d", d);//输出余数
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#define LEN 10086
//void Clear(int a[]) {
//    for (int i = 0; i < LEN; i++) {
//        a[i] = 0;
//    }
//}//清零
//void Read(int a[]) {
//    char s[LEN + 1];
//    scanf("%s", s);
//    Clear(a);
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        a[i] = s[len - 1 - i] - '0';
//    }//将字符串转化为数组
//}//读入数字
//void Print(int a[]) {
//    int i;
//    for (i = LEN - 1; i >= 1; i--) {
//        if (a[i] != 0) {
//            break;
//        }
//    }//从后往前找第一个非零数字，且保证数字为0时也能打印出来
//    while (i >= 0) {
//        printf("%d", a[i--]);
//    }//从后往前打印数字
//    printf("\n");
//}//打印数字
//bool Cmp(int a[], int b[], int last, int len) {
//    if (a[last + len] != 0) { 
//        return true;
//    }
//    for (int i = len - 1; i >= 0; i--) {
//        if (a[last + i] > b[i]) {
//            return true;
//        }
//        if (a[last + i] < b[i]) { 
//            return false;
//        }
//    }
//    return true;
//}//比较a数组中从last开始的len位是否大于b数组
//void Div(int a[], int b[], int c[], int d[]) {
//    Clear(c);
//    Clear(d);
//    int la, lb;//la为a的长度，lb为b的长度
//    for (la = LEN; la > 0; la--) {
//        if (a[la - 1] != 0) {
//            break;
//        }
//    }//从后往前找第一个非零数字，确定a的长度
//    for (lb = LEN; lb > 0; lb--) {
//        if (b[lb - 1] != 0) { 
//            break;
//        }
//    }//从后往前找第一个非零数字，确定b的长度
//    if (lb == 0) {
//        printf("除数不能为0\n");
//        return;
//    }//除数不能为0
//    for (int i = 0; i < la; i++) {
//        d[i] = a[i];
//    }//将a的值赋给d
//    for (int i = la - lb; i >= 0; i--) {
//        while (Cmp(d, b, i, lb)) {//如果d中从i开始的lb位大于等于b
//            for (int j = 0; j < lb; j++) {
//                d[i + j] -= b[j];
//                if (d[i + j] < 0) {
//                    d[i + j + 1] -= 1;
//                    d[i + j] += 10;
//                }//借位
//            }//高精度减法
//            c[i] += 1;//记录商
//        }//循环减法，直到d中从i开始的lb位小于b
//    }//循环除法
//}//高精度除法
//int main() {
//    int a[LEN], b[LEN], c[LEN], d[LEN];
//    Read(a);
//    Read(b);
//    Div(a, b, c, d);
//    Print(c);//输出商
//    Print(d);//输出余数
//    return 0;
//}

//一个简单的计算器（高精度）

//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#define LEN 10086//预先设定数字最大长度
//int a[LEN], b[LEN], c[LEN], d[LEN];
//void Clear(int a[]) {
//    for (int i = 0; i < LEN; i++) {
//        a[i] = 0;
//    }
//}//清零
//void Read(int a[]) {
//    char s[LEN + 1];
//    scanf("%s", s);
//    Clear(a);
//    int len = strlen(s);
//    for (int i = 0; i < len; i++) {
//        a[i] = s[len - 1 - i] - '0';
//    }//将字符串转化为数组
//}//读入数字
//void Print(int a[]) {
//    int i;
//    for (i = LEN - 1; i >= 1; i--) {
//        if (a[i] != 0) {
//            break;
//        }
//    }//从后往前找第一个非零数字，且保证数字为0时也能打印出来
//    while (i >= 0) {
//        printf("%d", a[i--]);
//    }//从后往前打印数字
//    printf("\n");
//}//打印数字
//void Add(int a[], int b[], int c[]) {
//    Clear(c);
//    for (int i = 0; i < LEN - 1; i++) {
//        c[i] += a[i] + b[i];
//        if (c[i] >= 10) {
//            c[i + 1] += 1;
//            c[i] -= 10;
//        }//进位
//    }
//}//高精度加法
//int Judge_Size(int a[], int b[]) {
//    for (int i = LEN - 1; i >= 0; i--) {
//        if (a[i] > b[i]) {
//            return 1;
//        }//如果a大于b，返回1
//        if (a[i] < b[i]) {
//            return -1;
//        }//如果a小于b，返回-1
//    }
//    return 0;//如果a等于b，返回0
//}//判断a和b的大小
//void Sub(int a[], int b[], int c[]) {
//    Clear(c);
//    for (int i = 0; i < LEN - 1; i++) {
//        c[i] += a[i] - b[i];
//        if (c[i] < 0) {//借位
//            c[i + 1] -= 1;
//            c[i] += 10;
//        }
//    }
//}//高精度减法
//void Mul(int a[], int b[], int c[]) {
//    Clear(c);
//    for (int i = 0; i < LEN - 1; i++) {
//        for (int j = 0; j <= i; j++) {
//            c[i] += a[j] * b[i - j];
//        }
//        if (c[i] >= 10) {//进位
//            c[i + 1] += c[i] / 10;
//            c[i] %= 10;
//        }
//    }
//}//高精度乘法
//bool Cmp(int a[], int b[], int last, int len) {
//    if (a[last + len] != 0) { 
//        return true;
//    }
//    for (int i = len - 1; i >= 0; i--) {
//        if (a[last + i] > b[i]) { 
//            return true;
//        }
//        if (a[last + i] < b[i]) { 
//            return false;
//        }
//    }
//    return true;
//}//比较a数组中从last开始的len位是否大于b数组
//void Div(int a[], int b[], int c[], int d[]) {
//    Clear(c);
//    Clear(d);
//    int la, lb;//la为a的长度，lb为b的长度
//    for (la = LEN; la > 0; la--) {
//        if (a[la - 1] != 0) { 
//            break;
//        }
//    }//从后往前找第一个非零数字，确定a的长度
//    for (lb = LEN; lb > 0; lb--) {
//        if (b[lb - 1] != 0) { 
//            break;
//        }
//    }//从后往前找第一个非零数字，确定b的长度
//    if (lb == 0) {
//        printf("除数不能为0\n");
//        return;
//    }//除数不能为0
//    for (int i = 0; i < la; i++) { 
//        d[i] = a[i];
//    }//将a的值赋给d
//    for (int i = la - lb; i >= 0; i--) {
//        while (Cmp(d, b, i, lb)) {//如果d中从i开始的lb位大于等于b
//            for (int j = 0; j < lb; j++) {
//                d[i + j] -= b[j];
//                if (d[i + j] < 0) {
//                    d[i + j + 1] -= 1;
//                    d[i + j] += 10;
//                }//借位
//            }//高精度减法
//            c[i] += 1;//记录商
//        }//循环减法，直到d中从i开始的lb位小于b
//    }//循环除法
//}//高精度除法
//int main() {
//    Read(a);//读入第一个数字
//    char op[2];//运算符
//    scanf("%s", op);//读入运算符
//    Read(b);//读入第二个数字
//    switch (op[0]) {
//    case'+':
//        Add(a, b, c);
//        Print(c);
//        break;
//    case'-':
//        if (Judge_Size(a, b) >= 0) {
//            Sub(a, b, c);
//            Print(c);
//        }
//        else {
//            Sub(b, a, c);
//            printf("-");
//            Print(c);
//        }//如果a大于等于b，直接相减，否则先交换a和b，再相减，最后输出负数    
//        break;
//    case'*':
//        Mul(a, b, c);
//        Print(c);
//        break;
//    case'/':
//        Div(a, b, c, d);
//        Print(c);//输出商
//        Print(d);//输出余数
//        break;
//    default:
//        printf("输入错误\n");
//    }//根据运算符进行相应的运算
//    return 0;
//}//计算器






//回文质数

//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int huiwen(int i)
//{
//	//判断位数
//	int m = 0, flag = 1, temp;
//	temp = i;
//	while (i > 0)
//	{
//		m++;
//		i /= 10;
//	}
//	//判断是否为回文/12345
//	int* p = malloc(4 * m);
//	if (p == NULL)
//	{
//		perror(p);
//	}
//	else
//	{
//		int* str = p;
//		int* arr = p;
//		for (int j = 0; j < m; j++)
//		{
//			*p = temp % 10;
//			temp /= 10;
//			p++;
//		}
//		for (int j = 0; j < m / 2; j++)
//		{
//			if (*str != *(p - 1))
//			{
//				flag = 0;
//				break;
//			}
//			str++;
//			p--;
//		}
//		free(arr);
//		return flag;
//	}
//}
//int main()
//{
//	int a, b, i, j, flagz = 1, flagh;
//	scanf("%d %d", &a, &b);
//	for (i = a; i <= b; i++)//先判断质数
//	{
//		flagz = 1;
//		flagh = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flagz = 0;
//				break;
//			}
//		}
//		if (flagz == 1)
//		{
//			flagh = huiwen(i);
//		}
//		if (flagh == 1 && flagz == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//显示屏

//#include <stdio.h>
//int main() {
//    int n;
//    scanf("%d", &n);
//    char num[101];
//    scanf("%s", num);
//    char ch[10][5][3] =
//    {
//        {
//            'X','X','X',
//            'X','.','X',
//            'X','.','X',
//            'X','.','X',
//            'X','X','X'
//        },
//        {
//            '.','.','X',
//            '.','.','X',
//            '.','.','X',
//            '.','.','X',
//            '.','.','X'
//        },
//        {
//            'X','X','X',
//            '.','.','X',
//            'X','X','X',
//            'X','.','.',
//            'X','X','X'
//        },
//        {
//            'X','X','X',
//            '.','.','X',
//            'X','X','X',
//            '.','.','X',
//            'X','X','X'
//        },
//        {
//            'X','.','X',
//            'X','.','X',
//            'X','X','X',
//            '.','.','X',
//            '.','.','X'
//        },
//        {
//            'X','X','X',
//            'X','.','.',
//            'X','X','X',
//            '.','.','X',
//            'X','X','X'
//        },
//        {
//            'X','X','X',
//            'X','.','.',
//            'X','X','X',
//            'X','.','X',
//            'X','X','X'
//        },
//        {
//            'X','X','X',
//            '.','.','X',
//            '.','.','X',
//            '.','.','X',
//            '.','.','X'
//        },
//        {
//            'X','X','X',
//            'X','.','X',
//            'X','X','X',
//            'X','.','X',
//            'X','X','X'
//        },
//        {
//            'X','X','X',
//            'X','.','X',
//            'X','X','X',
//            '.','.','X',
//            'X','X','X'
//        }
//    };
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < n; j++) {
//            for (int k = 0; k < 3; k++) {
//                printf("%c", ch[num[j] - '0'][i][k]);
//            }
//            if (j != n - 1) {
//                printf(".");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}




//顺序表

//#include <stdio.h>
//#define MAXSIZE 100
//typedef int ElemType;//Element Type 元素类型
//typedef struct {
//    ElemType data[MAXSIZE];
//    int lenth;
//}SeqList;//Sequence List 顺序表
//void initList(SeqList* L) {
//    L->lenth = 0;
//}//Initialize List 初始化顺序表
//int appendElem(SeqList* L, ElemType e) {
//    if (L->lenth >= MAXSIZE) {
//        printf("顺序表已满\n");
//        return 0;
//    }
//    L->data[L->lenth] = e;
//    L->lenth++;
//    return 1;
//}//Append Element 添加元素
//void listElem(SeqList* L) {
//    for (int i = 0; i < L->lenth; i++) {
//        printf("%d ", L->data[i]);
//    }
//    printf("\n");
//}//List Elements 列出元素(遍历）
//int insertElem(SeqList* L, int pos, ElemType e) {
//    if (L->lenth >= MAXSIZE) {
//        printf("顺序表已满\n");
//        return 0;
//    }
//    if (pos < 1 || pos > L->lenth) {
//        printf("插入位置错误\n");
//        return 0;
//    }
//    for (int i = L->lenth - 1; i >= pos - 1; i--) {
//        L->data[i + 1] = L->data[i];
//    }
//    L->data[pos - 1] = e;
//    L->lenth++;
//    return 1;
//}//Insert Element 插入元素  position 位置
//int deleteElem(SeqList* L, int pos, ElemType* e) {
//    if (L->lenth == 0) {
//        printf("空表\n");
//        return 0;
//    }
//    if (pos < 1 || pos > L->lenth) {
//        printf("删除数据位置有误\n");
//        return 0;
//    }
//    *e = L->data[pos - 1];
//    if (pos < L->lenth) {
//        for (int i = pos; i < L->lenth; i++) {
//            L->data[i - 1] = L->data[i];
//        }
//    }
//    L->lenth--;
//    return 1;
//}//Delete Element 删除元素 position 位置
//int findElem(SeqList* L, ElemType e) {
//    if (L->lenth == 0) {
//        printf("空表\n");
//        return 0;
//    }
//    for (int i = 0; i < L->lenth; i++) {
//        if (L->data[i] == e) {
//            return i + 1;//返回该元素在顺序表中的位置
//        }
//    }
//    printf("未找到该元素\n");
//    return 0;
//}//Find Element 查找元素
//int main(int argc, char const* argv[]) {
//    SeqList list;
//    initList(&list);
//    printf("初始化成功，目前长度占用%d\n", list.lenth);
//    printf("目前占用内存%zu字节\n", sizeof(list.data));
//    appendElem(&list, 1);
//    appendElem(&list, 2);
//    appendElem(&list, 3);
//    appendElem(&list, 4);
//    listElem(&list);
//    insertElem(&list, 2, 5);
//    listElem(&list);
//    ElemType delData;//Delete Data 删除数据
//    deleteElem(&list, 2, &delData);
//    printf("被删除的数据为:%d\n", delData);
//    listElem(&list);
//    if (findElem(&list, 3)) {
//        printf("3在表中的位置：%d", findElem(&list, 3));
//    }
//    return 0;
//}


//动态内存分配--顺序表

//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//typedef int ElemType;//Element Type 元素类型
//typedef struct {
//    ElemType* data;
//    int lenth;
//}SeqList;//Sequence List 顺序表
//SeqList* initList() {
//    SeqList* L = (SeqList*)malloc(sizeof(SeqList));
//    L->data = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
//    L->lenth = 0;
//    return L;
//}//Initialize List 初始化顺序表
//int appendElem(SeqList* L, ElemType e) {
//    if (L->lenth >= MAXSIZE) {
//        printf("顺序表已满\n");
//        return 0;
//    }
//    L->data[L->lenth] = e;
//    L->lenth++;
//    return 1;
//}//Append Element 添加元素
//void listElem(SeqList* L) {
//    for (int i = 0; i < L->lenth; i++) {
//        printf("%d ", L->data[i]);
//    }
//    printf("\n");
//}//List Elements 列出元素(遍历）
//int insertElem(SeqList* L, int pos, ElemType e) {
//    if (L->lenth >= MAXSIZE) {
//        printf("顺序表已满\n");
//        return 0;
//    }
//    if (pos < 1 || pos > L->lenth) {
//        printf("插入位置错误\n");
//        return 0;
//    }
//    for (int i = L->lenth - 1; i >= pos - 1; i--) {
//        L->data[i + 1] = L->data[i];
//    }
//    L->data[pos - 1] = e;
//    L->lenth++;
//    return 1;
//}//Insert Element 插入元素  position 位置
//int deleteElem(SeqList* L, int pos, ElemType* e) {
//    if (L->lenth == 0) {
//        printf("空表\n");
//        return 0;
//    }
//    if (pos < 1 || pos > L->lenth) {
//        printf("删除数据位置有误\n");
//        return 0;
//    }
//    *e = L->data[pos - 1];
//    if (pos < L->lenth) {
//        for (int i = pos; i < L->lenth; i++) {
//            L->data[i - 1] = L->data[i];
//        }
//    }
//    L->lenth--;
//    return 1;
//}//Delete Element 删除元素 position 位置
//int findElem(SeqList* L, ElemType e) {
//    if (L->lenth == 0) {
//        printf("空表\n");
//        return 0;
//    }
//    for (int i = 0; i < L->lenth; i++) {
//        if (L->data[i] == e) {
//            return i + 1;//返回该元素在顺序表中的位置
//        }
//    }
//    printf("未找到该元素\n");
//    return 0;
//}//Find Element 查找元素
//int main(int argc, char const* argv[]) {
//    SeqList* list = initList();
//    printf("初始化成功，目前长度占用%d\n", list->lenth);
//    printf("目前占用内存%zu字节\n", sizeof(list->data));
//    appendElem(list, 1);
//    appendElem(list, 2);
//    appendElem(list, 3);
//    appendElem(list, 4);
//    listElem(list);
//    insertElem(list, 2, 5);
//    listElem(list);
//    ElemType delData;//Delete Data 删除数据
//    deleteElem(list, 2, &delData);
//    printf("被删除的数据为；%d\n", delData);
//    listElem(list);
//    if (findElem(list, 3)) {
//        printf("3在表中的位置：%d", findElem(list, 3));
//    }
//    free(list->data);
//    free(list);
//    return 0;
//}








//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElemType;
//typedef struct node {
//    ElemType data;
//    struct node* next;
//}Node;//Node 节点
//Node* initList() {
//    Node* head = (Node*)malloc(sizeof(Node));
//    head->data = 0;
//    head->next = NULL;
//    return head;
//}//Initialize 初始化
//void insertHead(Node* L, ElemType e) {
//    Node* p = (Node*)malloc(sizeof(Node));
//    p->data = e;
//    p->next = L->next;
//    L->next = p;
//}//头插法
//Node* getTail(Node* L) {
//    Node* p = L;
//    while (p->next != NULL) {
//        p = p->next;
//    }
//    return p;
//}//Tail 尾巴
//Node* insertTail(Node* tail, ElemType e) {
//    Node* p = (Node*)malloc(sizeof(Node));
//    p->data = e;
//    tail->next = p;
//    p->next = NULL;
//    return p;
//}//尾插法,返回尾节点
//void listNode(Node* L) {
//    Node* p = L->next;
//    while (p != NULL) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//void insertNode(Node* L, int pos, ElemType e) {
//    Node* p = L;
//    for (int i = 0; i < pos - 1; i++) {
//        p = p->next;
//        if (p == NULL) {
//            printf("插入位置错误\n");
//            return;
//        }
//    }//找到插入位置的前驱节点
//    Node* q = (Node*)malloc(sizeof(Node));
//    q->data = e;
//    q->next = p->next;
//    p->next = q;
//}
//void deleteNode(Node* L, int pos) {
//    Node* p = L;
//    for (int i = 0; i < pos - 1; i++) {
//        p = p->next;
//        if (p == NULL) {
//            printf("删除位置错误\n");
//            return;
//        }
//    }//找到删除位置的前驱节点
//    if (p->next == NULL) {
//        printf("删除位置错误\n");
//        return;
//    }
//    Node* q = p->next;//q是要删除的节点
//    p->next = q->next;//让要删除节点的前驱指向要删除节点的后继
//    free(q);//释放要删除节点的内存空间
//}
//int listLenth(Node* L) {
//    Node* p = L;
//    int len = 0;
//    while (p->next != NULL) {
//        p = p->next;
//        len++;
//    }
//    return len;
//}//获取链表长度,链表的长度不包括头节点
//void freeList(Node* L) {
//    Node* p = L->next;
//    Node* q;
//    while (p != NULL) {
//        q = p->next;
//        free(p);
//        p = q;
//    }
//    L->next = NULL;
//}//清空链表
//int main() {
//    Node* list = initList();
//    Node* tail = getTail(list);
//    tail = insertTail(tail, 1);
//    tail = insertTail(tail, 2);
//    tail = insertTail(tail, 3);
//    listNode(list);
//    insertNode(list, 2, 4);
//    listNode(list);
//    deleteNode(list, 2);
//    listNode(list);
//    printf("当前链表的长度为：%d\n", listLenth(list));
//    freeList(list);
//    printf("当前链表长度为：%d\n", listLenth(list));
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElemType;
//typedef struct node{
//	ElemType data;
//	struct node* next;
//}Node;
//Node* initList() {
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->data = 0;
//	head->next = NULL;
//	return head;
//}
//void insertHead(Node* L, ElemType e) {
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = e;
//	p->next = L->next;
//	L->next = p;
//}
//Node* getTail(Node* L) {
//	Node* p = L;
//	while (p->next != NULL) {
//		p = p->next;
//	}
//	return p;
//}
//Node* insertTail(Node* tail, ElemType e) {
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = e;
//	tail->next = p;
//	p->next = NULL;
//	return p;
//}
//void insertNode(Node* L, int pos, ElemType e) {
//	Node* p = L;
//	for (int i = 0; i < pos - 1; i++) {
//		p = p->next;
//		if (p == NULL) {
//			printf("插入位置错误\n");
//			return;
//		}
//	}
//	Node* q = (Node*)malloc(sizeof(Node));
//	q->data = e;
//	q->next = p->next;
//	p->next = q;
//}
//void deleteNode(Node* L, int pos) {
//	Node* p = L;
//	for (int i = 0; i < pos - 1; i++) {
//		p = p->next;
//		if (p == NULL) {
//			printf("删除位置错误\n");
//			return;
//		}
//	}
//	if (p->next == NULL) {
//		printf("删除位置错误\n");
//		return;
//	}
//	Node* q = p->next;
//	p->next = q->next;
//	free(q);
//}
//int listLenth(Node* L) {
//	Node* p = L;
//	int len = 0;
//	while (p->next != NULL) {
//		p = p->next;
//		len++;
//	}
//	return len;
//}
//void listElem(Node* L) {
//	Node* p = L->next;
//	while (p != NULL) {
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//	printf("当前链表长度为：%d\n\n", listLenth(L));
//}
//void freeList(Node* L) {
//	Node* p = L->next;
//	Node* q;
//	while (p != NULL) {
//	    q = p->next;
//		free(p);
//		p = q;
//	}
//	L->next = NULL;
//}//释放链表，清空节点（不包括头节点）
//int main() {
//	Node* head = initList();
//	insertHead(head, 5);
//	insertHead(head, 4);
//	insertHead(head, 3);
//	insertHead(head, 2);
//	insertHead(head, 1);
//	Node* tail = getTail(head);
//	tail = insertTail(tail, 6);
//	tail = insertTail(tail, 7);
//	tail = insertTail(tail, 8);
//	tail = insertTail(tail, 9);
//	listElem(head);
//	insertNode(head, 1, 0);
//	listElem(head);
//	deleteNode(head, 1);
//	listElem(head);
//	freeList(head);
//	listElem(head);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//typedef int ElemType;
//typedef struct Node {
//	ElemType data;
//	struct Node* next;
//}Node;
//Node* initList() {
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->data = 0;
//	head->next = NULL;
//	return head;
//}
//void listNode(Node* head) {
//	Node* p = head->next;
//	while (p != NULL) {
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//Node* getTail(Node* head) {
//	Node* p = head;
//	while (p->next != NULL) {
//		p = p->next;
//	}
//	return p;
//}
//Node* insertTail(Node* tail, ElemType e) {
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = e;
//	tail->next = newNode;
//	newNode->next = NULL;
//	return newNode;
//}
//void insertPosition(Node* head, int pos, ElemType e) {
//	Node* p = head;
//	for (int i = 0; i < pos - 1; i++) {
//		p = p->next;
//		if (p == NULL) {
//			printf("插入位置错误\n");
//			return;
//		}
//	}
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = e;
//	newNode->next = p->next;
//	p->next = newNode;
//}
//void deleteNode(Node* head, int pos) {
//	Node* p = head;
//	for (int i = 0; i < pos - 1; i++) {
//		p = p->next;
//		if (p == NULL) {
//			printf("删除位置错误\n");
//			return;
//		}
//	}
//	if (p->next == NULL) {
//		printf("删除位置错误\n");
//		return;
//	}
//	Node* q = p->next;
//	p->next = q->next;
//	free(q);
//}
//void modifyNode(Node* head, int pos, ElemType new_data) {
//	Node* p = head;
//	for (int i = 0; i < pos; i++) {
//		p = p->next;
//		if (p == NULL) {
//			printf("修改位置错误\n");
//			return;
//		}
//	}
//	p->data = new_data;
//}
//Node* findNode(Node* head, ElemType data) {
//	Node* p = head->next;
//	//遍历链表，找到包含指定数据的节点
//	while (p != NULL) {
//		if (p->data == data) {
//			return p;//返回找到的节点
//		}
//		p = p->next;
//	}
//	printf("链表中不存在该值\n");
//	return NULL;//未找到，返回NULL
//}
//int listLenth(Node* head) {
//	Node* p = head->next;
//	int len = 0;
//	while (p != NULL) {
//		len++;
//		p = p->next;
//	}
//	return len;
//}
//void freeList(Node* head) {
//	Node* p = head->next;
//	Node* q;
//	while (p != NULL) {
//		q = p->next;
//		free(p);
//		p = q;
//	}
//	head->next = NULL;
//}
//int main() {
//	Node* head = initList();
//	Node* tail = getTail(head);
//	tail = insertTail(tail, 1);
//	tail = insertTail(tail, 1);
//	tail = insertTail(tail, 1);
//	tail = insertTail(tail, 1);
//	tail = insertTail(tail, 1);
//	modifyNode(head, 3, 3);
//	listNode(head);
//	return 0;
//}

//#include <stdio.h>
//void shellSort(int arr[], int len) {
//	int d, i, j;
//	int temp;
//	for (d = len / 2; d > 0; d /= 2) {
//		for (i = d; i < len; i++) {
//			temp = arr[i];
//			for (j = i - d; j >= 0 && arr[j] > temp; j -= d) {
//				arr[j + d] = arr[j];
//			}
//			arr[j + d] = temp;
//		}
//	}
//}
//void printArray(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int arr[] = { 36,27,20,60,55,7,71,36,44,67,16 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前：");
//	printArray(arr, len);
//	shellSort(arr, len);
//	printf("排序后：");
//	printArray(arr, len);
//	return 0;
//}


//#include <stdio.h>
//// 全局二维数组a用于表示方阵中每个点的状态，初始化为0（表示无光）
//int a[101][101] = { 0 };
//int main(void) {
//    int n, m, t, count = 0;
//    // 读取方阵边长n，火把数量m，萤石数量k
//    scanf("%d%d%d", &n, &m, &t);
//    int x, y, o, p;
//    // 处理火把的位置和光照范围
//    for (int i = 0; i < m; i++) {
//        // 读取火把的坐标(x, y)
//        scanf("%d%d", &x, &y);
//        // 火把光照范围为以(x, y)为中心的九宫格
//        for (int j = x - 1; j <= x + 1; j++) {
//            for (int k = y - 1; k <= y + 1; k++) {
//                // 确保坐标在方阵范围内（1 <= j <= n 且 1 <= k <= n），标记为有光（1）
//                if (j > 0 && j <= n && k > 0 && k <= n) {
//                    a[j][k] = 1;
//                }
//            }
//        }
//        // 火把光照范围还包括上下额外的两个点（x - 2, y）和（x + 2, y）（如果在方阵内）
//        if (x - 2 > 0) {
//            a[x - 2][y] = 1;
//        }
//        if (x + 2 <= n) {
//            a[x + 2][y] = 1;
//        }
//        // 火把光照范围还包括左右额外的两个点（x, y - 2）和（x, y + 2）（如果在方阵内）
//        if (y - 2 > 0) {
//            a[x][y - 2] = 1;
//        }
//        if (y + 2 <= n) {
//            a[x][y + 2] = 1;
//        }
//    }
//    // 处理萤石的位置和光照范围
//    for (int i = 0; i < t; i++) {
//        // 读取萤石的坐标(o, p)
//        scanf("%d%d", &o, &p);
//        // 萤石光照范围为以(o, p)为中心的5x5区域
//        for (int j = o - 2; j <= o + 2; j++) {
//            for (int k = p - 2; k <= p + 2; k++) {
//                // 确保坐标在方阵范围内（1 <= j <= n 且 1 <= k <= n），标记为有光（1）
//                if (j > 0 && j <= n && k > 0 && k <= n) {
//                    a[j][k] = 1;
//                }
//            }
//        }
//    }
//    // 统计方阵中无光（会生出怪物）的点的数量
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (!a[i][j]) {
//                count++;
//            }
//        }
//    }
//    // 输出无光（会生出怪物）的点的数量
//    printf("%d", count);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElemType;
//
//typedef struct node {
//	ElemType val;
//	struct node* next;
//}Node;
//
//Node* initList() {
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->val = 0;
//	head->next = NULL;
//	return head;
//}
//
//void insertHead(Node* head, ElemType val) {
//	Node* new_node = (Node*)malloc(sizeof(Node));
//	new_node->val = val;
//	new_node->next = head->next;
//	head->next = new_node;
//}
//
//Node* getTail(Node* head) {
//	Node* tail = head;
//	while (tail->next != NULL) {
//		tail = tail->next;
//	}
//	return tail;
//}
//
//Node* insertTail(Node* tail, ElemType val) {
//	Node* new_node = (Node*)malloc(sizeof(Node));
//	new_node->val = val;
//	new_node->next = NULL;
//	tail->next = new_node;
//	return new_node;
//}
//
//Node* insertPosition(Node* head, int pos, ElemType val) {
//	Node* cur = head;
//	for (int i = 0; i < pos - 1; i++) {
//		cur = cur->next;
//		if (cur == NULL) {
//			return;
//		}
//	}
//	Node* new_node = (Node*)malloc(sizeof(Node));
//	new_node->val = val;
//	new_node->next = cur->next;
//	cur->next = new_node;
//}
//
//void deleteNode(Node* head, int pos) {
//	Node* cur = head;
//	for (int i = 0; i < pos - 1; i++) {
//		cur = cur->next;
//		if (cur == NULL) {
//			return;
//		}
//	}
//	if (cur->next == NULL) {
//		return;
//	}
//	Node* del = cur->next;
//	cur->next = del->next;
//	free(del);
//}
//
//Node* findNode(Node* head, ElemType val) {
//	Node* cur = head->next;
//	while (cur != NULL) {
//		if (cur->val == val) {
//			return cur;
//		}
//		cur = cur->next;
//	}
//	printf("当前链表中没有该值\n");
//	return NULL;
//}
//
//void modifyNode(Node* head, int pos, ElemType val) {
//	Node* cur = head;
//	for (int i = 0; i < pos; i++) {
//		cur = cur->next;
//		if (cur == NULL) {
//			return;
//		}
//	}
//	cur->val = val;
//}
//
//Node* findKNodeFromEnd(Node* head, int pos) {
//	Node* fast = head;
//	Node* slow = head;
//	for (int i = 0; i < pos; i++) {
//		fast = fast->next;
//		if (fast == NULL) {
//			printf("k大于链表长度\n");
//			return NULL;
//		}
//	}
//	while (fast != NULL) {
//		fast = fast->next;
//		slow = slow->next;
//	}
//	printf("倒数第%d个节点值为: %d\n", pos, slow->val);
//	return slow;
//}
//
//int listLenth(Node* head) {
//	Node* cur = head;
//	int lenth = 0;
//	while (cur->next != NULL) {
//		lenth++;
//		cur = cur->next;
//	}
//    return lenth;
//}
//
//void listElem(Node* head) {
//	Node* cur = head->next;
//	while (cur != NULL) {
//		printf("%d ", cur->val);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//void freeList(Node* head) {
//	Node* cur = head->next;
//	Node* del;
//	while (cur != NULL) {
//		del = cur;
//		cur = cur->next;
//		free(del);
//	}
//}
//
//int main() {
//	Node* head = initList();
//	insertHead(head, 3);
//	insertHead(head, 2);
//	Node* tail = getTail(head);
//	tail = insertTail(tail, 4);
//	tail = insertTail(tail, 5);
//	insertPosition(head, 1, 1);
//	deleteNode(head, 3);
//	findNode(head, 3);
//	modifyNode(head, 2, 3);
//	listElem(head);
//	findKNodeFromEnd(head, 2);
//	return 0;
//}


// 查找最接近的元素 

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int search(int* nums, int numsSize, int target) {
//	int left = 0, right = numsSize - 1, mid;
//	while (left <= right) {
//		mid = left + (right - left) / 2;
//		if (nums[mid] > target) {
//			right = mid - 1;
//		}
//		else if (nums[mid] < target) {
//			left = mid + 1;
//		}
//		else {
//			return target;
//		}
//	}
//	if (right < 0) {
//		return nums[left];
//	}
//	if (left > numsSize - 1) {
//		return nums[right];
//	}
//	if (abs(nums[right] - target) <= abs(nums[left] - target)) {
//		return nums[right];
//	}
//	return nums[left];
//}
//int main() {
//	int n, m;
//	scanf("%d", &n);
//	int* nums = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &nums[i]);
//	}
//	scanf("%d", &m);
//	int ask;
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &ask);
//		printf("%d\n", search(nums, n, ask));
//	}
//	free(nums);
//	return 0;
//}

//计算邮资

//#include <stdio.h>
//int main() {
//	int m;
//	char c;
//	int charge = 0;
//	scanf("%d %c", &m, &c);
//	if (m <= 1000) {
//		charge += 8;
//	}
//	else {
//		m -= 1000;
//		charge += 8;
//		if (m % 500 == 0) {
//			charge += (m / 500) * 4;
//		}
//		else {
//			charge += (m / 500 + 1) * 4;
//		}
//	}
//	if (c == 'y') {
//		charge += 5;
//	}
//	printf("%d", charge);
//	return 0;
//}

//Jolly Jumpers

//#include <stdio.h>
//#include <math.h>
//int main() {
//	int n;
//	int nums[3000], gaps[3000];
//	while (scanf("%d", &n) != EOF) {
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &nums[i]);
//			if (i > 0) {
//				gaps[i - 1] = abs(nums[i] - nums[i - 1]);
//			}
//		}
//		int flag = 1, j;
//		for (int i = 1; i <= n - 1; i++) {
//			for (j = 0; j < n - 1; j++) {
//				if (gaps[j] == i) {
//					break;
//				}
//			}
//			if (j == n - 1) {
//				flag = 0;
//			}
//		}
//		if (flag) {
//			printf("Jolly\n");
//		}
//		else {
//			printf("Not jolly\n");
//		}
//	}
//	return 0;
//}

//2的n次方（高精度）

//#include <stdio.h>
//#include <string.h>
//#define LEN 100
//void clear(int a[]) {
//	for (int i = 0; i < LEN; i++) {
//		a[i] = 0;
//	}
//}
//void mul(int a[], int k, int b[]) {
//	clear(b);
//	for (int i = 0; i < LEN; i++) {
//		b[i] += a[i] * 2;
//		if (b[i] >= 10) {
//			b[i] -= 10;
//			b[i + 1] += 1;
//		}
//	}
//}
//void print(int a[]) {
//	int i;
//	for (i = LEN - 1; i >= 1; i--) {
//		if (a[i] != 0) {
//			break;
//		}
//	}
//	while (i >= 0) {
//		printf("%d", a[i--]);
//	}
//	printf("\n");
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[LEN] = { 0 }, b[LEN];
//	a[0] = 1;
//	for (int i = 0; i < n; i++) {
//		mul(a, 2, b);
//		for (int j = 0; j < LEN; j++) {
//			a[j] = b[j];
//		}
//	}
//	print(a);
//}


//和为给定数（二分查找、排序）

//#include <stdio.h>
//#include <stdlib.h>
//int nums[100][100];
//void shellsort(int a[], int len) {
//	int gap, i, j;
//	int temp;
//	for (gap = len / 2; gap > 0; gap /= 2) {
//		for (i = gap; i < len; i++) {
//			temp = a[i];
//			for (j = i - gap; j >= 0 && a[j] > temp; j -= gap) {
//				a[j + gap] = a[j];
//			}
//			a[j + gap] = temp;
//		}
//	}
//}
//int main() {
//	int n, m;
//	scanf("%d", &n);
//	int* nums = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &nums[i]);
//	}
//	scanf("%d", &m);
//	shellsort(nums, n);
//	int target;
//	for (int i = 0; i < n && nums[i] < m; i++) {
//		target = m - nums[i];
//		int left = i + 1, right = n, mid;
//		while (left <= right) {
//			mid = (left + right) / 2;
//			if (nums[mid] > target) {
//				right = mid - 1;
//			}
//			else if (nums[mid] < target) {
//				left = mid + 1;
//			}
//			else {
//				printf("%d %d", nums[i], target);
//				return 0;
//			}
//		}
//	}
//	printf("No");
//	free(nums);
//	return 0;
//}

//最接近的分数

//#include <stdio.h>
//int gcd(int x, int y) {
//	while (1) {
//		int temp = y % x;
//		if (temp == 0) {
//			return x;
//		}
//		else {
//			y = x;
//			x = temp;
//		}
//	}
//}
//int main() {
//	int n, a, b;
//	scanf("%d%d%d", &n, &a, &b);
//	int x, y, p, q;
//	p = 1, q = n;
//	for (y = 1; y <= n; y++) {
//		for (x = 1; x < y; x++) {
//			if ((x * b < y * a) && (x * q > y * p)) {
//				p = x;
//				q = y;
//			}
//			if (x * b >= y * a) {
//				break;
//			}
//		}
//	}
//	p /= gcd(p, q);
//	q /= gcd(p, q);
//	printf("%d %d\n", p, q);
//	return 0;
//}

 
//删除数组中的元素（链表）

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node {
//	int val;
//	struct node* next;
//}Node;
//
//Node* initList() {
//	Node* head = (Node*)malloc(sizeof(Node));
//	head->val = 0;
//	head->next = NULL;
//	return head;
//}
//
//Node* getTail(Node* head) {
//	Node* temp = head;
//	while (temp->next != NULL) {
//		temp = temp->next;
//	}
//	return temp;
//}
//
//Node* insertTail(Node* tail, int val) {
//	Node* new_node = (Node*)malloc(sizeof(Node));
//	new_node->val = val;
//	new_node->next = NULL;
//	tail->next = new_node;
//	return new_node;
//}
//
//void deleteKValNode(Node* head, int k) {
//	Node* cur = head;
//	Node* temp;
//	while (cur->next != NULL) {
//		temp = cur->next;
//		if (temp->val == k) {
//			cur->next = temp->next;
//			free(temp);
//		}
//		else {
//			cur = cur->next;
//		}
//	}
//}
//
//void printList(Node* head) {
//	Node* temp = head->next;
//	while (temp != NULL) {
//		printf("%d ", temp->val);
//		temp = temp->next;
//	}
//	printf("\n");
//}
//
//void freeList(Node* head) {
//	Node* cur = head;
//	Node* del = head;
//	while (cur != NULL) {
//		del = cur;
//		cur = cur->next;
//		free(del);
//	}
//}
//int main() {
//	int n, val;
//	scanf("%d", &n);
//	Node* head = initList();
//	Node* tail = getTail(head);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &val);
//		tail = insertTail(tail, val);
//	}
//	int k;
//	scanf("%d", &k);
//	deleteKValNode(head, k);
//	printList(head);
//	freeList(head);
//	return 0;
//}

//变幻的矩阵

//#include <stdio.h>
//#define MAX 10
//char a[MAX][MAX], b[MAX][MAX];
//
//
//void printArray(char a[][MAX], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%c ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int f1(char a[][MAX], char b[][MAX], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] != b[j][n - i - 1]) {
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//int f2(char a[][MAX], char b[][MAX], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] != b[n - j - 1][i]) {
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//int f3(char a[][MAX], char b[][MAX], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] != b[n - i - 1][n - j - 1]) {
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//int f4(char a[][MAX], char b[][MAX], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (a[i][j] != b[i][j]) {
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%c", &a[i][j]);
//			getchar();
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%c", &b[i][j]);
//			getchar();
//		}
//
//	}
//	if (f1(a, b, n)) {
//		printf("1");
//	}
//	else if (f2(a, b, n)) {
//		printf("2");
//	}
//	else if (f3(a, b, n)) {
//		printf("3");
//	}
//	else if (f4(a, b, n)) {
//		printf("4");
//	}
//	else {
//		printf("5");
//	}
//	return 0;
//}

//进制转换

//#include <stdio.h>
//#include <string.h>
//#define N 100
//
//char nums[17] = "0123456789ABCDEF";
//int a[N];
//char s[N];
//void scaleConversion(int n, char* s, int m) {
//	int len = strlen(s);
//	for (int i = 0; i < len; i++) {
//		if (s[i] >= '0' && s[i] <= '9') {
//			a[i] = s[i] - '0';
//		}
//		else {
//			a[i] = s[i] - 'A' + 10;
//		}
//	}
//	long long x = 0;
//	for (int i = 0; i < len; i++) {
//		x = x * n + a[i];
//	}
//	char ans[N];
//	int index = 0;
//	while(x) {
//		ans[index++] = nums[x % m];
//		x /= m;
//	}
//	while (--index >= 0) {
//		printf("%c", ans[index]);
//	}
//}
//int main() {
//	int n, m;
//	scanf("%d\n%s\n%d", &n, s, &m);
//	scaleConversion(n, s, m);
//	return 0;
//}


//#include <stdio.h>
//#define N 50005
//int a[N], l, n, m;
//
//int check(int k) {
//	int res = 0, lst = 0;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] - a[lst] < k) {
//			res++;
//			continue;
//		}
//		lst = i;
//	}
//	if (l - a[lst] < k) {
//		res++;
//	}
//	return res <= m;
//}
//int main() {
//	scanf("%d%d%d", &l, &n, &m);
//	for(int i = 1; i <= n; i++){
//		scanf("%d", &a[i]);
//	}
//	int l = 0, r = 1e9 + 5, mid;
//	while (l + 1 != r) {
//		mid = (l + r) / 2;
//		if (check(mid)) {
//			l = mid;
//		}
//		else {
//			r = mid;
//		}
//	}
//	printf("%d", l);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define N 200005
//int a[N];
//int cmp(const void* a, const void* b) {
//	return *(int*)a - *(int*)b;
//}
//int dFindLeft(int a[], int n,int k) {
//	int l = 0, r = n + 1, mid;
//	while (l + 1 != r) {
//		mid = (l + r) / 2;
//		if (a[mid] >= k) {
//			r = mid;
//		}
//		else {
//			l = mid;
//		}
//	}
//	return r;
//}
//int dFindRight(int a[], int n, int k) {
//	int l = 0, r = n + 1, mid;
//	while (l + 1 != r) {
//		mid = (l + r) / 2;
//		if (a[mid] <= k) {
//			l = mid;
//		}
//		else {
//			r = mid;
//		}
//	}
//	return l;
//}
//int main() {
//	int n, c;
//	long long ans = 0;
//	scanf("%d%d", &n, &c);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	qsort(a + 1, n, sizeof(int), cmp);
//	for (int i = 1; i <= n; i++) {
//		int targ = a[i] + c;
//		int l = dFindLeft(a, n, targ);
//		int r = dFindRight(a, n, targ);
//		ans += r - l + 1;
//	}
//	printf("%lld", ans);
//	return 0;
//}


//#include <stdio.h>
//#define N 50005
//
//int a[N], l, n, m;
//int check(int k) {
//	int res = 0, lst = 0;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] - a[lst] < k) {
//			res++;
//			continue;
//		}
//		lst = i;
//	}
//	if (l - a[lst] < k) {
//		res++;
//	}
//	return res <= m;
//}
//int main() {
//	scanf("%d%d%d", &l, &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	int l = 0, r = 1e9 + 5, mid;
//	while (l + 1 != r) {
//		mid = (l + r) / 2;
//		if (check(mid)) {
//			l = mid;
//		}
//		else {
//			r = mid;
//		}
//	}
//	printf("%d", l);
//	return 0;
//}


//#include <stdio.h>
//#define N 1000005
//
//int a[N], n, m;
//int check(int k) {
//	long long res = 0;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] > k) {
//			res += a[i] - k;
//		}
//	}
//	return res >= m;
//}
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a[i]);
//	}
//	int l = 0, r = 4e5 + 5, mid;
//	while (l + 1 != r) {
//		mid = (l + r) / 2;
//		if (check(mid)) {
//			l = mid;
//		}
//		else {
//			r = mid;
//		}
//	}
//	printf("%d", l);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#define N 1000005
//
//char s1[N], s2[N];
//int next[N];
//
//int main() {
//	scanf("%s\n%s", s1 + 1, s2 + 1);
//	int n = strlen(s1 + 1), m = strlen(s2 + 1);
//	for (int i = 2, j = 0; i <= m; i++) {
//		while (j && s2[i] != s2[j + 1]) {
//			j = next[j];
//		}
//		if (s2[i] == s2[j + 1]) {
//			j++;
//		}
//		next[i] = j;
//	}
//	for (int i = 1, j = 0; i <= n; i++) {
//		while (j && s1[i] != s2[j + 1]) {
//			j = next[j];
//		}
//		if (s1[i] == s2[j + 1]) {
//			j++;
//		}
//		if (j == m) {
//			printf("%d\n", i - j + 1);
//		}
//	}
//	for (int i = 1; i <= m; i++) {
//		printf("%d ", next[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode {
//    int data;
//    struct ListNode* next;
//};
//
//struct ListNode* readlist();
//struct ListNode* deletem(struct ListNode* L, int m);
//void printlist(struct ListNode* L)
//{
//    struct ListNode* p = L;
//    while (p) {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int m;
//    struct ListNode* L = readlist();
//    scanf("%d", &m);
//    L = deletem(L, m);
//    printlist(L);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//struct ListNode* readlist() {
//    typedef struct ListNode Node;
//    Node* hummyHead = (Node*)malloc(sizeof(Node));
//    hummyHead->next = NULL;
//    Node* tail = hummyHead;
//    int n;
//    scanf("%d", &n);
//    while (n != -1) {
//        Node* newNode = (Node*)malloc(sizeof(Node));
//        newNode->data = n;
//        newNode->next = NULL;
//        tail->next = newNode;
//        tail = newNode;
//        scanf("%d", &n);
//    }
//    Node* head = hummyHead->next;
//    free(hummyHead);
//    return head;
//}
//
//struct ListNode* deletem(struct ListNode* L, int m) {
//    typedef struct ListNode Node;
//    Node* hummyHead = (Node*)malloc(sizeof(Node));
//    hummyHead->next = L;
//    Node* cur = hummyHead;
//    while (cur && cur->next) {
//        if (cur->next->data == m) {
//            Node* del = cur->next;
//            cur->next = del->next;
//            free(del);
//        }
//        else {
//            cur = cur->next;
//        }
//    }
//    L = hummyHead->next;
//    free(hummyHead);
//    return L;
//}


//#include <stdio.h>
//
//int main() {
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1) {
//		printf("小端模式\n");
//	}
//	else {
//		printf("大端模式\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//union num {
//	int a;
//	char c;
//}n;
//int main() {
//	n.a = 1;
//	if (n.c == 1) {
//		printf("小端模式\n");
//	}
//	else {
//		printf("大端模式\n");
//	}
//}































