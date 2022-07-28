
#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str);

int main()
{
    char num [] = "   --++--12011mmm12312";
    printf("%d", ft_atoi(num));
    return (0);
}