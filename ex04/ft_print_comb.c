/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:08:04 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/19 15:03:10 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	
       write(2,&c,1);
		return  0;
}

void ft_print_comb(void);
int ft_putchar(char c);


void ft_print_comb(void)
{	

	char first;
	char second;
	char third;

	first = '0' - 1;
	while(++first <= '9')
	{
		second = first;
		while (++second <= '9')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (first != '7' || second != '8' || third != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');	
				}		

				third++;
			}
		}	
	}
}	
int main()
{
  ft_print_comb();
}	

























