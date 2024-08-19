#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main(void)
//{
//	printf("He sold the painting for $%2.2f.\n", 2.345e2);
//	printf("%c%c%c\n", 'H', 105, '\41');
//    #define Q "His Hamlet was funny without being vulgar."
//	printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q));
//	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
//	return 0;
//}

//#include <stdio.h>
//#define B "booboo"
//#define X 10
//int main(void)
//{
//	int age,xp;
//	char name[40];
//	printf("Please enter your first name.");
//	scanf("%[^\n]", name);//scanf输入字符串中有空格，用%[^\n],意思为遇到\n结束
//	printf("All right, %s, what's your age?\n", name);
//	scanf("%d", &age);
//	xp = age + X;
//	printf("That's a %s! You must be at least %d.\n", B, xp);
//	return  0;
//}

//假设一个程序的开头是这样：
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//请构造一个使用BOOK、cost和percent的printf()语句，打印以下内容：
//This copy of "War and Peace" sells for $12.99.
//That is 80 % of list.
//#include <stdio.h>
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//	printf("This copy of %s sells for $%.2f.\n", BOOK, cost);
//	printf("That is %.f %% of list.\n", percent);
//	printf("This copy of %s sells for $%.2f.\n"
//		"That is %.f %% of list.\n", BOOK, cost, percent);
//	printf("This copy of %s sells for $%.2f.\n\
//That is %.f %% of list.\n", BOOK, cost, percent);
//	//printf打印句子过长可以用后两种方式增加代码可读性
//	return 0;
//}

//编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来
//#include <stdio.h>
//int main(void)
//{
//	char first_name[40] = { 0 };
//	char last_name[40] = { 0 };
//	printf("请输入您的名:>");
//	scanf("%s", first_name);
//	printf("请输入您的姓:>");
//	scanf("%s", last_name);
//	printf("%s,%s\n", first_name, last_name);
//	return 0;
//}

//编写一个程序，提示用户输入名和姓，并执行一下操作：
//a.打印名和姓，包括双引号；
//b.在宽度为20的字段右端打印名和姓，包括双引号；
//c.在宽度为20的字段左端打印名和姓，包括双引号；
//d.在比姓名宽度宽3的字段中打印名和姓。
//#include <stdio.h>
//int main(void)
//{
//	char name[40] = { 0 };
//	printf("请输入您的姓名:>");
//	scanf("%[^\n]", name);
//	printf("\"%s\"\n", name);
//	printf("\"%20s\"\n", name);
//	printf("\"%-20s\"\n", name);
//	printf("\"%-*s\"\n",strlen(name)+3, name);
//	return 0;
//}

//编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数
//记数法打印。用下面的格式进行输出（系统不同，指数记数法显示的位数
//可能不同）：
//a.输入21.3或2.1e+001；
//b.输入+21.290或2.129E+001；
//#include <stdio.h>
//int main(void)
//{
//	double m;
//	scanf("%lf", &m);
//	printf("%f\n", m);
//	printf("%e\n", m);
//	return 0;
//}

//编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下
//面的格式显示用户刚输入的信息：
//Dabney, you are 6.208 feet tall
//#include <stdio.h>
//int main(void)
//{
//	float high;
//	char name[40] = { 0 };
//	printf("请输入您的身高和姓名:");
//	scanf("%f %[^\n]", &high, name);
//	printf("%s, you are %.3f feet tall.\n", name, high);
//	return 0;
//}

//第四章编程练习
// 5.6.7.8

//#include <stdio.h>
//int main(void)
//{
//	float Download_speed, File_size, Download_time;
//	printf("请输入以兆位每秒（Mb/s）为单位的下载速度\
//和以兆字节（MB）为单位的文件大小:");
//	scanf("%f %f", &Download_speed, &File_size);
//	Download_time = File_size / Download_speed;
//	printf("At %.2f megabits per second, a file of %.2f megabytes"
//		"\ndownloads in %.2f seconds.\n"
//		, Download_speed, File_size, Download_time);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char first_name[20] = { 0 };
//	char last_name[20] = { 0 };
//	printf("请输入名:");
//	scanf("%s", &first_name);
//	printf("请输入姓:");
//	scanf("%s", last_name);
//	int len1 = strlen(first_name);
//	int len2 = strlen(last_name);
//	printf("%s %s\n", first_name, last_name);
//	printf("%*d %*d\n", len1, len1, len2, len2);
//	printf("\n");
//	printf("%s %s\n", first_name, last_name);
//	printf("%-*d %-*d\n", len1, len1, len2, len2);
//	return 0;
//}

