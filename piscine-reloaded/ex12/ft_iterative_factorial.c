/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kams <kams@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:51:33 by kams              #+#    #+#             */
/*   Updated: 2026/11/01 15:53:56 by kams             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factorial;
	
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0 || nb == '\0')
	{
		return (0);
	}
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}