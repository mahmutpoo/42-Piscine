/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:36:58 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:36:59 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
  if( nb ==0 || nb ==1 || nb <0)
  return 0;
  if(nb ==2 )
  return 1;
  int i=2;
 while(nb >=i*i)
 {
   if(nb % i ==0)
   return 0;
   i++;
 }
  return 1;
}
int ft_find_next_prime(int nb)
{
  if (nb <= 2)
  return 2;
while (1)
  {
        if (ft_is_prime(nb))
        return nb;
        nb++;
  }
}
