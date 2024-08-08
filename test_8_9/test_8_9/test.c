#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//×Ö·û´®ÄæÐò
int main()
{
	char arr[] = "abcdefg";//[a,b,c,d,e,f,g,\0]
	int left = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int right = sz - 2;
	int sz = strlen(arr);
	int right = sz - 1;
	while (left<right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s\n", arr);
	return 0;
}







































