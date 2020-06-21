/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:33:17 by mumiller          #+#    #+#             */
/*   Updated: 2020/06/21 09:50:53 by mumiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char n);
void ft_print_alphabet(void);

int main()
{

	ft_print_alphabet();
		return 0;
}
int ft_putchar(char n)
{
	write(1,&n,1);
	return 0;
}
void ft_print_alphabet(void)
{
	char c ='a';
	while(c <= 'z')
	{
		ft_putchar(c++);
	}
	ft_putchar('\n');



}
