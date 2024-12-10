/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:58 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:59 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i=0;
	while((s1[i] ||s2[i]) && (i < n))
	{
		if(s1[i] != s2[i])
		return(s1[i]-s2[i]);
		i++;
	}
	return 0;
}


