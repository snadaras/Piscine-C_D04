/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:12:02 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/13 23:01:01 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int limit;
	int j;

	limit = 2 * nb;
	if (nb <= 2)
		return (2);
	else
	{
		j = nb - 1;
		while (((nb % j) != 0) && (j != 2))
		{
			j--;
		}
	}
	if ((nb % j) == 0 && nb < limit)
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
