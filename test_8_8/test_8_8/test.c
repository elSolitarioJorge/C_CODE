#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����-һ����ͬ����Ԫ�صļ���
//��C99��׼֮ǰ������Ĵ�С�����ǳ������߳������ʽ
//��C99֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ䳤����
//int main()
//{
//	int arr[10] = { 1,2,3, };//δ��ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3 };
//	char ch1[10] = { 'a','b','c'};
//	char ch2[10] = "abc";
//	char ch3[] = { 'a','b','c' };
//	char ch4[] = "abc";
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//[]-�±����ò�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	for (i = sz - 1; i >= 0; i--)
//		printf("%d ", arr[i]);
//	//��ӡ�����ÿ��Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int arr1[3][4] = { {2,3},{3,4},{5,6} };
//	int arr2[][4] = { {1,2,3,4},{5,6} };//�п���ʡ�ԣ��в���
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	printf("%d\n", arr[2][3]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//���鴫�ε�ʱ���β�������д����
//1.����
//2.ָ��
//void bubble_sort(int arr[],int sz)
//{
//  //����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//      //һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{ 
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	//������������ų�����
//    //��ĭ������㷨���������������
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}		

//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//��������������
//1.sizeof�������������������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//	printf("-----------------------\n");
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("-----------------------\n");
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//����
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//����
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	//��ά�����������Ҳ��ʾ������Ԫ�أ���һ�����飩�ĵ�ַ
//	return 0;
//}
















































