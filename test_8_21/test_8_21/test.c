#define _CRT_SECURE_NO_WARNINGS

//编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小
//写字母。然后打印数组的所有内容。
//#include <stdio.h>
//int main(void)
//{
//	char ch[26];
//	int i;
//	for (i = 0; i < 26; i++)
//	{
//		ch[i] = 'a' + i;
//		printf("%c ", ch[i]);
//	}
//	return 0;
//}
//////////////////////////////////////////////////////
//#include <stdio.h>
//int main(void)
//{
//	char ch[26];
//	int i;
//	for (i = 0; i < 26; i++)
//	{
//		scanf("%c", &ch[i]);
//		printf("%c ", ch[i]);
//	}
//	return 0;
//}

//使用嵌套循环，按下面的格式打印字符：
//$
//$$
//$$$
//$$$$
//$$$$$
//#include <stdio.h>
//int main(void)
//{ 
//	int m, n;
//	for (m = 0; m < 5; m++)
//	{
//		for (n = 1; n <= m; n++)
//			printf("$");
//		printf("\n");
//	}
//	return 0;
//}

//使用嵌套循环，按下面的格式打印字母：
//F
//FE
//FED
//FEDC
//FEDCB
//FEDCBA
//#include <stdio.h>
//int main(void)
//{
//	int m, n;
//	char ch;
//	for (m = 0; m < 6; m++)
//	{
//		for (n = 0; n <= m; n++)
//		{
//          ch = 'F' - n;
//			printf("%c", ch);
//		}
//		printf("\n\n");
//	}
//	return 0;
//}
///////////////////////////////////////
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int m, n;
//	for (m = 0; m < 6; m++)
//	{
//		ch = 'F';
//		for (n = 0; n <= m; n++)
//			printf("%c", ch--);
//		printf("\n");
//	}
//	return 0;
//}

//使用嵌套循环，按下面的格式打印字母：
//A
//BC
//DEF
//GHIJ
//KLMNO
//PQRSTU
//#include <stdio.h>
//int main(void)
//{
//	int m, n;
//	int p = 0;
//	char ch;
//	for (m = 0; m < 6; m++)
//	{
//		for (n = 0; n <= m; n++,p++)
//		{
//			ch = 'A' + p; 
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
///////////////////////////////////////////
//#include <stdio.h>
//int main(void)
//{
//	char ch = 'A';
//	int m, n;
//	for (m = 0; m < 6; m++)
//	{
//		for (n = 0; n <= m; n++)
//		{
//			printf("%c", ch++);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔
//型的格式打印字母：
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
//打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是
//在用户输入E后的打印结果。
//提示：用外层循环处理行，每行使用3个内层循环，分别处理空格、以
//升序打印字母、以降序打印字母。
//#include <stdio.h>
//int main(void)
//{
//	int m, n1, n2, n3;
//	char ch;
//	char z = 'A';
//	printf("请输入一个大写字母: ");
//	scanf("%c", &ch);
//	int row = ch - z;
//	for (m = 0; m <= row; m++)//处理行
//	{
//		//空格
//		for (n1 = row - m; n1 > 0; n1--)
//		{
//			printf(" ");
//		}
//		//升序打印
//		for (n2 = 0; n2 <= m; n2++)
//		{
//			printf("%c", z + n2);
//		}
//		//降序打印
//		for (n3 = m; n3 > 0; n3--)
//		{
//			printf("%c", z + n3 - 1);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该
//数的立方。要求用户输入表格的上下限。使用一个for循环。
//#include <stdio.h>
//int main(void)
//{
//	int up, low, m;
//	printf("请输入表格上限: ");
//	scanf("%d", &up);
//	printf("请输入表格下限: ");
//	scanf("%d", &low);
//	printf("int     square  cube\n");
//	for (m = low; m <= up; m++)
//	{
//		printf("%-8d%-8d%d\n", m, m * m, m * m * m);
//	}
//	return 0;
//}

//编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。
//提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标。
//#include <stdio.h>
//int main(void)
//{
//	char ch[40];
//	printf("请输入一个单词: ");
//	scanf("%s", ch);
//	int i = strlen(ch);
//	printf("倒序打印: ");
//	while (i>=0)
//	{
//		printf("%c", ch[i]);
//		i--;
//	}
//	return 0;
//}

//编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数
//乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。
//#include <stdio.h>
//int main(void)
//{
//	float i, j;
//	printf("请输入两个浮点数: ");
//  int num = scanf("%f %f", &i, &j);
//	while (num == 2)
//	{
//		printf("(%f-%f)/(%f*%f)= %f\n", i, j, i, j, (i - j) / (i * j));
//		printf("请输入两个浮点数: ");
//		int num = scanf("%f %f", &i, &j);
//	}
//  printf("Done!");
//	return 0;
//}
////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//float SUM(float i, float j);
//int main(void)
//{
//	float i, j;
//	printf("请输入两个浮点数: ");
//	int num = scanf("%f %f", &i, &j);
//	while (num == 2)
//	{
//		printf("(%f-%f)/(%f*%f)= %f\n", i, j, i, j, SUM(i,j));
//		printf("请输入两个浮点数: ");
//		int num = scanf("%f %f", &i, &j);
//	}
//	printf("Done!\n");
//	return 0;
//}
//float SUM(float i, float j)
//{
//	return (i - j) / (i * j);
//}

