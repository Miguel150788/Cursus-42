#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    char tem;

    i = 0;
    if(ac == 2)
    {
        while(av[1][i]!= '\0')
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                tem = av[1][i] - 32;
                write(1, &tem,1);
                i++;
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                tem = av[1][i] + 32;
                write(1, &tem,1);
                i++;
            }else
            {
                tem = av[1][i];
                write ( 1, &tem,1);
                i++; 
            }
                
        }
    }
    return (0);
}