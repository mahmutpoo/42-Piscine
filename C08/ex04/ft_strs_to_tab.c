/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:46:45 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/28 19:55:20 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int ft_strlen(char *str)
{
    int i=0;
    while(str[i])
    i++;
    return(i);
}
char *ft_strdup(char *src)
{
  int len=0;
  while(src[len])
  len++;
  char *c=malloc((len*sizeof(char))+1);
  len=0;
  while (src[len])
  {
    c[len]=src[len];
    len++;
  }
  c[len]='\0';
 return(c);

}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
   t_stock_str *a;
   a = (t_stock_str *)malloc(sizeof(t_stock_str) * ac+1);
   if (a == NULL)
   return (NULL);

   int i=0;
   int j=0;
   while(i<ac)
   {
    a[i].str=ft_strdup(av[i]);
    if (a[i].str == NULL)
    {
        j=0;
        while(j<i)
        {
            free(a[j].str);
            j++;
        }
        free(a);
        return NULL;
    }
    a[i].size=ft_strlen(av[i]);
    a[i].copy=ft_strdup(a[i].str);
    if (a[i].copy == NULL)
    {
        j=0;
        while(j<i)
        {
            free(a[j].copy);
            j++;
        }
        free(a);
        return NULL;
    }
    i++;
   }
 return(a);
}
