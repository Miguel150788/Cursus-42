
#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str);

int main()
{
    char src [] = "Holamundo";
    printf("%d",ft_strlen(src));
    return(0);
}