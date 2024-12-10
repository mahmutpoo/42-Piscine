/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:36:43 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:41:44 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>




int base_error(char *base)
{
	int i=0;
	int j=0;
	while(base[i])
	{
		if(base[i]=='-' ||base[i] =='+' ||base[i] <= ' ')
		return(-1);
		j =i+1;
		while(base[j])
		{
			if(base[j]==base[i])
			return -1;
			j++;
		}
		i++;
	}

	if (i <= 1)
    return (-1);

	return(0);
}
int str_control(char *str,char *base)
{
    int i=0;
    while(str[i] <=' ')
    i++;
    if(str[i] =='+' || str[i] == '-')
    i++;
    if(str[i]== '\0')
    return 0;
    int k=0;
    int control=0;
    while(str[i])
    {
        while(base[k])
        {
            if(base[k]==str[i])
            control=1;
            k++;
        }
        if(control==0)
        return 0;
        k=0;
        control=0;
        i++;

    }
 return(1);

}
int get_index(char c,char *base)
{
    int i=0;
    while(base[i])
    {
        if(base[i]==c)
        return i;
        i++;
    }
    return -1;
}


int		ft_atoi_base(char *str, char *base)
{
	if (!str || !base || *str == '\0' || base_error(base) == -1)
    return 0;

    int sign=1;
    if(str_control(str,base)==1)
    {
        int i=0;
        while(str[i] <=' ')
        i++;
        if(str[i] =='+' || str[i] =='-')
        {
            if(str[i]=='-')
            sign *= -1;
            i++;
        }

        int base_len=0;
        int result=0;
        while(base[base_len])
        base_len++;
        while(str[i])
        {
            int index=get_index(str[i],base);
            if(index== -1)
            break;
            result= result * base_len + index;
            i++;
        }
        return( sign*result);
    }


}
