#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#define FORMAT "%s!��C��is��cool!\n"
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

//��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ
//�䡣ʹ��#define��const����һ����ʾ60�ķ��ų�����const������ͨ��while
//ѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
//#include <stdio.h>
//#define SIXTY 60
//int main(void)
//{
//	int minute, hour;
//	int m = 1;
//	while (m > 0)
//	{
//		printf("������:");
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
//	printf("���ٷ���:");
//	scanf("%d", &min);
//	while (min > 0)
//	{
//		hour = min / HOUR_MIN;
//		min = min % HOUR_MIN;
//		printf("%dСʱ %d����\n", hour, min);
//		printf("���ٷ���:");
//		scanf("%d", &min);
//	}
//	return 0;
//}

//��дһ��������ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����
//10���������������磬�û�����5�����ӡ5��15����������������5��
//15����Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���
//#include <stdio.h>
//int main(void)
//{
//	int m,n;
//	printf("������һ������:");
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
//	printf("������һ������:");
//	scanf("%d", &num);
//	while (i <= 10)
//	{
//		printf("%d ", num);
//		i++; 
//		num++;
//	}
//	return 0;
//}

//��дһ��������ʾ�û�����������Ȼ����ת������������������
//�磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
//18 days are 2 weeks, 4 days.
//ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0
//�� - 20����ѭ��������
//#include <stdio.h>
//int main(void)
//{
//	int day, week;
//	printf("����������:");
//	scanf("%d", &day);
//	while (day > 0)
//	{
//		printf("%d days are ", day);
//		week = day / 7;
//		day = day % 7;
//		printf("%d weeks, %d days.\n", week, day);
//		printf("����������:");
//		scanf("%d", &day);
//	}
//	printf("������󣬳����ѹر�\n");
//	return 0;
//}

//��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ�����
//�׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������
//�ߣ�ֱ���û�����һ������ֵ��
// 1 Ӣ�� = 30.48 cm
// 1 Ӣ�� = 2.54 cm
// 1 Ӣ�� = 12 Ӣ��
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

//��дһ��������ʾ�û�����һ��double���͵���������ӡ��������
//��ֵ���Լ����һ���������㲢��ӡ����ֵ��main()����Ҫ���û������ֵ
//���ݸ��ú�����
//#include <stdio.h>
//void Cube(double n)
//{
//	printf("%f\n", n * n * n);
//}
//int main(void)
//{
//	double n = 0;
//	printf("������һ��double���͵���:");
//	scanf("%lf", &n);
//	Cube(n);
//	return 0;
//}

//��дһ��������ʾ��ģ����Ľ�������û�����ĵ�1��������Ϊ
//��ģ������ĵ�2��������󣬸�������������б��ֲ��䡣�û���������
//�����ǵ�1��������󡣵��û�����һ������ֵʱ�����������
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

//��дһ������Ҫ���û�����һ�������¶ȡ�����Ӧ��ȡdouble����
//��ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ��Ϊ�������ݸ�һ���û��Զ���ĺ���
//Temperatures()���ú������������¶ȺͿ����¶ȣ�����С���������λ����
//�ľ�����ʾ3���¶ȡ�Ҫʹ�ò�ͬ���±�����ʾ��3���¶�ֵ��
//�����¶� = 5.0 / 9.0 * (�����¶� - 32.0)
//�����¶� = �����¶� + 273.16
//Temperatures()��������const�����¶�ת����ʹ�õı�������main()����
//��ʹ��һ��ѭ�����û��ظ������¶ȣ����û����� q ������������ʱ��ѭ��
//������scanf()�������ض�ȡ���ݵ����������������ȡ�����򷵻�1�����
//��ȡq�򲻷���1������ʹ�� == �������scanf()�ķ���ֵ��1���Ƚϣ�������
//ֵ�Ƿ���ȡ�
//#include <stdio.h>
//void Temperatures(double n)
//{
//	double C = 5.0 / 9.0 * (n - 32.0);
//	double K = C + 273.16;
//	printf("�����¶�: %.3f F\n", n);
//	printf("�����¶�: %.3f C\n", C);
//	printf("�����¶�: %.3f K\n", K);
//}
//int main(void)
//{
//	double tem;
//	printf("������һ�������¶�:");
//	int r = scanf("%lf", &tem);
//	while (r == 1)
//	{
//		Temperatures(tem);
//		printf("������һ�������¶�:");
//		scanf("%lf", &tem);
//	}
//	printf("Done!");
//	return 0;
//}


























