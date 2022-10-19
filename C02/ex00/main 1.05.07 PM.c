#include<unistd.h>
#include<stdio.h>

int main()
{
	char a [] = "nenenenenenenen";
	char b [] = "holamundo";
	char *src;
	char *dest;
	src = a;
	dest = b;
	ft_strcpy( src, dest);
	printf("%s \n", src);
	printf("%s ", dest);
	return(0);
}
