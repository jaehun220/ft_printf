/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:34:19 by jaehlee           #+#    #+#             */
/*   Updated: 2025/05/02 19:34:19 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	int	len;
	int	ret;

	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		ret = print_char('-');
		if (check_error(&len, ret) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		ret = print_nbr(n / 10);
		if (check_error(&len, ret) == -1)
			return (-1);
		ret = print_nbr(n % 10);
	}
	else
		ret = print_char(n + '0');
	if (check_error(&len, ret) == -1)
		return (-1);
	return (len);
}
