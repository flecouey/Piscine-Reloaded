/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 13:38:27 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/16 14:41:03 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	*chiffres;
	int		i;

	chiffres = "0123456789";
	i = 0;
	while (chiffres[i])
	{
		ft_putchar(chiffres[i]);
		i++;
	}
}
