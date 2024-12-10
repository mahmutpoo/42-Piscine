/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:46:09 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/03 17:46:24 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>


int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int k=0;
	while (k<length-1)
	{
		if(f(tab[k],tab[k+1])>0)
		return 0;
		k++;
	}
 return 1;
}
