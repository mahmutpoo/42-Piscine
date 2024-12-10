/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:29:45 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/10 19:29:46 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_swap(int *a, int *b)
{
    int swap;
    swap=*a;
     *a=*b;
    *b=swap;


}
/*int main()
{
    int x=5;
    int y=6;
    int *a;
    int *b;
    a=&x;
    b=&y;
    ft_swap(a,b);
    printf("a değeri :%d  b değeri :%d\n",*a,*b);
}*/
