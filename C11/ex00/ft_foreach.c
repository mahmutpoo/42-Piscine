/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:37:05 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/03 16:37:25 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
void put(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nb)
{
    if(nb ==-2147483648)
    {
        write(1,"-2147483648",11);
        return ;
    }
    if(nb<0)
    {
        write(1,"-",1);
        nb *= -1;
    }
    if(nb>9)
    ft_putnbr(nb/10);
    put('0'+(nb%10));
}
void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i=0;
	while (i<length)
	{
		f(tab[i]);
		i++;
		write(1,"\n",1);
	}


}
int main(int argc, char **argv)
{
	int tab[] = {1, 2, 3, 4, 5};
	ft_foreach(tab,5,&ft_putnbr);
}
