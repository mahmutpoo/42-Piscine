/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:36:55 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:36:57 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/* 0 1 1  2 3 5 8 13 21*/
int ft_fibonacci(int index)
{

  if (index< 0)
  return -1;
  else if(index ==0)
  return(0);
  else  if(index == 1 )
  return 1;
 return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);

}

/*
ft_fibonacci(4)
|
|--> ft_fibonacci(3) ==2
|    |
|    |--> ft_fibonacci(2)
|    |    |
|    |    |--> ft_fibonacci(1) = 1
|    |    |--> ft_fibonacci(0) = 0
|    |
|    |--> ft_fibonacci(1) = 1
|
|--> ft_fibonacci(2) ==1
     |
     |--> ft_fibonacci(1) = 1
     |--

*/
