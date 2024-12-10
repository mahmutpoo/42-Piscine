/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat*****.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:34 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:35 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int i = 0;


    while (dest[dest_len] && dest_len < size)
        dest_len++;


    while (src[src_len])
        src_len++;


    if (size <= dest_len)
        return (size + src_len);

    while (src[i] && (dest_len + i < size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    if (dest_len + i < size)
        dest[dest_len + i] = '\0';

    return (dest_len + src_len);
}


