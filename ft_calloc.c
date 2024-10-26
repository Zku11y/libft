/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:54:46 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/25 23:24:57 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = malloc(count * size);
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
