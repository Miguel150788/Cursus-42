#include<unistd.h>
#include<stdio.h>

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
    int sup = ft_strlcpy( dest, src, size );
    printf("%s \n", dest);
	printf("%d ", sup);
	return (0);
}