/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:54:29 by kams              #+#    #+#             */
/*   Updated: 2026/10/30 15:01:40 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(int c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int i;
	i = 48;
	while (i < 58)
	{
		ft_putchar(i);
		i++;
	}
}

//int main ()
//{
//	ft_print_numbers();
//}