/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:29:40 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/10 19:29:41 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    int i=0;
    while(s1[i] || s2[i])
    {
        if(s1[i] != s2[i])
        return(s1[i]-s2[i]);
        i++;
    }
    return(0);

}

/*int main()
{
    char str[]="a";
    char str2[]="hello";
    printf("%d",ft_strcmp(str,str2));

}*/

