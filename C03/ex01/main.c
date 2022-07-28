#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int main()
{
	char s1 [] = "aaa";
	char s2 [] = "aaa";

	int n;

	n = 6;
	printf("%d \n", ft_strncmp(s1, s2, n));
		printf("%d", strncmp(s1, s2, n));

	return (0);
}