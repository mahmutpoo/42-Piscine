/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:28 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:29 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


