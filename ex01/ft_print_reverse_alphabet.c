/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:41:32 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/19 11:41:43 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char n);
void ft_print_reverse_alphabet(void);

int main()
{
	ft_print_reverse_alphabet();

	return 0;

}

int ft_putchar(char n)
{
	write(1,&n,1);
		return 0;
}
void ft_print_reverse_alphabet(void)
{
	char c = 'z';
	while(c >= 'a')
	{
		ft_putchar(c--);
	}
	ft_putchar('\n');

}
