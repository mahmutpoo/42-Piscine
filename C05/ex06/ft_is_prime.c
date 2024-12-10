/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:04 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:05 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
  if( nb ==0 || nb ==1 || nb <0)
  return 0;
  if(nb ==2 || nb==3)
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