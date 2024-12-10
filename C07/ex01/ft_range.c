/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:43 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:44 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
  if (min >= max)
    return (NULL);

  int *dizi=malloc((max- min) * sizeof(int));
    if (!dizi)
    return (NULL);
  int i=0;

  while(min<max)
  {
    dizi[i]=min;
    min++;
    i++;
  }
  return(dizi);


}
