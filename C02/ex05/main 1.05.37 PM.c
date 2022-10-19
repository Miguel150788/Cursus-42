#include<stdio.h>
#include<unistd.h>

int ft_str_is_uppercase(char *str);

int main()
{
	int sup;
	char str [] = "aaaa";
	sup = ft_str_is_uppercase(str);
	printf("%d", sup);
	return(0);
}