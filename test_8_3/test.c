#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout<<\"Hello world!\"<<endl;");
//	return 0;
//}

//找最大数
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//计算球体积
//int main()
//{
//    double r = 0.0;
//	double V = 0.0;
//	scanf("%lf", &r);
//	V = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf\n", V);
//	return 0;
//}

//计算体重指数
//int main()
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d", &weight, &high);
//	double BMI = weight / (high / 100.0) / (high / 100.0);
//	printf("%.2lf\n", BMI);
//	return 0;
//}

//打印1-10
//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}

//For循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		printf("hehe\n");
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = 12;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//for循环的判断部分省略意味着判断会恒成立（死循环）
//
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()                                       
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()                                       
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
 
 //do_while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		//i++;
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//计算n的阶乘
//1*2*3...*n
// 
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算 1!+2!+3!+......+10!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		for (i = 1,ret=1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// 
//优化
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//折半/二分查找
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;//防止溢出
//		if (arr[mid] < k)
//		{
//			left =  mid + 1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("找到了，下标为:%d\n", mid);
//			break;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//Hello world!!!!
//###############
//H#############!
//He###########!!
//......
//Hello world!!!!
//int main()
//{
//	char arr1[] = "Hello world!!!!";
//	char arr2[] = "###############";
//	                             //char buf[] = "abc";//[a b c \0] 4
//	int left = 0;
//	int right = strlen(arr1) - 1;//int right = sizeof(arr1)/sizeof(arr1[0])-2
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//#include <windows.h>
//		//清空屏幕
//		system("cls");//#include <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

//编写代码实现:模拟用户登陆情景，并且只能登陆三次(只允许输入三次密码，如果密码正确则
//提示登陆成功，如果三次均输入错误，则退出程序)
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串:abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)//strcmp  #include <string.h>
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//
//	return 0;
//}

 