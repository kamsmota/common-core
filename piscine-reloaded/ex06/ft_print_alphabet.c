/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:57:44 by kams              #+#    #+#             */
/*   Updated: 2026/10/30 14:06:26 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(int c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;

	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
}

//int main ()
//{
//	ft_print_alphabet();
//}