#include<unistd.h>
#include<stdio.h>
int main(int ac, char **av)
{
    int i;
    int j;
    char swap;
    
    j = 0;
    i = 0;
    while(av[1][i]!='\0')
    {
        i++;
    }
    while (j < (i / 2))
    {
        swap = *av[j];
        av[j] = av[i -j -1];
        av[i -j -1]= &swap;
        j++;

    }
    printf("%s", *av);
    return(0);
}