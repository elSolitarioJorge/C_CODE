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
//	scanf("%[^\n]", name);//scanf�����ַ������пո���%[^\n],��˼Ϊ����\n����
//	printf("All right, %s, what's your age?\n", name);
//	scanf("%d", &age);
//	xp = age + X;
//	printf("That's a %s! You must be at least %d.\n", B, xp);
//	return  0;
//}

//����һ������Ŀ�ͷ��������
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//�빹��һ��ʹ��BOOK��cost��percent��printf()��䣬��ӡ�������ݣ�
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
//	//printf��ӡ���ӹ��������ú����ַ�ʽ���Ӵ���ɶ���
//	return 0;
//}

//��дһ��������ʾ�û����������գ�Ȼ���ԡ���,�ա��ĸ�ʽ��ӡ����
//#include <stdio.h>
//int main(void)
//{
//	char first_name[40] = { 0 };
//	char last_name[40] = { 0 };
//	printf("������������:>");
//	scanf("%s", first_name);
//	printf("������������:>");
//	scanf("%s", last_name);
//	printf("%s,%s\n", first_name, last_name);
//	return 0;
//}

//��дһ��������ʾ�û����������գ���ִ��һ�²�����
//a.��ӡ�����գ�����˫���ţ�
//b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ�����˫���ţ�
//c.�ڿ��Ϊ20���ֶ���˴�ӡ�����գ�����˫���ţ�
//d.�ڱ�������ȿ�3���ֶ��д�ӡ�����ա�
//#include <stdio.h>
//int main(void)
//{
//	char name[40] = { 0 };
//	printf("��������������:>");
//	scanf("%[^\n]", name);
//	printf("\"%s\"\n", name);
//	printf("\"%20s\"\n", name);
//	printf("\"%-20s\"\n", name);
//	printf("\"%-*s\"\n",strlen(name)+3, name);
//	return 0;
//}

//��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ��
//��������ӡ��������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ��
//���ܲ�ͬ����
//a.����21.3��2.1e+001��
//b.����+21.290��2.129E+001��
//#include <stdio.h>
//int main(void)
//{
//	double m;
//	scanf("%lf", &m);
//	printf("%f\n", m);
//	printf("%e\n", m);
//	return 0;
//}

//��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ������
//��ĸ�ʽ��ʾ�û����������Ϣ��
//Dabney, you are 6.208 feet tall
//#include <stdio.h>
//int main(void)
//{
//	float high;
//	char name[40] = { 0 };
//	printf("������������ߺ�����:");
//	scanf("%f %[^\n]", &high, name);
//	printf("%s, you are %.3f feet tall.\n", name, high);
//	return 0;
//}

//�����±����ϰ
// 5.6.7.8

//#include <stdio.h>
//int main(void)
//{
//	float Download_speed, File_size, Download_time;
//	printf("����������λÿ�루Mb/s��Ϊ��λ�������ٶ�\
//�������ֽڣ�MB��Ϊ��λ���ļ���С:");
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
//	printf("��������:");
//	scanf("%s", &first_name);
//	printf("��������:");
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
//#define Conversion_factor1 3.785//����ת��Ϊ��
//#define Conversion_factor2 1.609//Ӣ��ת��Ϊ����
//int main(void)
//{
//	float mileage, fuel_consumpution;
//	printf("���������е����(Ӣ��)�����ĵ�������(����):");
//	scanf("%f %f", &mileage, &fuel_consumpution);
//	float L = fuel_consumpution * Conversion_factor1;//����������(L)
//	float km = mileage * Conversion_factor1;//�����(km)
//	float x1 = mileage / fuel_consumpution;//����
//	float x2 = L / km*100;//ŷ��
//	printf("����:%.1f(Ӣ��/����)\n", x1);
//	printf("ŷ��:%.1f(��/100ǧ��)\n", x2);
//	return 0;
//}
 

//����������Ϸ
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

//�ַ�������
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

//��ĸת��
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


























