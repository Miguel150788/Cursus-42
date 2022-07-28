/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbueno-m <m@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:53:30 by mbueno-m          #+#    #+#             */
/*   Updated: 2022/07/26 12:53:34 by mbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int ft_iterative_factorial(int nb)

{
    int c;
    int resultado;
    resultado = 1;
    c = 1;
    while(c<=nb)
    {
        resultado= resultado * c;
        c++;
    }
    return(resultado);
}

int main()
{
    int nb;
    nb = 5;
    printf("%d", ft_iterative_factorial(nb));
    return(0);
}
