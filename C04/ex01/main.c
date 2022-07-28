#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str);

int main()
{
    char string [] = "hola mundo";
    ft_putstr(string);
    return (0);
}