/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaymaz <ekaymaz@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:32:05 by ekaymaz           #+#    #+#             */
/*   Updated: 2021/11/29 18:54:26 by ekaymaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)

{
	char	rev_alp;

	rev_alp = 'z';
	while (rev_alp >= 'a')
	{
		ft_putchar(rev_alp);
		rev_alp--;
	}
}
