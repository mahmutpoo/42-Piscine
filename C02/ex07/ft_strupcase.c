/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:39:06 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:39:07 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str)
{
	int i=0;
	while(str[i])
	{
		if(str[i]>= 97 && str[i]<= 122)
		 str[i] -=  32;
		 i++;
	}
	return str;
}


