#include<stdio.h>
#include<ctype.h>

int ft_toupper(char c){
    if (c >= 'A' && c <= 'Z')
        c +=32;
    return(c);
}
int main(){
    char c;
    c = 'A';

    printf("%c\n", ft_toupper(c));
    printf("%c\n", tolower(c));
}