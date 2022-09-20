#include<stdio.h>
#include<ctype.h>

int ft_isascii(char c){
	if (c >= 0 && c <= 127){
		return(1);
	}else{
		return (0);
	}
}
int main()
{
  char c [] =  'Û';
 	printf("%d\n",ft_isascii(c));
	printf("%d\n",isascii(c));
   return 0;
}

//Verificar funcion no hace correcto
