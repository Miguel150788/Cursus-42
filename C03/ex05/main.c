#include<unistd.h>
#include<stdio.h>

int main()
{
	char src [] = "123";
	char dest [] = "hola";
	unsigned int size;
	size = 2;
	printf("%u", ft_strlcat(dest, src, size));
	return (0);
}