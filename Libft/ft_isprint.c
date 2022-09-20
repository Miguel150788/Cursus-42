#include<stdio.h>
#include <ctype.h>

int ft_isprint(char c){
    if((c == 32 )|| (c >= 9 && c <= 13))
        return(0);
    return (1);
}


int main()
{
    char c;
   
    c = 'd';
    printf("%d\n", ft_isprint(c));
   
   return(0);
}