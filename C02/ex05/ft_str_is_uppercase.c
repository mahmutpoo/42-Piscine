/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:14 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:15 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
	int i=0;
	while(str[i])
	{
		if(!(str[i]>=65 &&  90>=str[i]))
		return(0);
		i++;
	}
	return(1);
}
