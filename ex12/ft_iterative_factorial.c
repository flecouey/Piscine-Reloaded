/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:51:46 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/16 14:08:54 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
