/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 01:05:15 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/04 13:08:49 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long num;
	long long i;

	num = nb;
	i = 2;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	while (i <= ((nb / i) + 1))
	{
		if (i * i == num)
			return (i);
		i++;
	}
	return (0);
}
