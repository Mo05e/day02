/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:32:40 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/19 13:29:49 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n);
int ft_putchar(char n); 
int main()
{ 
  int n;
  n = 3;  
  ft_is_negative(n);
  return 0;
}	

int ft_putchar(char n) 
{
 write(1,&n,1);
 return 0;
}	

void ft_is_negative(int n)
{
   if (n < 0 )
	 {
	   write(1,"N",1);
	 } 
   else
    {
	  write(1,"P",1);
	} 

    ft_putchar('\n');

}	
