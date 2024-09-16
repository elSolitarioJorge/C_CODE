#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int max(int arr[], int n);
//int min(int arr[], int n);
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d", max(arr,n) - min(arr,n));
//	return 0;
//}
//int max(int arr[],int n)
//{
//	int max = arr[0];
//	for (int i = 1; i < n; i++)
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
//	int min = arr[0];
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
//int lh(int arr[], int n);
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10000];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d", lh(arr, n));
//	return 0;
//}
//int lh(int arr[], int n)
//{
//	int num = 1, max = 1;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i + 1] == arr[i] + 1)
//		{
//			num++;
//		}
//		else
//		{
//			if (num > max)
//			{
//				max = num;
//			}
//			num = 1;
//		}
//	}
//	return max;
//}

//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		int f = 1;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				f = 0;
//				break;
//			}
//		}
//		if (f && n % i == 0)
//		{
//			printf("%d", n / i);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//void Square(int n, int arr[]);
//void Triangle(int n, int arr[]);
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int arr[81];
//	arr[0] = 1;
//	for (int i = 1; i < 81; i++)
//	{
//		arr[i] = arr[i - 1] + 1;
//	}
//	Square(n, arr);
//	printf("\n");
//	Triangle(n, arr);
//	return 0;
//}
//void Square(int n, int arr[])
//{
//	int m = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%02d", arr[m++]);
//		}
//		printf("\n");
//	}
//}
//void Triangle(int n, int arr[])
//{
//	int m = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int x = 0; x < 2 * (n - i - 1); x++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%02d", arr[m++]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//double score(int n, int arr[]);
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int arr[1000];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%.2lf", score(n, arr));
//	return 0;
//}
//double score(int n, int arr[])
//{
//	int max = arr[n-1];
//	int min = arr[0];
//	int sum = 0;
//	int a = 0, b = n - 1;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			a = i;
//		}
//	}
//	for (int j = n - 2; j >= 0; j--)
//	{
//		if (arr[j] > max)
//		{
//			max = arr[j];
//			b = j;
//		}
//	}
//	for (int x = 0; x < n; x++)
//	{
//		if (x != a && x != b)
//		{
//			sum += arr[x];
//		}
//	}
//	return (double)sum / (n - 2);
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int x=0, k=0;
//	int m = n / (52 * 7);
//	for (int i = 1;; i++)
//	{
//		for (int j = 100; j > 0; j--)
//		{
//			if (3 * i + j == m)
//			{
//				x = j;
//				k = i;
//				break;
//			}
//		}
//		if (x != 0)
//		{
//			break;
//		}
//	}
//	printf("%d\n%d", x, k);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[13];
//	int a = 0, b = 0;//a 代表手中剩的钱 b代表存的钱
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
//			printf("%.0lf", b * 1.2 + a);
//			printf("%d", (int)(1.2 * b) + a);
//			//printf("%d", b * 1.2 + a);//错误写法
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int num = 0;
//		for (int j = i; j >= 0; j--)
//		{
//			if (arr[i] > arr[j])
//			{
//				num++;
//			}
//		}
//		printf("%d ", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	int a[100];
//	scanf("%d", &a[0]);
//	while (a[i]!=0)
//	{
//		i++;
//		scanf("%d", &a[i]);
//	}
//	for (int j = i - 1; j >= 0; j--)
//	{
//		printf("%d ", a[j]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n, arr[1000];
//	int i = 0;
//	scanf("%d", &n);
//	arr[0] = n;
//	while (arr[i] != 1)
//	{
//		i++;
//		if (arr[i - 1] % 2 != 0)
//		{
//			arr[i] = arr[i-1] * 3 + 1;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] / 2;
//		}
//	}
//	for (int j = i; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int l, m, u, v, sum=0;
//	scanf("%d%d", &l, &m);
//	int tree[10000] = { 0 };
//	for (int i = 0; i < l + 1; i++)
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
//	for (int i = 0; i < l + 1; i++)
//	{
//		if (tree[i] == 1)
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int N, num=0;
//	int arr[1000][3];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i + 1; j < N; j++)
//		{
//			int m = arr[i][0] - arr[j][0];
//			int n = arr[i][1] - arr[j][1];
//			int o = arr[i][2] - arr[j][2];
//			int sum = m + n + o;
//			if (m >= -5 && m <= 5 && n >= -5 && n <= 5 && o >= -5 && o <= 5 && sum >= -10 && sum <= 10)
//			{
//				num++;
//			}
//		}
//	}
//	printf("%d", num);
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int main(void)
//{
//	int N, num=0;
//	int arr[1000][3];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i + 1; j < N; j++)
//		{
//			int m = abs(arr[i][0] - arr[j][0]);
//			int n = abs(arr[i][1] - arr[j][1]);
//			int o = abs(arr[i][2] - arr[j][2]);
//			int sum = abs(arr[i][0] + arr[i][1] + arr[i][2] - arr[j][0] - arr[j][1] - arr[j][2]);
//			if (m<=5&&n<=5&&o<=5&&sum<=10)
//			{
//				num++;
//			}
//		}
//	}
//	printf("%d", num);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int w, x, h, q, sum = 0;
//	scanf("%d%d%d%d", &w, &x, &h, &q);
//	int arr[21][21][21] = { 0 };
//	for (int a = 1; a <= w; a++)
//	{
//		for (int b = 1; b <= x; b++)
//		{
//			for (int c = 1; c <= h; c++)
//			{
//				arr[a][b][c] = 1;
//			}
//		}
//	}
//	for (int m = 0; m < q; m++)
//	{
//		int x1, y1, z1, x2, y2, z2;
//		scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
//		for (int i = x1; i <= x2; i++)
//		{
//			for (int j = y1; j <= y2; j++)
//			{
//				for (int k = z1; k <= z2; k++)
//				{
//					arr[i][j][k] = 0;
//				}
//			}
//		}
//	}
//	for (int a = 1; a <= w; a++)
//	{
//		for (int b = 1; b <= x; b++)
//		{
//			for (int c = 1; c <= h; c++)
//			{
//				if (arr[a][b][c] == 1)
//				{
//					sum++;
//				}
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int a[7], b[7];
//	int j0 = 0, j1 = 0, j2 = 0, j3 = 0, j4 = 0, j5 = 0, j6 = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int m = 0; m < n; m++)
//	{
//		int sum = 0;
//		for (int j = 0; j < 7; j++)
//		{
//			scanf("%d", &b[j]);
//			for (int i = 0; i < 7; i++)
//			{
//				if (b[j] == a[i])
//				{
//					sum++;
//				}
//			}
//		}
//		switch (sum)
//		{
//		case(1):
//			j6++;
//			break;
//		case(2):
//			j5++;
//			break;
//		case(3):
//			j4++;
//			break;
//		case(4):
//			j3++;
//			break;
//		case(5):
//			j2++;
//			break;
//		case(6):
//			j1++;
//			break;
//		case(7):
//			j0++;
//			break;
//		}
//	}
//	printf("%d %d %d %d %d %d %d", j0, j1, j2, j3, j4, j5, j6);
//	return 0;
//}
  
