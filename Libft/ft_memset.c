#include<stdio.h>
#include<string.h>

char ft_memset(char *str, char c, int num){
   int i;

   i = 0;
   while(i < num){
      str[i]= c;
      i++;
   }
   return(*str);
} 



int main () {

   char str []= "This is string.h library function";
   puts(str);

   //memset(str,'$',7);
   //puts(str);
   ft_memset(str,'%', 7);
   puts(str);
   return(0);
}