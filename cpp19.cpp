// cpp19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char str1[512];
	char str2[512];
	size_t num = 0;
	scanf_s("%s", str1, sizeof(str1) / sizeof(char));
	scanf_s("%s", str2, sizeof(str2) / sizeof(char));
	scanf_s("%u", &num);
	int res = memcmp(str1, str2, num);
	printf("%d\r\n", res);
	return 0;
}

int memcmp(const void * memptr1, const void * memptr2, size_t num)
{
	char *ch1 = (char *)memptr1;
	char *ch2 = (char *)memptr2;
	for (int i = 0; i < num; i++)
	{
		if (ch1[i] != ch2[i])
			return (int)ch1[i] - (int)ch2[i];
	}
	return 0;
}

