#include <unistd.h>
#include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int main()
{
	char str[] = " holqa que tal";
	char to_find[] = "que";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}