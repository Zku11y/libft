/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:26:07 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/26 02:11:07 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		start;
	char	**ptr;

	i = 0;
	count = 0;
	start = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i + 1] == '\0'))
			count++;
		i++;
	}
	ptr = malloc(sizeof(char *) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i - 1] != c) || (s[i + 1] == '\0'))
		{
			ptr[count] = malloc(sizeof(char) * (i));
			if (ptr == NULL)
				return (NULL);
			ptr[count] = ft_substr(s, start, i);
			count++;
		}
		if (s[i] != c)
		{
		}
		i++;
	}
	return (NULL);
}
