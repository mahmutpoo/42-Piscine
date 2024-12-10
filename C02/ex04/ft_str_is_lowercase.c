/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:08 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:09 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
	int i=0;
	while(str[i])
	{
		if(!(str[i]>= 97 && str[i] <= 122))
		return(0);
		i++;
	}
	return(1);
}


