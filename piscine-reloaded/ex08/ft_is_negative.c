/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:59:47 by kams              #+#    #+#             */
/*   Updated: 2026/10/30 15:03:34 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(int c)
{
	write(1, &c, 1);
	return (0);
}

void ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar(80);
	}
	else
	{
		ft_putchar(78);
	}
}

//int main ()
//{
//	ft_is_negative(-2);
//	ft_is_negative(-20);
//	ft_is_negative(0);
//	ft_is_negative(20);
//}