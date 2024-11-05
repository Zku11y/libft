/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:53:24 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/04 21:27:10 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		j;
	size_t	i;
	char	*str;

	j = 0;
	i = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len + start >= ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] && i < (start + len))
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
