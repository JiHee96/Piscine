/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:57:07 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/04 13:44:18 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	(void)argc;
	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
