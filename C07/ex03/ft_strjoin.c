/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:31 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:38:32 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i=0;
	while(str[i])
	i++;
	return(i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int toplam_len=0;
	int sep_uzunluk=0;
	int j=0;
	int i=0;
	if(size==0)
	{
		char *str=malloc(1);
		str[0]='\0';
		return (str);
	}
	while(j <size)
	{
		toplam_len += ft_strlen(strs[j]);
		j++;
	}
	toplam_len +=(size-1) * (ft_strlen(sep));
	char *dizi=malloc(toplam_len*sizeof(char)+1);
	if (!dizi)
    return (NULL);
	i=0;
	j=0;
	int k=0;
	int x=0;
	while(i<size)
	{
		while(strs[i][j])
		{
			dizi[k]=strs[i][j];
			k++;
			j++;
			if(strs[i][j]=='\0' && (i+1) <size)
			{
				while (sep[x])
				{
					dizi[k]=sep[x];
					x++;
					k++;
				}
				x=0;

			}

		}

		j=0;
		i++;
	}
	dizi[k]='\0';
 return(dizi);

}

