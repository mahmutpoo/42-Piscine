/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:39:17 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:39:18 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_ultimate_range(int **range, int min, int max)
{
  if (min >= max)
  {
	*range=NULL;
    return (0);
  }

   *range=malloc((max- min) * sizeof(int));
    if (!*range)
    return (-1);
  int i=0;

  while(min<max)
  {
    (*range)[i]=min;
    min++;
    i++;
  }
  return(max-min);
}
