#define _CRT_SECURE_NO_WARNINGS

/* escape.c -- 使用转移序列 */
//#include <stdio.h>
//int main(void)
//{
//	float salary;
//	printf("\aEnter your desired monthly salary:");
//	printf(" $_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f　a　month　is　$%.2f　a　year.",
//		salary,salary * 12.0);
//	printf("\rGee!\n");
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 0x44;
//	printf("%#x", a);
//	printf("%x", a);
//	return 0;
//}

//编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印
//输入的字符。
//#include <stdio.h>
//int main(void)
//{
//	int ch;
//	printf("请输入一个ASCII码值:");
//	scanf("%d", &ch);
//	printf("%c\n", ch);
//	return 0;
//}

//编写一个程序，发出一声警报，然后打印下面的文本：
//Startled　by　the　sudden　sound, Sally　shouted,
//"By　the　Great　Pumpkin,　what　was　that!"
//#include <stdio.h>
//int main(void)
//{
//	printf("\aStarled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that!\"\n");
//	return 0;
//}

//编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指
//数形式。然后，如果系统支持，再打印成p记数法（即十六进制记数法）。
//按以下格式输出（实际显示的指数位数因系统而异）：
//Enter　a　floating - point　value:　64.25
//fixed - point　notation : 64.250000
//exponential　notation : 6.425000e+01
//p　notation : 0x1.01p+6
//#include <stdio.h>
//int main(void)
//{
//	float a;
//	printf("Enter　a　floating - point　value:");
//	scanf("%f", &a);
//	printf("fixed - point　notation :%f\n", a);
//	printf("exponential　notation :%e\n",a);
//	printf("p　notation :%.2a\n", a);
//	return 0;
//}

//一年大约有3.156e7秒。编写一个程序，提示用户输入年龄，然后显
//示该年龄对应的秒数
//#include <stdio.h>
//int main(void)
//{
//	int age;
//	printf("请输入年龄:");
//	scanf("%d", &age);
//	printf("对应的秒数:%.2fs\n", age * 3.156e7);
//	return 0;
//}

//1个水分子的质量约为3.0e−23克。1夸脱水大约是950克。编写一个
//程序，提示用户输入水的夸脱数，并显示水分子的数量。
//#include <stdio.h>
//int main(void)
//{
//	int m;
//	float count;
//	printf("请输入水的夸脱数:");
//	scanf("%d", &m);
//	count = m * 950 / 3.0e-23;
//	printf("水分子的数量:%e\n", count);
//	return 0;
//}

//1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（ / 英
//寸），然后以厘米为单位显示身高。
//#include <stdio.h>
//int main(void)
//{
//	int high;
//	printf("请输入身高:__\"\b\b\b");
//	scanf("%d", &high);
//	printf("相当于:%.4fcm\n", high * 2.54);
//	return 0;
//}

// defines.c -- 使用limit.h和float头文件中定义的明示常量
//#include <stdio.h>
//#include <limits.h>　 
//#include <float.h>　　
//int main(void)
//{
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest long long: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smallest normal float: %e\n", FLT_MIN);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char a,b;
//	scanf("%c",   &a);//从输入中的第1个字符开始读取(空格也算）
//	scanf(" %c", &b);//从第1个非空白字符开始读取
//	printf("%c\n%c", a, b);
//	return 0;
//}





























