/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:20:40 by jaehlee           #+#    #+#             */
/*   Updated: 2025/05/16 18:20:40 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_error(int *len, int ret)
{
	if (ret == -1)
		return (-1);
	*len += ret;
	return (ret);
}
