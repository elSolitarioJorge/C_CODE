#define _CRT_SECURE_NO_WARNINGS

//编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、
//换行符数和所有其他字符的数量。
//#include <stdio.h>
//int main(void)
//{
//	int x = 0;//空格数
//	int y = 0;//换行符数
//	int z = 0;//其他字符数
//	char ch;
//	printf("请输入字符（以字符'#'结尾）:\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//		{
//			x++;
//			continue;
//		}
//		else if (ch == '\n')
//		{
//			y++;
//		}
//		else
//      {
//			z++;
//      }
//	}
//	printf("x=%d  y=%d  z=%d\n", x, y, z);
//	return 0;
//}

//编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字
//符以及对应的ASCII码（十进制）。一行打印8个字符。建议 : 使用字符计数
//和求模运算符（% ）在每8个循环周期时打印一个换行符。
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	char ch;
//	while ((ch = getchar()) != '#')
//	{
//		printf("%c %d\t", ch, ch);
//		i++;
//		if (i % 8 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//编写一个程序，读取整数直到用户输入 0。输入结束后，程序应报告
//用户输入的偶数（不包括 0）个数、这些偶数的平均值、输入的奇数个数及
//其奇数的平均值。
//#include <stdio.h>
//int main(void)
//{
//	int n_odd = 0;
//	int n_even = 0;
//	int sum_odd = 0;
//	int sum_even = 0;
//	int input;
//	float i, j;
//	printf("请输入一些整数（输入0结束）：");
//	while (scanf("%d", &input) == 1)
//	{
//		if (0 == input)
//		{
//			break;
//		}
//		else if (0 == (input % 2))
//		{
//			n_even++;
//			sum_even += input;
//		}
//		else
//		{
//			n_odd++;
//			sum_odd += input;
//		}
//	}
//	i = sum_even / n_even;
//	j = sum_odd / n_odd;
//	printf("偶数个数：%d  偶数平均数：%f\n", n_even, i);
//	printf("奇数个数：%d  奇数平均数：%f\n", n_odd, j);
//	return 0;
//}
 
















