/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:42:58 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/19 11:43:01 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar (char number)

{
     write(1, &number, 1);
     return 0;
}

void ft_print_number(void)
{
 
	char number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number = number + 1;
	}
}
int main ()
{
	ft_print_number();
	ft_putchar('\n');
	return 0;
}
