/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:53:24 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/25 23:27:24 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				j;
	unsigned int	i;
	char			*ptr;

	j = 0;
	i = start;
	ptr = malloc((sizeof(char) * len) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s[i] && (size_t)i <= (start + len))
	{
		ptr[j] = s[i];
		j++;
		i++;
	}
	free(ptr);
	return (ptr);
}
