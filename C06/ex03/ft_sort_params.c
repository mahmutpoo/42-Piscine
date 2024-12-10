/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapolat <Polatbey395@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 01:37:58 by mapolat           #+#    #+#             */
/*   Updated: 2024/11/25 01:37:59 by mapolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		main(int argc, char *argv[])
{
  int i=1;
  argc--;
  char *temp;
  int j=0;

  while(i< argc)
  {

     if(ft_strcmp(argv[i],argv[i+1]) > 0 &&  i <argc)
     {
      temp=argv[i];
      argv[i]=argv[i+1];
      argv[i+1]=temp;
     i=1;
     }
    i++;
  }
  i=1;
  while (argv[i])
  {
    while(argv[i][j])
    {
      write(1,&argv[i][j],1);
      j++;
    }
    write(1,"\n",1);
    j=0;
    i++;
  }



  return 0;
}
