/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:34:27 by jaehlee           #+#    #+#             */
/*   Updated: 2025/05/02 19:34:27 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(const char *str)
{
	int	i;
	int	len ;
	int	ret;

	i = 0;
	len = 0;
	if (!str)
	{
		ret = write(1, "(null)", 6);
		if (ret == -1)
			return (-1);
		len += ret;
		return (len);
	}
	while (str[i] != '\0')
	{
		ret = print_char(str[i]);
		if (ret == -1)
			return (-1);
		len += ret;
		i++;
	}
	return (len);
}
