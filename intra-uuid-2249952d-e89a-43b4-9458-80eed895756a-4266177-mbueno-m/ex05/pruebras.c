#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
	write(1,&c, 1 );
}

void ft_print(int number)
{	
	if (number > 9)
	{
		ft_putchar(number/10 + 48);
		ft_putchar(number%10 + 48);
	}	
	else 
		ft_putchar(number%10 +48);
}
int main ( void)
{
  int number; 

  number = 1;
  while(number<= 100)
  {
    if (number%3 ==0 && number%5 == 0)
		write(1, "Fizzbuzz", 8);
	else if (number % 3 == 0)
		write(1, "fizz", 4);
	else if ( number % 5 == 0)
		write(1, "buzz", 4);
	else 
		ft_print(number);
	write(1, "\n", 1);
	number++;
  }
}
