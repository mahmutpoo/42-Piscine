/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:48 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:49 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*  2*2*2 */
void yaz( char c)
{
    write(1,&c,1);
}
int ft_recursive_power(int nb, int power)
{
  if(power <0)
  return 0;
  if(power ==0)
  return 1;
  return nb* ft_recursive_power(nb,power-1);
}

