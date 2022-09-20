#include<stdio.h>
#include<string.h>


int ft_strlen(char *str){
    int i;

    i = 0;
    while (str[i]){
        i++;
    }
    return(i);
}

int main (){
    char c [ ] = "Hola mundo";

    printf("%lu\n", ft_strlen(c));
    printf("%lu\n",strlen(c));

}