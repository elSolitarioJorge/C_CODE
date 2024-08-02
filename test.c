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
//		printf("未成年\n");
//		printf("不能抽烟\n");
//	}
//	else
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else
//		printf("老年\n");
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

//判断一个数是否为奇数
//int main()
//{
//	int num =0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//输出1-100之间的奇数
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
//		printf("星期一\n"); 
//		break;
//	case 2:
//		printf("星期二\n"); 
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n"); 
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n"); 
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
//		printf("选择错误\n");
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
//		{//switch允许嵌套使用
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

//while循环中的
//break用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
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
//	printf("请输入密码:>");
//	scanf(" %s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n');
//	printf("请确认密码(Y/N):>");
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
//	}//只打印数字字符
//	return 0;
//}

//ASCII码
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//计算数组元素个数
//	//sizeof(arr)-计算数组总大小
//	//sizeof(arr[0])-计算数组元素大小
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//生日输入输出
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

//学生信息输入输出
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

//printf的返回值
//int main()
//{
//	int a= printf("Hello world!");
//	printf("\n%d\n", a);
//	return 0;
//}



































































































































