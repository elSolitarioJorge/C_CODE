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

//ת���ַ�
//����ĸ�ʣ����ϣ�
//??) --> ]
//??( --> [
//\? ����д��������ʺ�ʱʹ�ã���ֹ������������ĸ�ʣ����ϣ�

//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble���͵�����
//%zu - ��ӡsizeof�ķ���ֵ
// 
//int main()
//{
//	//printf("%s\n", "(are you ok\?\?)");
//	//(are you ok];
//	//printf("%c\n", 'w');
//	//printf("%c\n", '\'');//\'���ڱ�ʾ�ַ�����'
//	//printf("abcdef\n");
//	//printf("%s\n", "abcdef");
//	//printf("\"\n");
//	//printf("abcd\0ef\n");
//	//printf("abcd\\0ef\n");
//	//printf("c:\test\test.c\n");//\t  ˮƽ�Ʊ��
//	//printf("c:\\test\\test.c\n");
//	//printf("\a");//\a  �����ַ�������
//	//printf("abc\nef");//\n  ����
//	//printf("ab\rdef");//\r  �س�
//	//printf("%c\n", '\130');//\ddd  ddd��ʾ1-3���˽������� �磺\130-->X
//	//printf("%c\n", '\x30');//\xdd  dd��ʾ1-2��ʮ���������� �磺\x30-->0
//	//����ASCII�ַ������
//	printf("%d\n", strlen("abc de"));//�ո�Ҳ���ַ�,\0�������ַ�������
//	printf("%d\n", strlen("c:\test\628\test.c"));//8���ǰ˽�������
//	return 0;
//}

//
//ע��
//
//C����ע�ͷ�� /**/  ȱ��:����Ƕ��ע��
//
//C++ע�ͷ��  //

/*
int main()
{
	//int a =10;
	
	int a = 10;
	int b = 20;

	//����ָ�����p������ֵΪNULL
	int* p = NULL;
	return 0;
}
*/

//
//1.ע�Ϳ�������˼·
//2.�Ը��ӵĴ�����н���
//3.д�����ʱ��дע�ͣ���������
//

//int main()
//{
//	//��������
//
//	//��������
//
//	//���
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("�����ѧ\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("�ù���\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("��ʼѧϰ\n");
//	while (line < 20000)
//	{
//		printf("д����: %d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("����Ŭ��\n");
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
//	//����
//	scanf("%d %d", &n1, &n2);
//	//���
//	//int sum = n1 + n2;
//	int sum = Add(n1, n2);
//	int ret = Add(n3, n4);
//    //��ӡ
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

//С�ɻ�
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

//���ѧ����Ϣ
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jake    18     man");
//	return 0;
//}

//������Ϣ
//int main()
//{
//	printf("I lost my cellphone!\n");
//	return 0;
//}

//������ʽ��ֵ
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8+22) * a - 10 + c / 2;
//	printf("%d\n", r);
//	return 0;
//}

//
//0 - ����0
//'0' - �ַ�0 ASCIIֵ��48
//'\0' - �ַ� ASCIIֵ��0
//EOF - end of file - �ļ��Ľ�����־ ֵ��-1
//

//int main()
//{
//	char arr[4] = { 'a','b','c' };
//	char arr1[8] = { 'a','b','c' };
//	//����ȫ��ʼ����ʣ��Ĳ���Ĭ�ϳ�ʼ��Ϊ0 - ����Ϊ\0
//	char arr2[3] = { 'a','b','c' };
//	char arr3[3] = { 'a','b','c' };
//	char arr4[] = { 'a','b','c' };
//	char arr5[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));
//	//���Ϊ3
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr4));
//	printf("%d\n", strlen(arr5));
//	//���Ϊ���ֵ
//	return 0;
//}

//���������Ľϴ�ֵ
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

//����Y��ֵ
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

































































