/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:45:54 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/04 21:27:20 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static size_t	ft_size(char const *s1, char const *set, size_t start)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]) != NULL)
		i--;
	return (i - start + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (!s1)
		return (NULL);
	start = ft_start(s1, set);
	len = ft_size(s1, set, start);
	if (ft_strlen(s1) == start)
		return (ft_strdup(""));
	return (ft_substr(s1, start, len));
}
