#include<unistd.h>
#include<stdio.h>
int main ()
{
char src [] = "hola";
char dest [] = "mundo";
ft_strcat(dest, src);
printf("%s", src );
return (0);
}