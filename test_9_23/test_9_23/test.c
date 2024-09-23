#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main(void)
//{
//	scanf("%d", &n);
//	int n, arr[100];
//	for (int i = 0; i < n; i++)
//	{
//		int count = 0;
//		scanf("%d", &arr[i]);
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (arr[j] < arr[i])
//			{
//				count++;
//			}
//		}
//		printf("%d ", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int arr[100], i = 0;
//	scanf("%d", &arr[i]);
//	while (arr[i] != 0)
//	{
//		i++;
//		scanf("%d", &arr[i]);
//	}
//	for (int j = i - 1; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char ch[100];
//	scanf("%s", ch);
//	for (int i = 0; i < strlen(ch); i++)
//	{
//		if (ch[i] >= 97 && ch[i] <= 122)
//		{
//			ch[i] -= 32;
//		}
//	}
//	printf("%s", ch);
//	return 0;
//}

//#include <stdio.h>
// #include <string.h>
//int main(void)
//{
//	char ch[50];
//	int n;
//	scanf("%d", &n);
//	scanf("%s", ch);
//	for (int i = 0; i < strlen(ch); i++)
//	{
//		if (ch[i] + n <= 122)
//		{
//			ch[i] += n;
//		}
//		else
//		{
//			ch[i] = ch[i] + n - 26;
//		}
//		printf("%c", ch[i]);
//	}
//	return 0;
//}
 
//#include <stdio.h>
//#define MSG "I am a symbolic string constant."
//#define MAXLENGTH 81
//int main(void)
//{
//	char words[MAXLENGTH] = "I am a string in an array.";
//	const char* pt1 = "Something is pointing at me.";
//	puts("Here are some strings:");
//	puts(MSG);
//	puts(words);
//	puts(pt1);
//	words[8] = 'p';
//	puts(words);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 1, n = m++, p = ++n, test = 0, i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		++test;
//		if (p < 5) 
//		{
//			p += 2;
//			(m > n) ? ++m : --n;
//		}
//		else 
//		{
//			break;
//		}
//	}
//	return 0;
//}




































