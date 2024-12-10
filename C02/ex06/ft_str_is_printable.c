/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:13 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:14 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int i=0;
	while(str[i])
	{
		if(!(str[i] >= 32 && str[i] <= 126))
		return(0);
		i++;
	}
	return(1);
}


