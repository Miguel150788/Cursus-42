#include<unistd.h>
#include<stdio.h>
int	ft_str_is_alpha(char *str);

int main()
{
  int num;
char cadena[] = "holamundo";
num = ft_str_is_alpha(cadena);
printf("%d", num);
return(0);
}
