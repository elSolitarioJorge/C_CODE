#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#define FORMAT "%s!　C　is　cool!\n"
//int main(void)
//{
//	int num = 10;
//	printf(FORMAT, FORMAT);
//	printf("%d\n", ++num);
//	printf("%d\n", num++);
//	printf("%d\n", num--);
//	printf("%d\n", num);
//	return 0;
//}

//编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时
//间。使用#define或const创建一个表示60的符号常量或const变量。通过while
//循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
//#include <stdio.h>
//#define SIXTY 60
//int main(void)
//{
//	int minute, hour;
//	int m = 1;
//	while (m > 0)
//	{
//		printf("请输入:");
//		scanf("%d", &m);
//		minute = m % SIXTY;
//		hour = m / SIXTY;
//		printf("%d minutes is      %d hours and %d minutes\n", m, hour, minute);
//	}
//	return 0;
//}
//////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#define HOUR_MIN 60
//int main(void)
//{
//	int hour, min;
//	printf("多少分钟:");
//	scanf("%d", &min);
//	while (min > 0)
//	{
//		hour = min / HOUR_MIN;
//		min = min % HOUR_MIN;
//		printf("%d小时 %d分钟\n", hour, min);
//		printf("多少分钟:");
//		scanf("%d", &min);
//	}
//	return 0;
//}

//编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大
//10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和
//15）。要求打印的各值之间用一个空格、制表符或换行符分开。
//#include <stdio.h>
//int main(void)
//{
//	int m,n;
//	printf("请输入一个整数:");
//	scanf("%d", &m);
//	n = m;
//	while (n <= m + 10)
//	{
//		printf("%d   ", n);
//		n++;
//	}
//	return 0;
//}
////////////////////////////////////////////////////////
//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	int i = 0;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	while (i <= 10)
//	{
//		printf("%d ", num);
//		i++; 
//		num++;
//	}
//	return 0;
//}

//编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例
//如，用户输入18，则转换成2周4天。以下面的格式显示结果：
//18 days are 2 weeks, 4 days.
//通过while循环让用户重复输入天数，当用户输入一个非正值时（如0
//或 - 20），循环结束。
//#include <stdio.h>
//int main(void)
//{
//	int day, week;
//	printf("请输入天数:");
//	scanf("%d", &day);
//	while (day > 0)
//	{
//		printf("%d days are ", day);
//		week = day / 7;
//		day = day % 7;
//		printf("%d weeks, %d days.\n", week, day);
//		printf("请输入天数:");
//		scanf("%d", &day);
//	}
//	printf("输入错误，程序已关闭\n");
//	return 0;
//}

//编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘
//米和英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身
//高，直到用户输入一个非正值。
// 1 英尺 = 30.48 cm
// 1 英寸 = 2.54 cm
// 1 英尺 = 12 英寸
//#include <stdio.h>
//int main(void)
//{
//	float height,inches;
//	int feet;
//	printf("Enter a height in centimeters: ");
//	scanf("%f", &height);
//	while (height > 0)
//	{
//		feet = height / 30.48;
//		inches = height / 2.54 - feet * 12;
//		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inches);
//		printf("Enter a height in centimeters (<=0 to quit): ");
//		scanf("%f", &height);
//	}
//	printf("bye\n");
//	return 0;
//}

//编写一个程序，提示用户输入一个double类型的数，并打印该数的立
//方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值
//传递给该函数。
//#include <stdio.h>
//void Cube(double n)
//{
//	printf("%f\n", n * n * n);
//}
//int main(void)
//{
//	double n = 0;
//	printf("请输入一个double类型的数:");
//	scanf("%lf", &n);
//	Cube(n);
//	return 0;
//}

//编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为
//求模运算符的第2个运算对象，该数在运算过程中保持不变。用户后面输入
//的数是第1个运算对象。当用户输入一个非正值时，程序结束。
//#include <stdio.h>
//int main(void)
//{
//	int m, n;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to serve as the second operand: ");
//	scanf("%d", &n);
//	printf("Now enter the first operand: ");
//	scanf("%d", &m);
//	while (m > 0)
//	{
//		printf("%d %% %d is %d\n", m, n, m % n);
//		printf("Enter next number for first operand (<= 0 tp quit): ");
//		scanf("%d", &m);
//	}
//	printf("Done!\n");
//	return 0;
//}

//编写一个程序，要求用户输入一个华氏温度。程序应读取double类型
//的值作为温度值，并把该值作为参数传递给一个用户自定义的函数
//Temperatures()。该函数计算摄氏温度和开氏温度，并以小数点后面两位数字
//的精度显示3种温度。要使用不同的温标来表示这3个温度值。
//摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
//开氏温度 = 摄氏温度 + 273.16
//Temperatures()函数中用const创建温度转换中使用的变量。在main()函数
//中使用一个循环让用户重复输入温度，当用户输入 q 或其他非数字时，循环
//结束。scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果
//读取q则不返回1。可以使用 == 运算符将scanf()的返回值和1作比较，测试两
//值是否相等。
//#include <stdio.h>
//void Temperatures(double n)
//{
//	double C = 5.0 / 9.0 * (n - 32.0);
//	double K = C + 273.16;
//	printf("华氏温度: %.3f F\n", n);
//	printf("摄氏温度: %.3f C\n", C);
//	printf("开氏温度: %.3f K\n", K);
//}
//int main(void)
//{
//	double tem;
//	printf("请输入一个华氏温度:");
//	int r = scanf("%lf", &tem);
//	while (r == 1)
//	{
//		Temperatures(tem);
//		printf("请输入一个华氏温度:");
//		scanf("%lf", &tem);
//	}
//	printf("Done!");
//	return 0;
//}


























