/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlepron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 17:43:01 by vlepron           #+#    #+#             */
/*   Updated: 2016/08/09 13:20:24 by vlepron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 47)
		return (0);
	if (index > 1)
		index = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index < 0)
		return (-1);
	return (index);
}
