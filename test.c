#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	if (a == 10)
//		printf("hello\n");
//	if (a = 2)
//		printf("hi\n");
//	int age = 20;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("���ܳ���\n");
//	}
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 10;
//	if (a == 1)
//		if (b == 10)
//			printf("hehe\n");
//	    else
//		    printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 10;
//	if (a == 1)
//	{
//		if (b == 10)
//			printf("hehe\n");
//	}
//    else
//	    printf("haha\n");
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num =0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}

//���1-100֮�������
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n"); 
//		break;
//	case 2:
//		printf("���ڶ�\n"); 
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n"); 
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n"); 
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//whileѭ���е�
//break�������õ���ֹѭ��
//continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	//int ch = 0;
//	//while(getchar())
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf(" %s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n');
//	printf("��ȷ������(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//		printf("No\n");
//
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}//ֻ��ӡ�����ַ�
//	return 0;
//}

//ASCII��
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��������Ԫ�ظ���
//	//sizeof(arr)-���������ܴ�С
//	//sizeof(arr[0])-��������Ԫ�ش�С
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//�����������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%4d%2d%2d",&a,&b,&c);
//	printf("year=%d\n", a);
//	printf("month=%02d\n", b);
//	printf("date=%02d\n", c);
//	return 0;
//}

//ѧ����Ϣ�������
//int main()
//{
//	int a = 0;
//	float b = 0.0f;
//	float c = 0.0f;
//	float d = 0.0f;
//	scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//	printf("The each subject score of No.%d is %.3f,%.2f,%.2f", a, b, c, d);
//	return 0;
//}

//printf�ķ���ֵ
//int main()
//{
//	int a= printf("Hello world!");
//	printf("\n%d\n", a);
//	return 0;
//}



































































































































