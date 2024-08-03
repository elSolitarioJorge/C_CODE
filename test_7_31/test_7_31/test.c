#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);
//	float c = 7 / 2.0;
//	printf("%f\n", c);
//	printf("%.1f", c);//f前加.n打印小数点后n位
//	// / 除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
//	int b = 7 % 2;//% 取模 a的余数
//	//取模操作符的两端只能是整数
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	a = a + 3;
//	a += 3;//简化
//	a -= 3;
//	return 0;
//}

//C语言中 0表示假 非0表示真
//int main()
//{
//	int flag = 0;
//	if (!flag)//! 逻辑反操作
//	{
//		printf("hehe\n");
//	}
//	int a = 10;
//	int b = -a;
//	printf("%d\n", b);
//
//	return 0;
//}

//sizeof是单目操作符 计算结果单位是字节（byte）
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10 数组的元素个数
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，后++
//	              //int b=a=10 ; a=a+1=11
//	//int b = ++a;//前置++，先++，后使用
//	              //a=a+1=11; int b=a=11
//	//int b = a--;//b=a=10; a=a-1=9
//	//int b = --a;//a=a-1=9; b=a=9
//	printf("%d\n", b);
//	printf("%d\n", a);
//}

//int main()
//{
//	int a =(int) 3.14;//（类型） 强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//&& 逻辑与 并且
//	//|| 逻辑或 或者
//	int a = 0;
//	int b = 20;
//	//if (a || b)
//	if(a&&b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a > b ? a: b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]就是下标引用操作符  arr和3就是[]的操作数
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = Add(2, 3);//()是函数调用操作符，Add，2，3都是()的操作数
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//自动变量 auto 自动
//
//	return 0;
//}


//typedef 对类型重命名
//typedef unsigned int unit;
//typedef struct Node
//{
//	int data;
//	struct Node* nest;
//}Node;
//int main()
//{
//	unsigned int num = 0;
//	unit num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}


//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
//void test()
//{
//	//int a = 1;
//	static int a = 1;//static修饰局部变量时，局部变量出了作用域，不会销毁 ；本质是改变了变量的存储位置
//	                 //影响了变量的生命周期，生命周期变长，和程序的生命周期一样
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//声明外部符号
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//修饰函数
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//寄存器变量
//	register int num = 3;//建议3存放在寄存器中
//	return 0;
//}

//#define 定义标识符常量
//#define NUM 100
//int main()
//{
//	int n = NUM;
//	printf("%d\n", n);
//	printf("%d\n", NUM);
//	int arr[NUM] = { 0 };
//	return 0;
//}

//#define 定义宏
//宏是有参数的
//#define ADD(x,y) ((x)+(y))
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);//替换到int c = ((a)+(b))
//	printf("%d\n", c);
//	return 0;
//}







































