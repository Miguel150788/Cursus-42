#include<stdio.h>
int	ft_strcmp(char *s1, char *s2);
int main()
{
    char s1 [] = "ABA";
    char s2 [] = "ABZ";
    int sup;
    sup = ft_strcmp(s1, s2);
    printf("%d \n", sup);
    return (0);
}
