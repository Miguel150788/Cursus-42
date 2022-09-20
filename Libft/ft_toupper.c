#include<stdio.h>
#include<ctype.h>

int ft_toupper(char c){
    if (c >= 'a' && c <= 'z')
        c -=32;
    return(c);
}
int main (){
    char c;
    c = 'c';
    printf("%c\n", ft_toupper(c));
    printf("%c\n", toupper(c));

    return(0);
}