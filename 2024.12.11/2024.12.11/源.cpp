#include <stdio.h>
#include <assert.h>
#include <string.h>
int my_strcmy(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}

	return *str1 - *str2;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abq";
	 
	int ret = my_strcmy(arr1, arr2);
	if (ret == 0)
	{
		printf("==");
	}
	else
	{
		printf("!=");
	}

	return 0;
}