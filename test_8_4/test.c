#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
////电脑产生一个随机数（1-100)
////猜数字（猜大了/猜小了）
////直到猜对，结束
// void menu()
//{
//	printf("*****************************\n");
//	printf("********   1. play   ********\n");
//	printf("********   0. exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	int guess = 0;
//	//RAND_MAX (32767)
//	//1.生成随机数
//	int ret = rand()%100+1;//rand 生成随机数的函数 范围(0-RAND_MAX)
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{1
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
////指针
////int *p = NULL;
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输出：我是猪，就取消关机
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在60秒内关机，如果输入:我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在60秒内关机，如果输入:我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr, 'x', 3);
//	memset(arr+6, 'y', 2);
//	printf("%s\n", arr);
//	return 0;
//}

////函数的定义
//int get_max(int x, int y)
//{
//	return(x > y ? x: y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//函数的调用
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//////写一个函数可以交换两个整型变量的内容
////void Swap(int x, int y)//x y形式参数
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不会影响实参
//int Swap(int* x, int* y)
//{
//	int z = *x;//z=a
//	*x = *y;//a=b
//	*y = z;//b=z
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:>a=%d b=%d\n", a, b);
//	//a和b叫实参
//	Swap(&a, &b);
//	printf("交换后:>a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//直接改
//	*p = 30;//间接改
//	return 0;
//}















































































































































































