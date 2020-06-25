/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmakhuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:47:35 by kmakhuba          #+#    #+#             */
/*   Updated: 2020/06/25 13:48:17 by kmakhuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_factorial(int nb)
{
	int	i;
	int result;

	i = 1;
	result = 1;
	if ((nb > 12 || nb < 0))
		return (0);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}

