#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	printf("abc\0ef");
//  return 0;
//}

//转义字符
//三字母词（古老）
//??) --> ]
//??( --> [
//\? 在书写连续多个问号时使用，防止被解析成三字母词（古老）

//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值
// 
//int main()
//{
//	//printf("%s\n", "(are you ok\?\?)");
//	//(are you ok];
//	//printf("%c\n", 'w');
//	//printf("%c\n", '\'');//\'用于表示字符常量'
//	//printf("abcdef\n");
//	//printf("%s\n", "abcdef");
//	//printf("\"\n");
//	//printf("abcd\0ef\n");
//	//printf("abcd\\0ef\n");
//	//printf("c:\test\test.c\n");//\t  水平制表符
//	//printf("c:\\test\\test.c\n");
//	//printf("\a");//\a  警告字符，蜂鸣
//	//printf("abc\nef");//\n  换行
//	//printf("ab\rdef");//\r  回车
//	//printf("%c\n", '\130');//\ddd  ddd表示1-3个八进制数字 如：\130-->X
//	//printf("%c\n", '\x30');//\xdd  dd表示1-2个十六进制数字 如：\x30-->0
//	//参照ASCII字符代码表
//	printf("%d\n", strlen("abc de"));//空格也算字符,\0不计入字符串长度
//	printf("%d\n", strlen("c:\test\628\test.c"));//8不是八进制数字
//	return 0;
//}

//
//注释
//
//C语言注释风格 /**/  缺点:不能嵌套注释
//
//C++注释风格  //

/*
int main()
{
	//int a =10;
	
	int a = 10;
	int b = 20;

	//创建指针变量p，并赋值为NULL
	int* p = NULL;
	return 0;
}
*/

//
//1.注释可以梳理思路
//2.对复杂的代码进行解释
//3.写代码的时候写注释，助人助己
//

//int main()
//{
//	//接受输入
//
//	//处理数据
//
//	//输出
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("进入大学\n");
//	printf("要好好学习吗(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好工作\n");
//	}
//	else
//	{
//		printf("进厂\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("开始学习\n");
//	while (line < 20000)
//	{
//		printf("写代码: %d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("入门\n");
//	}
//	else
//	{
//		printf("继续努力\n");
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
int Add(int x, int y)
{


	return x + y;
}

//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 50;
//	int n4 = 20;
//	//输入
//	scanf("%d %d", &n1, &n2);
//	//求和
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	int ret = Add(n3, n4);
//    //打印
//	printf("%d\n", sum);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int arr[11] = {10,12,40,50,60,40,14,55,77,84,85};
//	printf("%d\n", arr[7]);
//	int i = 0;
//    while (i < 11)
//	{
//		printf("%d\n", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//小飞机
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}

//输出学生信息
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jake    18     man");
//	return 0;
//}

//发布信息
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}

//计算表达式的值
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8+22) * a - 10 + c / 2;
//	printf("%d\n", r);
//	return 0;
//}

//
//0 - 数字0
//'0' - 字符0 ASCII值是48
//'\0' - 字符 ASCII值是0
//EOF - end of file - 文件的结束标志 值是-1
//

//int main()
//{
//	char arr[4] = { 'a','b','c' };
//	char arr1[8] = { 'a','b','c' };
//	//不完全初始化，剩余的部分默认初始化为0 - 解析为\0
//	char arr2[3] = { 'a','b','c' };
//	char arr3[3] = { 'a','b','c' };
//	char arr4[] = { 'a','b','c' };
//	char arr5[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));
//	//结果为3
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", strlen(arr5));
//	//结果为随机值
//	return 0;
//}

//求两个数的较大值
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//计算Y的值
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//	printf("%d\n", y);
//	return 0;
//}

































































