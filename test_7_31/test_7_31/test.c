#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);
//	float c = 7 / 2.0;
//	printf("%f\n", c);
//	printf("%.1f", c);//fǰ��.n��ӡС�����nλ
//	// / ���ŵ����˶���������ʱ��ִ�е��������������������ֻҪ��һ����������ִ�и������ĳ���
//	int b = 7 % 2;//% ȡģ a������
//	//ȡģ������������ֻ��������
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//	a = a + 3;
//	a += 3;//��
//	a -= 3;
//	return 0;
//}

//C������ 0��ʾ�� ��0��ʾ��
//int main()
//{
//	int flag = 0;
//	if (!flag)//! �߼�������
//	{
//		printf("hehe\n");
//	}
//	int a = 10;
//	int b = -a;
//	printf("%d\n", b);
//
//	return 0;
//}

//sizeof�ǵ�Ŀ������ ��������λ���ֽڣ�byte��
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10 �����Ԫ�ظ���
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	              //int b=a=10 ; a=a+1=11
//	//int b = ++a;//ǰ��++����++����ʹ��
//	              //a=a+1=11; int b=a=11
//	//int b = a--;//b=a=10; a=a-1=9
//	//int b = --a;//a=a-1=9; b=a=9
//	printf("%d\n", b);
//	printf("%d\n", a);
//}

//int main()
//{
//	int a =(int) 3.14;//�����ͣ� ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//&& �߼��� ����
//	//|| �߼��� ����
//	int a = 0;
//	int b = 20;
//	//if (a || b)
//	if(a&&b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a > b ? a: b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]�����±����ò�����  arr��3����[]�Ĳ�����
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = Add(2, 3);//()�Ǻ������ò�������Add��2��3����()�Ĳ�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//�Զ����� auto �Զ�
//
//	return 0;
//}


//typedef ������������
//typedef unsigned int unit;
//typedef struct Node
//{
//	int data;
//	struct Node* nest;
//}Node;
//int main()
//{
//	unsigned int num = 0;
//	unit num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}


//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
//void test()
//{
//	//int a = 1;
//	static int a = 1;//static���ξֲ�����ʱ���ֲ��������������򣬲������� �������Ǹı��˱����Ĵ洢λ��
//	                 //Ӱ���˱������������ڣ��������ڱ䳤���ͳ������������һ��
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//�����ⲿ����
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//���κ���
//extern int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����3����ڼĴ�����
//	return 0;
//}

//#define �����ʶ������
//#define NUM 100
//int main()
//{
//	int n = NUM;
//	printf("%d\n", n);
//	printf("%d\n", NUM);
//	int arr[NUM] = { 0 };
//	return 0;
//}

//#define �����
//�����в�����
//#define ADD(x,y) ((x)+(y))
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);//�滻��int c = ((a)+(b))
//	printf("%d\n", c);
//	return 0;
//}







































