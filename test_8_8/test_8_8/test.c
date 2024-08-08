#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组-一组相同类型元素的集合
//在C99标准之前，数组的大小必须是常量或者常量表达式
//在C99之后，数组的大小可以是变量，为了支持变长数组
//int main()
//{
//	int arr[10] = { 1,2,3, };//未完全初始化，剩余元素默认初始化为0
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3 };
//	char ch1[10] = { 'a','b','c'};
//	char ch2[10] = "abc";
//	char ch3[] = { 'a','b','c' };
//	char ch4[] = "abc";
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//[]-下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	for (i = sz - 1; i >= 0; i--)
//		printf("%d ", arr[i]);
//	//打印数组的每个元素的地址
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int arr1[3][4] = { {2,3},{3,4},{5,6} };
//	int arr2[][4] = { {1,2,3,4},{5,6} };//行可以省略，列不能
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	printf("%d\n", arr[2][3]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//数组传参的时候，形参有两种写法：
//1.数组
//2.指针
//void bubble_sort(int arr[],int sz)
//{
//  //趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//      //一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{ 
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	//把数组的数据排成升序
//    //泡沫排序的算法，对数组进行排序
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}		

//数组名确实能表示首元素的地址
//但是有两个例外
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr + 1);
//	printf("-----------------------\n");
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("-----------------------\n");
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//行数
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//列数
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	//二维数组的数组名也表示数组首元素（第一行数组）的地址
//	return 0;
//}
















































