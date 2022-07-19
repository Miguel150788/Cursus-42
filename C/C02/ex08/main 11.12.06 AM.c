#include<unistd.h>
#include<stdio.h>

int main()
{
  char string [] = "Dime Un Nombre";
	ft_strlowcase(string);
	printf("%s", string);
  return(0);
}