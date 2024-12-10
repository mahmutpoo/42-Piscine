/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:53 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:54 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str)
{
	int i=0;
	while(str[i])
	{
		if(str[i]>=65 && str[i]<= 90)
		str[i] +=32;
    i++;
	}
	return(str);
}
