#define _CRT_SECURE_NO_WARNINGS

//��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д���26��С
//д��ĸ��Ȼ���ӡ������������ݡ�
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

//ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ�ַ���
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

//ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
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

//ʹ��Ƕ��ѭ����������ĸ�ʽ��ӡ��ĸ��
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

//��дһ��������ʾ�û������д��ĸ��ʹ��Ƕ��ѭ�������������
//�͵ĸ�ʽ��ӡ��ĸ��
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
//��ӡ������ͼ�Σ�Ҫ�����û��������ĸ�����������磬�����ͼ����
//���û�����E��Ĵ�ӡ�����
//��ʾ�������ѭ�������У�ÿ��ʹ��3���ڲ�ѭ�����ֱ���ո���
//�����ӡ��ĸ���Խ����ӡ��ĸ��
//#include <stdio.h>
//int main(void)
//{
//	int m, n1, n2, n3;
//	char ch;
//	char z = 'A';
//	printf("������һ����д��ĸ: ");
//	scanf("%c", &ch);
//	int row = ch - z;
//	for (m = 0; m <= row; m++)//������
//	{
//		//�ո�
//		for (n1 = row - m; n1 > 0; n1--)
//		{
//			printf(" ");
//		}
//		//�����ӡ
//		for (n2 = 0; n2 <= m; n2++)
//		{
//			printf("%c", z + n2);
//		}
//		//�����ӡ
//		for (n3 = m; n3 > 0; n3--)
//		{
//			printf("%c", z + n3 - 1);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��дһ�������ӡһ�����ÿһ�д�ӡһ��������������ƽ������
//����������Ҫ���û�������������ޡ�ʹ��һ��forѭ����
//#include <stdio.h>
//int main(void)
//{
//	int up, low, m;
//	printf("������������: ");
//	scanf("%d", &up);
//	printf("������������: ");
//	scanf("%d", &low);
//	printf("int     square  cube\n");
//	for (m = low; m <= up; m++)
//	{
//		printf("%-8d%-8d%d\n", m, m * m, m * m * m);
//	}
//	return 0;
//}

//��дһ�������һ�����ʶ���һ���ַ������У�Ȼ�����ӡ������ʡ�
//��ʾ��strlen()��������4�½��ܹ��������ڼ����������һ���ַ����±ꡣ
//#include <stdio.h>
//int main(void)
//{
//	char ch[40];
//	printf("������һ������: ");
//	scanf("%s", ch);
//	int i = strlen(ch);
//	printf("�����ӡ: ");
//	while (i>=0)
//	{
//		printf("%c", ch[i]);
//		i--;
//	}
//	return 0;
//}

//��дһ������Ҫ���û���������������������ӡ����֮���������
//�˻��Ľ�������û����������֮ǰ������Ӧѭ�������û������ÿ��ֵ��
//#include <stdio.h>
//int main(void)
//{
//	float i, j;
//	printf("����������������: ");
//  int num = scanf("%f %f", &i, &j);
//	while (num == 2)
//	{
//		printf("(%f-%f)/(%f*%f)= %f\n", i, j, i, j, (i - j) / (i * j));
//		printf("����������������: ");
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
//	printf("����������������: ");
//	int num = scanf("%f %f", &i, &j);
//	while (num == 2)
//	{
//		printf("(%f-%f)/(%f*%f)= %f\n", i, j, i, j, SUM(i,j));
//		printf("����������������: ");
//		int num = scanf("%f %f", &i, &j);
//	}
//	printf("Done!\n");
//	return 0;
//}
//float SUM(float i, float j)
//{
//	return (i - j) / (i * j);
//}

//��дһ������Ҫ���û�����һ������������һ����������������
//�����޵����޷�Χ������������ƽ���ͣ�����ʾ��������Ȼ����������
//ʾ�û��������޺���������������ʾ�����ֱ���û��������������С����
//������Ϊֹ��
//Enter��lower��and��upper��integer��limits:��5��9
//The��sums��of��the��squares��from��25��to��81��is��255
//Enter��next��set��of��limits : 3��25
//The��sums��of��the��squares��from��9��to��625��is��5520
//Enter��next��set��of��limits : 5��5
//Done
//#include <stdio.h>
//int main(void)
//{
//	int up, low, m, num;
//	printf("Enter��lower��and��upper��integer��limits:��");
//	scanf("%d %d", &low, &up);
//	while (low < up)
//	{
//		for (m = low, num = 0; m <= up; m++)
//		{
//			num = num + m * m;
//		}
//		printf("The��sums��of��the��squares��from %d to %d is %d\n", low * low, up * up, num);
//		printf("Enter��lower��and��upper��integer��limits:��");
//		scanf("%d %d", &low, &up);
//	}
//	printf("Done\n");
//	return 0;
//}

//��дһ�������������ж���8��������Ȼ�󰴵����ӡ��8��������
//#include <stdio.h>
//int main(void)
//{
//	int arr[10];
//	int i, j;
//	printf("������˸�����: ");
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("�����ӡ: ");
//	for (j = 7; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//�������������������У�
//1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ...
//1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ...
//��дһ����������������������е��ܺͣ�ֱ������ĳ��������ʾ����
//���� - 1 ��˵� - 1��ż���� - 1��˵�1�����û�����������ָ���Ĵ���������
//������0��ֵʱ�������롣�鿴����100�1000�10000�����ܺͣ�
//�Ƿ���ÿ�����ж�������ĳֵ��
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

//��дһ�����򣬴���һ������8��Ԫ�ص�int�������飬�ֱ������Ԫ
//������Ϊ2��ǰ8���ݡ�ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��do whileѭ����
//ʾ����Ԫ�ص�ֵ��
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

//��дһ�����򣬴�����������8��Ԫ�ص�double�������飬ʹ��ѭ��
//��ʾ�û�Ϊ��һ����������8 ��ֵ���ڶ�������Ԫ�ص�ֵ����Ϊ��һ������
//��ӦԪ�ص��ۻ�֮�͡����磬�ڶ�������ĵ� 4��Ԫ�ص�ֵ�ǵ�һ������ǰ
//4��Ԫ��֮�ͣ��ڶ�������ĵ�5��Ԫ�ص�ֵ�ǵ�һ������ǰ5��Ԫ��֮��
//����Ƕ��ѭ��������ɣ��������õڶ�������ĵ�5��Ԫ���ǵڶ��������
//��4��Ԫ�����һ������ĵ�5��Ԫ��֮�ͣ�ֻ��һ��ѭ������������񣬲�
//��Ҫʹ��Ƕ��ѭ���������ʹ��ѭ����ʾ������������ݣ���һ��������
//ʾ��һ�У��ڶ���������ʾ�ڵ�һ���������һ�У�����ÿ��Ԫ�ض����һ
//�������Ԫ�����Ӧ
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

//��дһ�����򣬶�ȡһ�����룬Ȼ�����������ݵ����ӡ������
//���԰����봢����char���͵������У�����ÿ���ַ�������255������һ
//�£�����% cת��˵����scanf()����һ��ֻ�ܴ������ж�ȡһ���ַ�������
//���û�����Enter��ʱscanf()����������һ�������ַ���\n����
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

 



























































