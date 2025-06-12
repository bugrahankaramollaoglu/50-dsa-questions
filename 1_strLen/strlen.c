#include <stdio.h>

int strlenn(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return i;
}

int main()
{
	char *a = "bugra kara";
	printf("%d\n", strlenn(a));
}
