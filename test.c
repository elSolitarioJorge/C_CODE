#define _CRT_SECURE_NO_WARNINGS
//C语言代码中一定要有main函数
//主函数

//printf是一个库函数
//专门用来打印数据的

//运营代码：
//CTRL+F5
//
//std - standard -标准
//i - input - 输入
//o - output - 输出
//
#include <stdio.h>
//
// C语言规定
//main函数是程序的入口
//main函数有且只有一个
//
//标准的主函数写法:
//int main()
//{
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;
//}
//

//int main()
//{
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    return 0;
//}
//

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

//变量和常量的概念
//int b = 20;//全局变量
//
//int main()
//{
//	//short age = 18;//年龄
//	//int high = 175;//身高
//	//float weight = 55.5;//体重
//	int a = 10;//局部变量
//
//	return 0;
// }

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//当全局变量和局部变量名字相同的情况下，局部优先
//    return 0;
//}

//求两个整数和
//printf 是一个输出函数
//scanf 是一个输入函数

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int num = num1 + num2;
//	//输出
//	printf("%d\n", num);
//
//	return 0;
//}

//变量的作用域
//1.局部变量
//局部变量的作用域是变量所在的局部范围
//2.全局变量
// 全局变量的作用域是整个工程
//变量的生命周期
// 局部变量
// 进入作用域生命周期开始，出作用域生命周期结束
// 全局变量
//整个程序的生命周期


//int a = 10;
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}


//int a = 10;
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//


//声明来自外部的语法
//extern int a;
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}


//1.字面常量
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量

//int main()
//{
	//30;
	//3.14;
	//'h';//字符
	//"asd";
	//int a = 10;
	//const int a = 10;//在c语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性
    //a = 20;
	//printf("%d\n", a);//20
//	const int n = 10;
//	int arr[n] = { 0 };
//  return 0;
//}

//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	MAX = 20;//err
//	
//	return 0;
//}



//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	int a = 10;
//	enum Color c = BLUE;
//	printf("%d\n", BLUE);
//	return 0;
// }

#include <string.h>
//int main()
//{
//	//char字符类型
//	//'a';
//	//char ch = 'w';
//	//字符串
//	//"abcdef";//由双引号引起来的一串字符称为字符串面值，简称字符串
//	char arr1[] = "abcdefg";//8
//	char arr2[] = { 'a','b','c','d','e','f','g','\0'};
//	int len = strlen("abc");//求字符串长度的一个函数,string lengh  头文件:string.h
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束标志，不算做字符串内容
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}



	 









































































































































