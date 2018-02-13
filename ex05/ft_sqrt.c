/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:12:02 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/13 20:41:21 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int power;
	int i;

	power = 0;
	i = 0;
	if (nb <= 0)
		return (0);
	else
		while (power < nb)
		{
			power = power + (2 * i + 1);
			i++;
		}
	if ((power == nb) && (power % nb == 0))
		return (i);
	else
		return (0);
}
