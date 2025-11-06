/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:17:04 by anavetis          #+#    #+#             */
/*   Updated: 2024/01/17 14:17:05 by anavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_print_str("(null)");
		return (6);
	}
	while (s[i])
	{
		ft_print_char(s[i]);
		i++;
	}
	return (i);
}