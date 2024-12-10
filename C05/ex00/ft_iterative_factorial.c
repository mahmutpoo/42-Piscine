/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:06 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:07 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int a=1;
    if(nb<0)
    return 0;
    else if(nb==0)
    return 1;
    else if(nb >0)
    {
    while(nb > 0)
    {
       a=(a*nb);
       nb--;
    }
    }
    return(a);

}


