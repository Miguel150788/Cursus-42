#include<unistd.h>
#include<stdio.h>

int main()
{
    char caracter [] = "7777";
    int sup;
    sup = ft_str_is_numeric(caracter);
    printf("%d", sup);
    return(0);
}
