#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
////���Բ���һ���������1-100)
////�����֣��´���/��С�ˣ�
////ֱ���¶ԣ�����
// void menu()
//{
//	printf("*****************************\n");
//	printf("********   1. play   ********\n");
//	printf("********   0. exit   ********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	int guess = 0;
//	//RAND_MAX (32767)
//	//1.���������
//	int ret = rand()%100+1;//rand ����������ĺ��� ��Χ(0-RAND_MAX)
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{1
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
////ָ��
////int *p = NULL;
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}

//�ػ�����
//1.��������������1�����ڹػ�
//2.����������������ȡ���ػ�
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����60���ڹػ����������:��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����60���ڹػ����������:��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr, 'x', 3);
//	memset(arr+6, 'y', 2);
//	printf("%s\n", arr);
//	return 0;
//}

////�����Ķ���
//int get_max(int x, int y)
//{
//	return(x > y ? x: y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�����ĵ���
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//////дһ���������Խ����������ͱ���������
////void Swap(int x, int y)//x y��ʽ����
////{
////	int z = 0;
////	z = x;
////	x = y;
////	y = z;
////}
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
//int Swap(int* x, int* y)
//{
//	int z = *x;//z=a
//	*x = *y;//a=b
//	*y = z;//b=z
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:>a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	Swap(&a, &b);
//	printf("������:>a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	a = 20;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�
//	return 0;
//}















































































































































































