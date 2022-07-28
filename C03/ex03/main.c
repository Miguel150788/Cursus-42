#include<stdio.h>
#include<unistd.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char src [] = "mundo";
	char dest [] = "hola";
	unsigned int nb;

	nb = 4;
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}