#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
//程序清单1.1C源代码示例
//#include <stdio.h>
//int main(void)
//{
//	int dogs;
//	printf("How many dogs do you have?\n");
//	scanf("%d",&dogs);
//	printf("So you have %d dog(s)!\n", dogs);
//	return 0;
//}

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	//&a;//&取地址操作符
//	printf("%p\n", &a);//%p打印地址
//	int* p = &a;//p就是指针变量
//	//int说明p指向的对象是int类型的  *说明p是指针变量
//	*p=20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//	printf("%d\n", a);//20
//	printf("%p\n",p);
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pc);
//	return 0;
//}

//int main()
//{
//	//int* p;
//	//char* p2;
//	//不管什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大空间
//	//32位机器上的地址：32bit位-4byte,所以指针变量的大小是4个字节
//	//64位机器上的地址：64bit位-8byte,所以指针变量的大小是8个字节
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","17349295035" };
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}

//计算带余除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int c = a / b;
//	int d = a % b;
//	printf("%d %d\n", c, d);
//	printf("%d %d\n", a / b, a % b);
//	return 0;
//}



































































































































































































