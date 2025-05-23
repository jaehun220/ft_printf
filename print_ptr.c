/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:34:23 by jaehlee           #+#    #+#             */
/*   Updated: 2025/05/02 19:34:23 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_long(unsigned long n)
{
	int	len;
	int	ret;

	len = 0;
	if (n >= 16)
	{
		ret = print_hex_long(n / 16);
		if (check_error(&len, ret) == -1)
			return (-1);
		ret = print_hex_long(n % 16);
		if (check_error(&len, ret) == -1)
			return (-1);
	}
	else
	{
		if (n <= 9)
			ret = print_char(n + '0');
		else
			ret = print_char(n - 10 + 'a');
		if (check_error(&len, ret) == -1)
			return (-1);
	}
	return (len);
}

int	print_ptr(void *ptr)
{
	unsigned long	addr;
	int				len;

	if (ptr == NULL)
		return (print_str("(nil)"));
	addr = (unsigned long) ptr;
	len = 0;
	len += print_str("0x");
	len += print_hex_long(addr);
	return (len);
}
