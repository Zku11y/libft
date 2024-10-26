/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:23:53 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/26 00:39:41 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (ptr = (char *)&s[i]);
		if (c == s[i + 1])
		{
			return (ptr = (char *)&s[i + 1]);
		}
		i++;
	}
	return (NULL);
}