//#include <stdio.h>
//int main(void)
//{
//	int N;
//	scanf("%d", &N);
//	int arr[40][40] = { 0 };
//	int x = 1, y = N / 2 + 1;
//	arr[x][y] = 1;
//	for (int i = 2; i <= N * N; i++)
//	{
//		if (x == 1 && y != N)
//		{
//			x = N;
//			y += 1;
//			arr[x][y] = i;
//		}
//		else if (x != 1 && y == N)
//		{
//			x -= 1;
//			y = 1;
//			arr[x][y] = i;
//		}
//		else if (x == 1 && y == N)
//		{
//			x += 1;
//			arr[x][y] = i;
//		}
//		else
//		{
//			if (arr[x - 1][y + 1] == 0)
//			{
//				x -= 1;
//				y += 1;
//				arr[x][y] = i;
//			}
//			else
//			{
//				x += 1;
//				arr[x][y] = i;
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			printf("%03d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
//XXX . ..X . XXX . XXX . X.X . XXX . XXX . XXX . XXX . XXX
//X.X . ..X . ..X . ..X . X.X . X.. . X.. . ..X . X.X . X.X
//X.X . ..X . XXX . XXX . XXX . XXX . XXX . ..X . XXX . XXX
//X.X . ..X . X.. . ..X . ..X . ..X . X.X . ..X . X.X . ..X
//XXX . ..X . XXX . XXX . ..X . XXX . XXX . ..X . XXX . XXX
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	char num[101];
//	scanf("%s", num);
//	char ch[10][5][4] =
//	{
//		{
//			'X','X','X','\0',
//			'X','.','X','\0',
//			'X','.','X','\0',
//			'X','.','X','\0',
//			'X','X','X','\0'
//		},
//		{
//			'.','.','X','\0',
//			'.','.','X','\0',
//			'.','.','X','\0',
//			'.','.','X','\0',
//			'.','.','X','\0'
//		},
//		{
//			'X','X','X','\0',
//			'.','.','X','\0',
//			'X','X','X','\0',
//			'X','.','.','\0',
//			'X','X','X','\0'
//		},
//		{
//			'X','X','X','\0',
//			'.','.','X','\0',
//			'X','X','X','\0',
//			'.','.','X','\0',
//			'X','X','X','\0'
//		},
//		{
//			'X','.','X','\0',
//			'X','.','X','\0',
//			'X','X','X','\0',
//			'.','.','X','\0',
//			'.','.','X','\0'
//		},
//		{
//			'X','X','X','\0',
//			'X','.','.','\0',
//			'X','X','X','\0',
//			'.','.','X','\0',
//			'X','X','X','\0'
//		},
//		{
//			'X','X','X','\0',
//			'X','.','.','\0',
//			'X','X','X','\0',
//			'X','.','X','\0',
//			'X','X','X','\0'
//		},
//		{
//			'X','X','X','\0',
//			'.','.','.','\0',
//			'.','.','X','\0',
//			'.','.','X','\0',
//			'.','.','X','\0'
//		},
//		{
//			'X','X','X','\0',
//			'X','.','X','\0',
//			'X','X','X','\0',
//			'X','.','X','\0',
//			'X','X','X','\0'
//		},
//		{
//			'X','X','X','\0',
//			'X','.','X','\0',
//			'X','X','X','\0',
//			'.','.','X','\0',
//			'X','X','X','\0'
//		}
//	};
//	for(int i = 0; i<5;i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < 3; k++)
//			{
//				printf("%c ", ch[num[j] - '0'][i][k]);
//			}
//			if (j != n - 1)
//			{
//				printf(". ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	char num[101];
//	scanf("%s", num);
//	char ch[10][5][3] =
//	{
//		{
//			'X','X','X',
//			'X','.','X',
//			'X','.','X',
//			'X','.','X',
//			'X','X','X'
//		},
//		{
//			'.','.','X',
//			'.','.','X',
//			'.','.','X',
//			'.','.','X',
//			'.','.','X'
//		},
//		{
//			'X','X','X',
//			'.','.','X',
//			'X','X','X',
//			'X','.','.',
//			'X','X','X'
//		},
//		{
//			'X','X','X',
//			'.','.','X',
//			'X','X','X',
//			'.','.','X',
//			'X','X','X'
//		},
//		{
//			'X','.','X',
//			'X','.','X',
//			'X','X','X',
//			'.','.','X',
//			'.','.','X'
//		},
//		{
//			'X','X','X',
//			'X','.','.',
//			'X','X','X',
//			'.','.','X',
//			'X','X','X'
//		},
//		{
//			'X','X','X',
//			'X','.','.',
//			'X','X','X',
//			'X','.','X',
//			'X','X','X'
//		},
//		{
//			'X','X','X',
//			'.','.','.',
//			'.','.','X',
//			'.','.','X',
//			'.','.','X'
//		},
//		{
//			'X','X','X',
//			'X','.','X',
//			'X','X','X',
//			'X','.','X',
//			'X','X','X'
//		},
//		{
//			'X','X','X',
//			'X','.','X',
//			'X','X','X',
//			'.','.','X',
//			'X','X','X'
//		}
//	};
//	for(int i = 0; i<5;i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < 3; k++)
//			{
//				printf("%c", ch[num[j] - '0'][i][k]);
//			}
//			if (j != n - 1)
//			{
//				printf(".");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
//#include <stdio.h>
//int main(void)
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[10] = { 0 };
//	for (int i = m; i <= n; i++)
//	{
//		for (int j = i; j > 0; j /= 10)
//		{
//			arr[j % 10]++;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
 
//#include <stdio.h>
//int main(void)
//{
//	int n, count = 0;
//	scanf("%d", &n);
//	int arr[100], b[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < n; k++)
//			{
//				if (k != i && k != j && i != j && arr[k] + arr[j] == arr[i])
//				{
//					b[i] = 1;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (b[i] == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}




