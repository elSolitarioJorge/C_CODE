#define _CRT_SECURE_NO_WARNINGS
//1.对编程而言，可移植性意味着什么？
//完美的可移植程序是，其源代码无需修改就能在不同计算机系统中成功编译的程序。
//
//2.解释源代码文件、目标代码文件和可执行文件有什么区别？
//源代码文件包含程序员使用的任何编程语言编写的代码。
//目标代码文件包含机器语言代码，它不必是完整的程序代码。
//可执行文件包含组成可执行程序的完整机器语言代码。
//
//3.编程的7个主要步骤是什么？
//（1）定义程序目标；
//（2）设计程序；
//（3）编写程序；
//（4）编译程序；
//（5）运行程序；
//（6）测试和调试程序；
//（7）维护和修改程序。
//
//4.编译器的任务是什么？
//编译器把源代码（如，用C语言编写的代码）翻译成等价的机器语言
//代码（也叫作目标代码）。
//
//5.链接器的任务是什么？
//链接器把编译器翻译好的源代码以及库代码和启动代码组合起来，生
//成一个可执行程序。

//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	num = 1;
//	printf("I am a simple");
//	printf("computer.\n");
//	printf("My favorite number is %d because it is first.\n", num);
//	//getchar();
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	//int feet = 0;
//	//int fathoms = 0;
//	int feet, fathoms;
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes,I said %d feet!\n", 6 * fathoms);
//	return 0;
//}

//#include <stdio.h>
//int main(void) /* 该程序打印一年有多少周 */
//{
//	int s;
//	s = 52;
//	print("There　are　%d　weeks　in　a　year.\n", s);
//	return 0;
//}

//如何以下面的格式输出变量words和lines的值（这里，3020和350代表两个变量的值）？
//There were 3020 words and 350 lines.
//#include <stdio.h>
//int main(void)
//{
//	int words, lines;
//	words = 3020;
//	lines = 350;
//	printf("There were %d words and %d lines.", words, lines);
//	return 0;
//}

//编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。再调
//用一次 printf()函数，把你的姓名分别打印在两行。然后，再调用两次printf()
//函数，把你的姓名打印在一行。
//#include <stdio.h>
//int main(void)
//{
//	printf("Liu Yaoheng\n");
//	printf("Liu\nYaoheng\n");
//	printf("Liu");
//	printf("Yaoheng");
//	return 0;
//}

//编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考
//虑闰年的问题。
//#include <stdio.h>
//int main(void)
//{
//	int age_years, age_days;
//	age_years = 18;
//	age_days = 365 * age_years;
//	printf("age_years=%d\nage_days=%d\n", age_years, age_days);
//	return 0;
//}

//#include <stdio.h>
//void jolly(void);
//void deny(void);
//int main(void)
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n\n");
//}
//void deny(void)
//{
//	printf("Which nobody can deny!\n");
//}

//#include <stdio.h>
//void br(void);
//void ic(void);
//int main(void)
//{
//	br();
//	printf(", ");
//	ic();
//	printf("\n\n");
//	ic();
//	printf(",\n\n");
//	br();
//	printf("\n");
//	return 0;
//}
//void br(void)
//{
//	printf("Brazil, Russia");
//}
//void ic(void)
//{
//	printf("India, China");
//}

//编写一个程序，创建一个整型变量toes，并将toes设置为10。程序中还
//要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区
//分。
//#include <stdio.h>
//int main(void)
//{
//	int toes,twice,square;
//	toes = 10;
//	twice = 2 * toes;
//	square = toes * toes;
//	printf("toes=%d\ntwice=%d\nsquare=%d\n", toes, twice, square);
//	return 0;
//}

//#include <stdio.h>
//void Sm(void);
//int main(void)
//{
//	Sm();Sm();Sm();
//	printf("\n\n");
//	Sm();Sm();
//	printf("\n\n");
//	Sm();
//	printf("\n\n");
//	return 0;
//}
//void Sm(void)
//{
//	printf("Smile!");
//}

//#include <stdio.h>
//void one_three(void);
//void two(void);
//int main(void)
//{
//	printf("staring now:\n\n");
//	one_three();
//	printf("done!\n\n");
//	return 0;
//}
//void one_three(void)
//{
//	printf("one\n\n");
//	two();
//	printf("three\n\n");
//}
//void two(void)
//{
//	printf("two\n\n");
//}

















