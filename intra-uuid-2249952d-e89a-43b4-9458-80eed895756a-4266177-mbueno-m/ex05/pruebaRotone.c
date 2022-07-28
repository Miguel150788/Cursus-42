#include<unistd.h>
void putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char **argv)
{
	char i;
	int temp;

	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] < 'z')
		{
			temp = argv[1][i] +1;
			write(1, &temp, 1);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
		{
			temp = argv[1][i] + 1;
			write(1, &temp, 1);
		}	
		else if (argv[1][i] == 'z')
			write(1, "a", 1);
		else if (argv[1][i] == 'Z')
			write(1, "A", 1);
		i++;
	}
	return (0);
}
