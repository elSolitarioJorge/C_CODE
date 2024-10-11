#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int h, count = 0;
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &h);
//	for (int i = 0; i < 10; i++)
//	{
//		if (h + 30 >= a[i])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int jiec(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * jiec(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", jiec(n));
//	return 0;
//}

//#include <stdio.h>
//int tree[10001] = { 0 };
//int main()
//{
//	int n, m, a, b, sum = 0;
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

//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int prime(int n)
//{
//	if (n < 2)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 2; i <= sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//int main()
//{
//	char word[100];
//	int a[26] = { 0 };
//	scanf("%s", word);
//	for (int i = 0; i < strlen(word); i++)
//	{
//		a[word[i] - 'a']++;
//	}
//	int maxn = 0, minn = 100;
//	for (int i = 0; i < 26; i++)
//	{
//		if (a[i] > maxn)
//		{
//			maxn = a[i];
//		}
//		if (a[i] != 0 && a[i] < minn)
//		{
//			minn = a[i];
//		}
//	}
//	if (prime(maxn - minn))
//	{
//		printf("Lucky Word\n%d", maxn - minn);
//	}
//	else
//	{
//		printf("No Answer\n0");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, a[100];
//	int p = 0;
//	scanf("%d", &n);
//	if (n)
//	{
//		for (int i = n; i >= 0; i--)
//		{
//			scanf("%d", &a[i]);
//			if (i)
//			{
//				if (i == n)
//				{
//					if (a[i] == 1)
//					{
//						printf("x^%d", i);
//					}
//					else if (a[i] == -1)
//					{
//						printf("-x^%d", i);
//					}
//					else if (a[i] == 0);
//					else
//					{
//						printf("%dx^%d", a[i], i);
//					}
//
//				}
//				else if (a[i] > 0 && a[i] != 1)
//				{
//					printf("+%dx^%d", a[i], i);
//				}
//				else if (a[i] == 1)
//				{
//					printf("+x^%d", i);
//				}
//				else if (a[i] == -1)
//				{
//					printf("-x^%d", i);
//				}
//				else if (a[i] == 0);
//				else
//				{
//					printf("%dx^%d", a[i], i);
//				}
//			}
//			else
//			{
//				if (a[i] > 0 && a[i] != 1)
//				{
//					printf("+%d", a[i]);
//				}
//				else if (a[i] == 1)
//				{
//					printf("+1");
//				}
//				else if (a[i] < 0)
//				{
//					printf("%d", a[i]);
//				}
//			}
//		}
//		int tmp = 1;
//		for (int i = 0; i <= n; i++)
//		{
//			if (a[i])
//			{
//				tmp = 0;
//				break;
//			}
//		}
//		if (tmp)
//		{
//			printf("0");
//		}
//	}
//	else
//	{
//		scanf("%d", &a[0]);
//		printf("%d", a[0]);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int n, a[100];
//	int p = 0;
//	scanf("%d", &n);
//	for (int i = n; i > 1; i--)
//	{
//		scanf("%d", &a[i]);
//		if (p==0&&a[i] != 0)
//		{
//			p = i;
//		}
//		if (p)
//		{
//			if (i == p)
//			{
//				if (a[i] == 1)
//				{
//					printf("x^%d", i);
//				}
//				else if (a[i] == -1)
//				{
//					printf("-x^%d", i);
//				}
//				else
//				{
//					printf("%dx^%d", a[i], i);
//				}
//			}
//			else if (a[i] == 1)
//			{
//				printf("+x^%d", i);
//			}
//			else if (a[i] == -1)
//			{
//				printf("-x^%d", i);
//			}
//			else if (a[i] > 0)
//			{
//				printf("+%dx^%d", a[i], i);
//			}
//			else if (a[i] < 0)
//			{
//				printf("%dx^%d", a[i], i);
//			}
//		}
//	}
//	if (n >= 1)
//	{
//		scanf("%d", &a[1]);
//		int s = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			if (a[i])
//			{
//				s = 1;
//				break;
//			}
//		}
//		if (s)
//		{
//			if (a[1] == 1)
//			{
//				printf("+x");
//			}
//			else if (a[1] == -1)
//			{
//				printf("-x");
//			}
//			else if (a[1] > 0)
//			{
//				printf("+%dx", a[1]);
//			}
//			else if (a[1] < 0)
//			{
//				printf("%dx", a[1]);
//			}
//		}
//		else
//		{
//			if (a[1] == 1)
//			{
//				printf("x");
//			}
//			else if (a[1] == -1)
//			{
//				printf("-x");
//			}
//			else if (a[1])
//			{
//				printf("%dx", a[1]);
//			}
//		}
//	}
//	scanf("%d", &a[0]);
//	int tmp = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i])
//		{
//			tmp = 1;
//			break;
//		}
//	}
//	if (tmp)
//	{
//		if (a[0] > 0)
//		{
//			printf("+%d", a[0]);
//		}
//		else if (a[0] < 0)
//		{
//			printf("%d", a[0]);
//		}
//	}
//	else
//	{
//		printf("%d", a[0]);
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int main() {
//	char str1[] = "Hello, 3G!";
//	char str2[20] = "Hello";
//	char str3[20] = { 'H', 'e', 'l', 'l', 'o' };
//	printf("strlen(str1) = %zu\n", strlen(str1));
//	printf("sizeof(str1) = %zu\n", sizeof(str1));
//	printf("strlen(str2) = %zu\n", strlen(str2));
//	printf("sizeof(str2) = %zu\n", sizeof(str2));
//	printf("strlen(str3) = %zu\n", strlen(str3));
//	printf("sizeof(str3) = %zu\n", sizeof(str3));
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//
//int main() {
//	unsigned char i = 5;
//	while (i >= 0) {
//		printf("%d ", i);
//		i--;
//		Sleep(100);
//	}
//	return 0;
//}


//#include <stdio.h>
//#define A "Welcome to join 3G!\n"
//#define B "Hello!"
//#define C(x) ((x)+4)
//#define N 4
//#define Y(n) ((N+2)*n)
//int main() {
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	printf("%s %d%d", B, printf(A), C(printf(A)));
//}

//#include <stdio.h>
//
//#define A "Welcome to join 3G!\n" // 定义字符串宏 A
//#define B "Hello!"                 // 定义字符串宏 B
//#define C(x) ((x) + 4)            // 定义宏 C，接受一个参数 x，并返回 x + 4
//#define N 4                       // 定义常量 N，值为 4
//#define Y(n) ((N + 2) * (n))      // 定义宏 Y，接受一个参数 n，返回 (N + 2) * n
//
//int main() {
//    int z = 2 * (N + Y(5 + 1)); // 计算 z 的值
//    printf("%d\n", z);          // 打印 z 的值
//    printf("%s %d%d", B, printf(A), C(printf(A))); // 打印 B，字符串 A 和 C(printf(A)) 的结果
//}

//#include <stdio.h>
//int a = 10;
//void func() {
//	int a = 20, c = 40;
//	static int b = 30;
//	b++;
//	c++;
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//}
//int main() {
//	func();
//	func();
//	printf("a = %d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int count = -1;
//int calculate(int num) {
//	while (1) {
//		switch (num) {
//		case 0:
//			num = (num ^ 10) + 10;
//		case 31:
//			num = (num | 0);
//			break;
//		case 9:
//			num += 6;
//			break;
//		case 20:
//			num = num >> 1;
//			num -= 7;
//			break;
//		case 3:
//			count += num;
//			num = (num ^ 7) + 5;
//			break;
//		case 15:
//			num += count++;
//			count = count << 3;
//			break;
//		case 10:
//			return (1 << ++num) - count;
//		default:
//			num = (num & 1) ? num + 1 : num - 4;
//			break;
//		}
//	}
//}
//int main() {
//	int start = 0;
//	int y = calculate(start);
//	printf("answer == %d\n", y);
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	//简述这段代码的输出结果，并解释原因
//	int values[] = { 10, 20, 30, 40, 50 };
//	int* ptrArr[5] = { 0 };
//	int(*arrPtr)[5] = &values;
//	for (int i = 0; i < 5; i++) {
//		ptrArr[i] = &values[i];
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *ptrArr[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", (*arrPtr)[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	//简述这段代码的输出结果，并解释原因
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)(*(arr + 1));
//	printf("*(ptr1- 1) = %d\n", *(ptr1 - 1));
//	printf("*(ptr2 + 7) = %d\n", *(ptr2 + 7));
//	printf("*(arr[0] + sizeof(int) * 11) = %d\n", *(arr[0] + 11));
//	printf("*(arr[2] + 3) = %d\n", *(arr[2] + 3));
//	printf(" *(*(arr+2) + 3) = %d\n", *(*(arr + 2) + 3));
//	printf("*(*(&arr[1] + 1) + 3) = %d\n", *(*(&arr[1] + 1) + 3));
//	return 0;
//}

//#include <stdio.h>
//int function(int n) {
//	if (n < 5) {
//		return n;
//	}
//	else {
//		return function(n - 1) + function(n - 3);
//	}
//}
//int main() {
//	int n = 10;
//	printf("%d\n", function(n));
//	return 0;
//}

//#include <stdio.h>
//#define A "Welcome to join 3G!\n"
//#define B "Hello!"
//#define C(x) ((x)+4)
//#define N 4
//#define Y(n) ((N+2)*n)
//int main() {
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	printf("%s %d%d", B, printf(A), C(printf(A)));
//}


//#include <stdio.h>
//#define INT_PTR int* 
//#define CHAR_PTR char*
//typedef int* int_ptr;
//typedef char* char_ptr;
//struct MyData {
//	int i;
//	char c;
//	INT_PTR iptr1, iptr2;
//	int_ptr iptr3, iptr4;
//	double d;
//};
//union MyUnion {
//	int i;
//	char c[20];
//	CHAR_PTR cptr1, cptr2;
//	char_ptr cptr3, cptr4;
//	float d;
//};
//int main() {
//	printf("Size of MyData: %zu\n", sizeof(struct MyData));
//	printf("Size of MyUnion: %zu\n", sizeof(union MyUnion));
//	return 0;
//} 


//#include <stdio.h>
//int main() {
//	//简述这段代码的输出结果，并解释原因
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)(*(arr + 1));
//	printf("*(ptr1- 1) = %d\n", *(ptr1 - 1));
//	printf("*(ptr2 + 7) = %d\n", *(ptr2 + 7));
//	printf("*(arr[0] + sizeof(int) * 11) = %d\n", *(arr[0] + 11));
//	printf("*(arr[2] + 3) = %d\n", *(arr[2] + 3));
//	printf(" *(*(arr+2) + 3) = %d\n", *(*(arr + 2) + 3));
//	printf("*(*(&arr[1] + 1) + 3) = %d\n", *(*(&arr[1] + 1) + 3));
//	printf("%p\n%p", ptr2, *(arr + 1));
//	return 0;
//}
 

//#include <stdio.h>
//#define A "Welcome to join 3G!\n"
//#define B "Hello!"
//#define C(x) ((x)+4)
//#define N 4
//#define Y(n) ((N+2)*n)
//int main() {
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	printf("%s %d%d", B, printf(A), C(printf(A)));
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
//	int i = 0;
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
//	int n;
//	scanf("%d", &n);
//	int a[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	bubble_sort(a, n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}