/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:56:20 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/13 14:03:45 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int		ft_iterative_power(int nb, int power);
{
	int count;

  	count = 1;
	if (power == 0)
	{
		return 1;
	}
	else if (power > 0)
	{
		while (power > 0)
		{
			count = count * nb;
			power--;
		}
		return count;
	}
}


	
	
