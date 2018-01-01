/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalavan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 14:39:06 by agalavan          #+#    #+#             */
/*   Updated: 2017/10/30 10:29:23 by agalavan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb > 13)
		return (0);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
