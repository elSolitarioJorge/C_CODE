#define _CRT_SECURE_NO_WARNINGS
//C���Դ�����һ��Ҫ��main����
//������

//printf��һ���⺯��
//ר��������ӡ���ݵ�

//��Ӫ���룺
//CTRL+F5
//
//std - standard -��׼
//i - input - ����
//o - output - ���
//
#include <stdio.h>
//
// C���Թ涨
//main�����ǳ�������
//main��������ֻ��һ��
//
//��׼��������д��:
//int main()
//{
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;
//}
//

//int main()
//{
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    return 0;
//}
//

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

//�����ͳ����ĸ���
//int b = 20;//ȫ�ֱ���
//
//int main()
//{
//	//short age = 18;//����
//	//int high = 175;//���
//	//float weight = 55.5;//����
//	int a = 10;//�ֲ�����
//
//	return 0;
// }

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ�����
//    return 0;
//}

//������������
//printf ��һ���������
//scanf ��һ�����뺯��

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//��ʼ��
//
//	//������������
//	scanf("%d %d", &num1, &num2);
//	//���
//	int num = num1 + num2;
//	//���
//	printf("%d\n", num);
//
//	return 0;
//}

//������������
//1.�ֲ�����
//�ֲ��������������Ǳ������ڵľֲ���Χ
//2.ȫ�ֱ���
// ȫ�ֱ���������������������
//��������������
// �ֲ�����
// �����������������ڿ�ʼ�����������������ڽ���
// ȫ�ֱ���
//�����������������


//int a = 10;
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}


//int a = 10;
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//


//���������ⲿ���﷨
//extern int a;
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}


//1.���泣��
//2.const���εĳ�����
//3.define����ı�ʶ������
//4.ö�ٳ���

//int main()
//{
	//30;
	//3.14;
	//'h';//�ַ�
	//"asd";
	//int a = 10;
	//const int a = 10;//��c�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г���������
    //a = 20;
	//printf("%d\n", a);//20
//	const int n = 10;
//	int arr[n] = { 0 };
//  return 0;
//}

//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	MAX = 20;//err
//	
//	return 0;
//}



//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	int a = 10;
//	enum Color c = BLUE;
//	printf("%d\n", BLUE);
//	return 0;
// }

#include <string.h>
//int main()
//{
//	//char�ַ�����
//	//'a';
//	//char ch = 'w';
//	//�ַ���
//	//"abcdef";//��˫������������һ���ַ���Ϊ�ַ�����ֵ������ַ���
//	char arr1[] = "abcdefg";//8
//	char arr2[] = { 'a','b','c','d','e','f','g','\0'};
//	int len = strlen("abc");//���ַ������ȵ�һ������,string lengh  ͷ�ļ�:string.h
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ�������
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}



	 









































































































































