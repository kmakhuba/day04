/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:59:25 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/25 13:59:49 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (1);
	else if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0 && i != nb)
				return (0);
			else if (i == 2)
				i++;
			else
				i += 2;
		}
	}
	return (1);
}

