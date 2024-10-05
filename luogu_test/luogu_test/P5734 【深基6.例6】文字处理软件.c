#define _CRT_SECURE_NO_WARNINGS

/*#include <stdio.h>
#include <string.h>
int main()
{
	int q;
	scanf("%d", &q);
	char str1[200], str2[100];
	scanf("%s", str1);
	int n, a, b;
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			scanf("%s", str2);
			strcat(str1, str2);
			printf("%s\n", str1);
			break;
		case 2:
			scanf("%d%d", &a, &b);
			str1[a + b] = '\0';
			strcpy(str2, str1 + a);
			strcpy(str1, str2);
			printf("%s\n", str1);
			break;
		case 3:
			scanf("%d%s", &a, str2);
			strcat(str2, str1 + a);
			str1[a] = '\0';
			strcat(str1, str2);
			printf("%s\n", str1);
			break;
		case 4:
			scanf("%s", str2);
			char* p = strstr(str1, str2);
			printf("%d\n", p != NULL ? (int)(p - str1) : -1);
			break;
		default:
			break;
		}
	}
	return 0;
}*/

