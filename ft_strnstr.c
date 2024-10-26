/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:26:56 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/25 23:27:00 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i = 0, j;
	char	*ptr;

	if (!needle)
	{
		return ((char *)haystack);
	}
	i = 0, j = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			ptr = (char *)&haystack[i];
			while ((haystack[i] == needle[j]) && ((size_t)j <= len)
				&& (haystack[i] && needle[j]))
			{
				i++;
				j++;
			}
			if (needle[j] == '\0' || (size_t)j == len)
				return (ptr);
			else
			{
				j = 0;
			}
		}
		i++;
	}
	return (NULL);
}
