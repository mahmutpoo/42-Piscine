/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:09 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:10 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_iterative_power(int nb, int power)
{
  int i=1;
  if(power<0)
  return 0;
  if(power==0)
  return 1;
  while(power>0)
  {
    i = i*nb;
    power--;
  }
  return(i);

}


