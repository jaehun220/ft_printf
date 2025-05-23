/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:34:15 by jaehlee           #+#    #+#             */
/*   Updated: 2025/05/02 19:34:15 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, int check)
{
	int	len;
	int	ret;

	len = 0;
	if (n >= 16)
	{
		ret = print_hex(n / 16, check);
		if (check_error(&len, ret) == -1)
			return (-1);
		ret = print_hex(n % 16, check);
		if (check_error(&len, ret) == -1)
			return (-1);
	}
	else
	{
		if (n <= 9)
			ret = print_char(n + '0');
		else if (check == 'x')
			ret = print_char(n - 10 + 'a');
		else
			ret = print_char(n - 10 + 'A');
		if (check_error(&len, ret) == -1)
			return (-1);
	}
	return (len);
}
