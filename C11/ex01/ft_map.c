/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 00:47:26 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/08 00:47:55 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int *ft_map(int *tab, int length, int(*f)(int))
{
	int i=0;
	int *c=(int *)malloc(sizeof(int)*length);
	if(c ==NULL)
	return NULL;
	while (i<length)
	{
		c[i]=f(tab[i]);
		i++;
	}
	return c;

}