//编写一个程序，要求用户输入一个上限整数和一个下限整数，计算
//从上限到下限范围内所有整数的平方和，并显示计算结果。然后程序继续提
//示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数小于下
//限整数为止。
//Enter　lower　and　upper　integer　limits:　5　9
//The　sums　of　the　squares　from　25　to　81　is　255
//Enter　next　set　of　limits : 3　25
//The　sums　of　the　squares　from　9　to　625　is　5520
//Enter　next　set　of　limits : 5　5
//Done
//#include <stdio.h>
//int main(void)
//{
//	int up, low, m, num;
//	printf("Enter　lower　and　upper　integer　limits:　");
//	scanf("%d %d", &low, &up);
//	while (low < up)
//	{
//		for (m = low, num = 0; m <= up; m++)
//		{
//			num = num + m * m;
//		}
//		printf("The　sums　of　the　squares　from %d to %d is %d\n", low * low, up * up, num);
//		printf("Enter　lower　and　upper　integer　limits:　");
//		scanf("%d %d", &low, &up);
//	}
//	printf("Done\n");
//	return 0;
//}

//编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。
//#include <stdio.h>
//int main(void)
//{
//	int arr[10];
//	int i, j;
//	printf("请输入八个整数: ");
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("倒序打印: ");
//	for (j = 7; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//考虑下面两个无限序列：
//1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ...
//1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ...
//编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇
//数个 - 1 相乘得 - 1，偶数个 - 1相乘得1。让用户交互地输入指定的次数，当用
//户输入0或负值时结束输入。查看运行100项、1000项、10000项后的总和，
//是否发现每个序列都收敛于某值？
//#include <stdio.h>
//int main(void)
//{
//	int m;
//	while (scanf("%d", &m) == 1)
//	{
//		double sum1 = 0;
//		double sum2 = 0;
//		int i = 1;
//		for (int j = 1; j <= m; j++)
//		{
//			sum1 = sum1 + 1.0 / j;
//			sum2 = sum2 + i * 1.0 / j;
//			i = -i;
//		}
//		printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = %f\n", sum1);
//		printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = %f\n", sum2);
//	}
//	return 0;
//}

//编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元
//素设置为2的前8次幂。使用for循环设置数组元素的值，使用do while循环显
//示数组元素的值。
//#include <stdio.h>
//int main(void)
//{
//	int arr[8] = { 0 };
//	int m = 2;
//	for (int i = 0; i < 8; i++)
//	{
//		arr[i] = m;
//		m = 2 * m;
//	}
//	int j = 0;
//	do
//	{
//		printf("%d ", arr[j++]);
//	} while (j < 8);
//	return 0;
//}

//编写一个程序，创建两个包含8个元素的double类型数组，使用循环
//提示用户为第一个数组输入8 个值。第二个数组元素的值设置为第一个数组
//对应元素的累积之和。例如，第二个数组的第 4个元素的值是第一个数组前
//4个元素之和，第二个数组的第5个元素的值是第一个数组前5个元素之和
//（用嵌套循环可以完成，但是利用第二个数组的第5个元素是第二个数组的
//第4个元素与第一个数组的第5个元素之和，只用一个循环就能完成任务，不
//需要使用嵌套循环）。最后，使用循环显示两个数组的内容，第一个数组显
//示成一行，第二个数组显示在第一个数组的下一行，而且每个元素都与第一
//个数组各元素相对应
//#include <stdio.h>
//int main(void)
//{
//	double arr1[8];
//	double arr2[8];
//	int i;
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%lf", &arr1[i]);
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf("%f ", arr1[i]);
//	}
//	printf("\n");
//	arr2[0] = arr1[0];
//	printf("%f ", arr2[0]);
//	for (i = 1; i < 8; i++)
//	{
//		printf("%f ", arr2[i]=arr2[i-1]+arr1[i]);
//	}
//	return 0;
//}

//编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。
//可以把输入储存在char类型的数组中，假设每行字符不超过255。回忆一
//下，根据% c转换说明，scanf()函数一次只能从输入中读取一个字符，而且
//在用户按下Enter键时scanf()函数会生成一个换行字符（\n）。
//#include <stdio.h>
//int main(void)
//{
//	char ch[255];
//	scanf("%s", ch);
//	for (int i = strlen(ch) - 1; i >= 0; i--)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}

 



























































