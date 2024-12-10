/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:48 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:49 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int index=0;
    int i=0;
    while(src[i])
    i++;
    if(size !=0)
    {
        while((size-1)> index &&src[index])
        {
            dest[index]=src[index];
            index++;
        }
    dest[index]='\0';
    return(i);
}
}

