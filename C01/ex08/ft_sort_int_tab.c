/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:55 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:56 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
	int start=0;
	int end=size-1;
	int temp;
	while(start<end)
	{
		if(tab[start]> tab[start+1])
		{
	    	temp=tab[start];
			tab[start]=tab[start+1];
			tab[start+1]=temp;
			start=0;
			temp=0;
	    }
		else
		start++;
	}
}


