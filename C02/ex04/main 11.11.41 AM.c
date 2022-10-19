#include<stdio.h>
#include<unistd.h>

int main()
{
    char caracter [] = "holamundo";
    int sup;
    sup = ft_str_is_lowercase(caracter);
    printf("%d", sup);
    return (0);
}