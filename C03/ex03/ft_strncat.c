/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:55 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:57 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i=0;
    int j=0;
    while(dest[i])
    i++;
    while(src[j] &&(j <nb))
    {
        dest[i]=src[j];
        i++;
        j++;
    }
    dest[i]='\0';
    return(dest);

}
