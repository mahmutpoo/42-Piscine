/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:24:41 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/03 17:29:08 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int ft_count_if(char **tab, int length, int(*f)(char*))
{

	int j=0;
	int k=0;
	while (tab[j])
	{
		if(f(tab[j]))
		k++;
		j++;

	}
	return(k);

}
