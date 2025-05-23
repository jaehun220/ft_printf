/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:34:30 by jaehlee           #+#    #+#             */
/*   Updated: 2025/05/02 19:34:30 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	int	len;
	int	ret;

	len = 0;
	if (n >= 10)
	{
		ret = print_unsigned(n / 10);
		if (ret == -1)
			return (-1);
		len += ret;
		ret = print_unsigned(n % 10);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	else
	{
		ret = print_char(n + '0');
		if (ret == -1)
			return (-1);
		len += ret;
	}
	return (len);
}
