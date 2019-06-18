/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:55:37 by obouhani          #+#    #+#             */
/*   Updated: 2019/06/10 18:57:37 by obouhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char nb_droite;
	char nb_gauche;

	nb_gauche = 0;
	while (nb_gauche <= 98)
	{
		nb_droite = nb_gauche + 1;
		while (nb_droite <= 99)
		{
			ft_putchar(nb_gauche / 10 + '0');
			ft_putchar(nb_gauche % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nb_droite / 10 + '0');
			ft_putchar(nb_droite % 10 + '0');
			if (nb_gauche != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb_droite++;
		}
		nb_gauche++;
		nb_droite = nb_gauche + 1;
	}
}
