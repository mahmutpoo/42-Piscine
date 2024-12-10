/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:36:46 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:36:47 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str)
{
    int i=0;
    int result=0;
    int sign=1;
    if (str == NULL || str[0] == '\0')
    return 0;

    while(str[i] ==' '|| str[i]== '\n' || str[i] =='\t'|| str[i]== '\r')
    i++;
    while(str[i]== '+' || str[i] =='-')
    {
        if(str[i]== '-')
        sign *= -1;
        i++;
    }
    while((str[i] >='0' && str[i] <='9') &&( str[i]))
    {
        result=(result *10)+(str[i]-'0');
        i++;
    }
    return(result*sign);
}
int main()
{
    char str[]="a";
   printf("%d",ft_atoi(str));
}
