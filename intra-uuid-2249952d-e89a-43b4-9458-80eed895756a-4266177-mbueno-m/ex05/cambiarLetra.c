#include<unistd.h>
#include<stdio.h>

int main()
{
  char str [] = "holamundo";
  int i ;
  i = 0;
  while(str[i]!='\0')
  {
    i++;
  }
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	i=0;
	
  return (0);
}