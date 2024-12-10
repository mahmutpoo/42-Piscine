/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:17 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:18 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i=0;
    int new=1;
    while(str[i])
    {
       if( str[i] >='A' && str[i] <='Z')
       str[i] +=32;
       i++;
    }
    i=0;
    while(str[i])
    {
        if(str[i] >='a' && str[i] <='z')
        {
            if(new)
            str[i] -=32;
            new=0;
        }
        else if( str[i] >='A' && str[i] <='Z')
        {
            if(!new)
            str[i] +=32;
        }
        else if(!((str[i] >='a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z') || (str[i] >='0' && str[i] <='9')))
        new=1;
        else
        new=0;
        i++;
    }
 return str;
}

