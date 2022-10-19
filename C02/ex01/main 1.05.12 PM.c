#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
    
    char src [] = "hola mundo";
    char dest [] = "Estomimimimiim";
    unsigned int n;
    n = 5;
    ft_strncpy(dest, src, n);
    printf("%s \n", src);
    printf("%s ", dest);
    return(0);
}