/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:39:03 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/28 17:46:53 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strstr(char *str, char *to_find)
{
    int i=0;
    int j=0;
    if(to_find[j]== '\0')
    return (str);
    while (str[i])
    {
        while(str[i+j] ==to_find[j]&& str[i+j])
        {
            if(to_find[j+1]=='\0')
            return(&str[i]);
            j++;
        }
        j=0;
    i++;
    }

    return(0);


}

