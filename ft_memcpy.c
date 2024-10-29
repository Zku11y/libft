/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:46:40 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/28 08:12:48 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (n)
	{
		*destination++ = *source++;
		n--;
	}
	return (dst);
}
