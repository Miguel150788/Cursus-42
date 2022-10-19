#include<unistd.h>
#include<stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char a [] = "hol";
	char b [] = "enenenen";
	char *src;
	char *dest;
	src = a;
	dest = b;
	int size;
    size = 5;
	printf("%s \n", src);
    int sup = ft_strlcpy( src, dest,size );
    printf("%s \n", dest);
	printf("%d ", sup);
	return (0);
}