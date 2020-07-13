/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:15:31 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/13 12:19:32 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_recursive_factorial(int nb)
{
	if (nb == 1)
	{
		return 1;
	}
	else
	{
		return nb * ft_recurive_factorial(nb - 1);
	}
