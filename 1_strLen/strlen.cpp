#include <iostream>

int strlenn(const char *s)
{

	int length = 0;

	while (s[length] != '\0')
	{

		length++;
	}

	return length;
}

int main()
{

	const char *str = "Hello, World!";

	std::cout << "Length of string: " << strlenn(str) << std::endl;

	return 0;
}
