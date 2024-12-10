/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:11 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:12 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str)
{
	int i=0;
	while (str[i])
	{
		if(!(str[i] >=48 && str[i] <=57 ))
		return(0);
		i++;
	}
	return(1);


}
