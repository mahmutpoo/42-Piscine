/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:38:01 by mapolat           #+#    #+#             */
/*   Updated: 2024/12/01 23:39:42 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int	is_in_charset(char c, char *charset)
{
    int i=0;
    while (charset[i])
    {
        if(charset[i]== c)
        return 1;
        i++;
    }
    return(0);


}

int	kelime_sayısı(char *str, char *charset)
{
    int say=0;
    int i=0;
    while (str[i])
    {
        while(str[i]&& is_in_charset(str[i],charset))
        i++;
        if(str[i])
        {
            say++;
            while(str[i] && !is_in_charset(str[i],charset))
            i++;
        }
    }
    return(say);

}

char	*malloc_word(char *str, char *charset)
{
    int i=0;
    char *c;
    while(str[i] && !is_in_charset(str[i],charset))
    i++;
    c=(char *)malloc((sizeof(char) * i)+1);
    if(!c)
    return NULL;
    i=0;
    while(str[i] && !is_in_charset(str[i],charset))
    {
        c[i]=str[i];
        i++;
    }
    c[i]='\0';
    return (c);
}

char **ft_split(char *str, char *charset)
{
    if(!str || !charset )
    return NULL;
    char **result;
    int i=0;
    int j=0;

    result=(char **)malloc(sizeof(char *) *(kelime_sayısı(str,charset))+1);
    if(!result)
    return NULL;
    while(str[i])
    {
        while (str[i] && is_in_charset(str[i],charset))
        i++;
        if(str[i] && !is_in_charset(str[i],charset))
        {
           result[j++]=malloc_word(&str[i],charset);
           while(str[i] && !is_in_charset(str[i],charset))
           i++;
        }
    }
    result[j]=NULL;
    return(result);

}

