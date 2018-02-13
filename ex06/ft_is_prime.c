/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:12:02 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/13 13:17:35 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int restediv;
	int i;

	restediv = 1;
	i = 2;
	if (nb <= 1)
		return (0);
	else
		while ((i <= (nb - 1)) && (restediv != 0))
		{
			restediv = (nb % i);
			if (restediv == 0)
				return (restediv);
			i++;
		}
	return (restediv);
}
