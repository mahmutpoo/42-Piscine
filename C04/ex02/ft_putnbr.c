/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:29 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:30 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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
int main()
{
    int i=-8;
    ft_putnbr(i);
}
