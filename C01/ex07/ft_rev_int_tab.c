/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:50 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:51 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i=0;
	int temp;
	size =size-1;
	while(i <size)
	{
		temp=tab[i];
		tab[i]=tab[size];
		tab[size]=temp;
		i++;
		size--;
	}
}


