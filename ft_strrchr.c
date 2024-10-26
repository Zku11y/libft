/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:24:12 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/25 23:27:07 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			ptr = (char *)&s[i];
		if (c == s[i + 1])
			ptr = (char *)&s[i + 1];
		i++;
	}
	if (ptr)
		return (ptr);
	return (NULL);
}
