#include<string.h>
#include<stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n){
    size_t i;
    size_t x;

    if(dest == src || n == 0)
        return (dest);
    if(dest<src){
        while(i<n){
            *((char *)dest + i) = *((char *)src + i);
            i++;
        }
    }
    else{
        x = 0;
        while(n>x){
            *((char *) dest + x -1) = *((char *) src + x - 1);
            x++;
        }
    }
    return(dest);
}
int main(){
    char src[] = "Hola como esta usted";
    char dest [] = "Hoy no me puedo levantar";

    printf("%s\n", ft_memmove(dest, src, 8));

}





