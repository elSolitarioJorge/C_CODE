#define _CRT_SECURE_NO_WARNINGS

//��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո�����
//���з��������������ַ���������
//#include <stdio.h>
//int main(void)
//{
//	int x = 0;//�ո���
//	int y = 0;//���з���
//	int z = 0;//�����ַ���
//	char ch;
//	printf("�������ַ������ַ�'#'��β��:\n");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == ' ')
//		{
//			x++;
//			continue;
//		}
//		else if (ch == '\n')
//		{
//			y++;
//		}
//		else
//      {
//			z++;
//      }
//	}
//	printf("x=%d  y=%d  z=%d\n", x, y, z);
//	return 0;
//}

//��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ���������
//���Լ���Ӧ��ASCII�루ʮ���ƣ���һ�д�ӡ8���ַ������� : ʹ���ַ�����
//����ģ�������% ����ÿ8��ѭ������ʱ��ӡһ�����з���
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	char ch;
//	while ((ch = getchar()) != '#')
//	{
//		printf("%c %d\t", ch, ch);
//		i++;
//		if (i % 8 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//��дһ�����򣬶�ȡ����ֱ���û����� 0����������󣬳���Ӧ����
//�û������ż���������� 0����������Щż����ƽ��ֵ�����������������
//��������ƽ��ֵ��
//#include <stdio.h>
//int main(void)
//{
//	int n_odd = 0;
//	int n_even = 0;
//	int sum_odd = 0;
//	int sum_even = 0;
//	int input;
//	float i, j;
//	printf("������һЩ����������0��������");
//	while (scanf("%d", &input) == 1)
//	{
//		if (0 == input)
//		{
//			break;
//		}
//		else if (0 == (input % 2))
//		{
//			n_even++;
//			sum_even += input;
//		}
//		else
//		{
//			n_odd++;
//			sum_odd += input;
//		}
//	}
//	i = sum_even / n_even;
//	j = sum_odd / n_odd;
//	printf("ż��������%d  ż��ƽ������%f\n", n_even, i);
//	printf("����������%d  ����ƽ������%f\n", n_odd, j);
//	return 0;
//}
 
















