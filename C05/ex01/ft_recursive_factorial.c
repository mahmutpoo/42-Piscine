/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:45 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:46 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*5 4 3 2 1*/
int ft_recursive_factorial(int nb)
{
  if(nb==0 )
  return 1;
  if(nb <0)
  return 0;

  return (nb * ft_recursive_factorial(nb-1));
}



