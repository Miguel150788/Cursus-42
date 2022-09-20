#include<ctype.h>
#include<stdio.h>

int ft_isalnum(char c){
    if (c >= '0' && c <= '9'){
        return (1);
    }else if (c >= 'A' && c <= 'Z' ||  c >= 'a' && c <= 'z'){
        return (1);
    }else{
        return (0);
    }
}
int main()
{
  
   char c;

   c = '+'; 
    printf("%c, %d\n", c, isalnum(c));
    printf("%c, %d\n", c, ft_isalnum(c));
   return 0;
};