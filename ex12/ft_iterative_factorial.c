/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:04:46 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/06 12:31:31 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		tmp;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	tmp = nb - 1;
	while (tmp > 1)
		nb *= tmp--;
	return (nb);
}
