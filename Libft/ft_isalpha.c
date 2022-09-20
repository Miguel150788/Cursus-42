#include<unistd.h>
#include<stdio.h>
#include <ctype.h>

int ft_isalpha(char c){
    
    if(c >= 'A' && c <= 'Z' ||  c >= 'a' && c <= 'z'){
        return (1);
    }else{
        return (0);
    }
}

int main(){

    char c;

    c = 'C' ;
    printf("%d \n",ft_isalpha(c));
    printf("%d \n",isalpha(c));

    return (0);
}