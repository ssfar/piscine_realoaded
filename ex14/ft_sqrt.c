/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:22:55 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/06 12:58:32 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		root;

	if (nb < 1)
		return (0);
	root = 1;
	while (root < nb / root && root * root != nb)
		root++;
	return (root * root == nb ? root : 0);
}