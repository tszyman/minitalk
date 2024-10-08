/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomek <tomek@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:25:26 by tomek             #+#    #+#             */
/*   Updated: 2024/08/13 23:02:48 by tomek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_printchar((int)*str);
		i++;
		str++;
	}
	return (i);
}
