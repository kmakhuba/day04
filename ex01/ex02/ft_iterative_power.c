/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:52:04 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/25 13:52:38 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}


