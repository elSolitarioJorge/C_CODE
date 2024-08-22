#define _CRT_SECURE_NO_WARNINGS

//Daphne以10% 的单利息投资了100美元（也就是说，每年投资获利相
//当于原始投资的10% ）。Deirdre以 5 % 的复合利息投资了 100 美元（也就是
//说，利息是当前余额的 5 % ，包含之前的利息）。编写一个程序，计算需要
//多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。
//#include <stdio.h>
//int main(void)
//{
//	float dap = 100.0f;//Daphne的投资额
//	float dei = 100.0f;//Deirdre的投资额
//	int n = 1;
//	do
//	{
//		dap = 100.0 + 100 * 0.1 * n++;
//		dei = dei * 1.05;
//	} while (dap >= dei);
//	printf("%d 年后Deirdre的投资额才会超过Daphne,那时Deirdre: %f  Daphne: %f\n", n, dei, dap);
//	return 0;
//}

//Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8% 的
//账户。在每年的最后一天， Chuckie取出10万美元。编写一个程序，计算多
//少年后Chuckie会取完账户的钱？
//#include <stdio.h>
//int main(void)
//{
//	double num = 100.0;
//	int i = 0;
//	do
//	{
//		num = num * 1.08 - 10;
//		i++;
//	} while (num > 0);
//	printf("%d 年后Chuckie会取完账户的钱\n", i);
//	return 0;
//}

//Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋
//友数量以下面的方式增长。第1周少了1个朋友，剩下的朋友数量翻倍；第2
//周少了2个朋友，剩下的朋友数量翻倍。一般而言，第N周少了N个朋友，剩
//下的朋友数量翻倍。编写一个程序，计算并显示Rabnud博士每周的朋友数
//量。该程序一直运行，直到超过邓巴数（Dunbar’s number）。邓巴数是粗略
//估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是150。
//#include <stdio.h>
//int main(void)
//{
//	int num = 5;
//	for (int n = 1; num <= 150; n++)
//	{
//		num = (num - n) * 2;
//		printf("第%d周: %d\n", n, num);
//	}
//	return 0;
//}
















































