/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:32:07 by flecouey          #+#    #+#             */
/*   Updated: 2017/11/16 14:04:33 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	*a;
	int		i;

	a = "abcdefghijklmnopqrstuvwxyz";
	i = 0;
	while (a[i])
	{
		ft_putchar(a[i]);
		i++;
	}
}