//#include <stdio.h>
//#include <float.h>
//int main(void)
//{
//	float m = 1.0/3.0;
//	double n = 1.0/3.0;
//	printf("FLT_DIG:%d\t    DBL_DIG:%d\n", FLT_DIG, DBL_DIG);
//	printf("%-20.6f%-20.6f\n", m, n);
//	printf("%-20.12f%-20.12f\n", m, n);
//	printf("%-20.16f%-20.16f\n", m, n);
//	return 0;
//}

//#include <stdio.h>
//#define Conversion_factor1 3.785//加仑转化为升
//#define Conversion_factor2 1.609//英里转化为公里
//int main(void)
//{
//	float mileage, fuel_consumpution;
//	printf("请输入旅行的里程(英里)和消耗的汽油量(加仑):");
//	scanf("%f %f", &mileage, &fuel_consumpution);
//	float L = fuel_consumpution * Conversion_factor1;//消耗汽油量(L)
//	float km = mileage * Conversion_factor1;//里程数(km)
//	float x1 = mileage / fuel_consumpution;//美国
//	float x2 = L / km*100;//欧洲
//	printf("美国:%.1f(英里/加仑)\n", x1);
//	printf("欧洲:%.1f(升/100千米)\n", x2);
//	return 0;
//}
 

//超级玛丽游戏
//#include <stdio.h>
//int main(void)
//{
//    printf("                ********                                      \n");
//    printf("               ************                                   \n");
//    printf("               ####....#.                                     \n");
//    printf("             #..###.....##....                                 \n");
//    printf("             ###.......######              ###            ### \n");
//    printf("                ...........               #...#          #...#\n");
//    printf("               ##*#######                 #.#.#          #.#.#\n");
//    printf("            ####*******######             #.#.#          #.#.#\n");
//    printf("           ...#***.****.*###....          #...#          #...#\n");
//    printf("           ....**********##.....           ###            ### \n");
//    printf("           ....****    *****....                              \n");
//    printf("             ####        ####                                 \n");
//    printf("           ######        ######                               \n");
//    printf("##############################################################\n");
//    printf("#...#......#.##...#......#.##...#......#.##------------------#\n");
//    printf("###########################################------------------#\n");
//    printf("#..#....#....##..#....#....##..#....#....#####################\n");
//    printf("##########################################    #----------#    \n");
//    printf("#.....#......##.....#......##.....#......#    #----------#    \n");
//    printf("##########################################    #----------#    \n");
//    printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#    \n");
//    printf("##########################################    ############    \n");
//    return 0;
//}

//字符三角形
//#include <stdio.h>
//int main(void)
//{
//    char a;
//    scanf("%c", &a);
//    printf("  %c  \n", a);
//    printf(" %c%c%c \n", a, a, a);
//    printf("%c%c%c%c%c\n", a, a, a, a, a);
//    return 0;
//}

//字母转换
//#include <stdio.h>
//int main(void)
//{
//    char m;
//    scanf("%c", &m);
//    printf("%c\n", m - 32);
//    return 0;
//}

//#include <stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALe = 0.333;
//	double shoe, foot;
//	shoe = 9.0;
//	foot = SCALe * shoe + ADJUST;
//	printf("Shoe size (men's) foot lenth\n");
//	printf("%-10.1f %-15.2f inches\n", shoe, foot);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int a = 25 + 10 * 2 / 10;
//	int b = (25 + 10 * 2 )/ 10;
//	printf("%d\n%d\n", a, b);
//	return 0;
//}


























