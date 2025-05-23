/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:52:24 by jaehlee           #+#    #+#             */
/*   Updated: 2025/05/02 15:16:34 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "Libft/libft.h"

// 메인 함수
int	ft_printf(const char *format, ...);

// 각 타입별 출력 함수
int	print_char(int c);
int	print_str(const char *s);
int	print_ptr(void *ptr);
int	print_nbr(int n);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned int n, int check);
int	print_pcn(void);

int	check_error(int *len, int ret);

#endif