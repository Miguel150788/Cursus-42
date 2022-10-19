#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
    
    char src [] = "hola mundo";
    char dest [] = "Esto";
    unsigned int n;
    n = 10;
    ft_strncpy(dest, src, n);
    printf("%s \n", src);
    printf("%s ", dest);
    return(0);
}