/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:20 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:21 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
    int i=0;
    int j=0;
    while (dest[i])
    i++;
    while(src[j])
    {
        dest[i]=src[j];
        j++;
        i++;
    }
    dest[i]='\0';
    return(dest);

}
