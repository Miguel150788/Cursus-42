#include<unistd.h>
#include<stdio.h>

int	main ()
{
	char str [] = "Ñ";
	int sup;
	sup = ft_str_is_printable(str);
	printf("%d", sup );
	return(0);
}
