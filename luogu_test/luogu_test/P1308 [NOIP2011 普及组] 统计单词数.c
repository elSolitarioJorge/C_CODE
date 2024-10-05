#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <string.h>
//char word[11], text[1000010];
//int main()
//{
//	int count = 0, place;
//	text[0] = ' ';
//	scanf("%s", word);
//	scanf("%*c%[^\n]", text + 1);
//	text[strlen(text)] = ' ';
//	for (int i = 0; word[i] != '\0'; i++)
//	{
//		if (word[i] >= 'A' && word[i] <= 'Z')
//		{
//			word[i] += 32;
//		}
//	}
//	for (int i = 0; i < strlen(text); i++)
//	{
//		int a = 0;
//		if (text[i] == ' ' && text[i + strlen(word) + 1] == ' ')
//		{
//			for (int j = 0; j < strlen(word); j++)
//			{
//				if (word[j] == text[j + i + 1]||word[j] - 32 == text[j + i + 1])
//				{
//					a++;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		if (a == strlen(word))
//		{
//			if (count == 0)
//			{
//				place = i;
//			}
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("%d %d", count, place);
//	}
//	return 0;
//}