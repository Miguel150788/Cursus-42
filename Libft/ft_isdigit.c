#include <ctype.h>
#include<stdio.h>

int ft_isdigit(char c){
    if (c >= '0' && c <= '9'){
        return (1);
    }else{
        return (0);
    }
}




int main(){
    char c;

    c = 'z';


    printf("%d \n", isdigit(c));
    printf("%d \n", ft_isdigit(c));
    return(0);
}