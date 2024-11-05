/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:52:57 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/03 17:39:41 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = NULL;
	if(!s1 || !s2)
	{
		if(!s1)
			return (NULL);
		else if(!s2)
			ft_strlcpy(str, s1, sizeof(s1));
		return (str);
	}
	str = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
		str[j++] = (char)s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = (char)s2[i++];
	str[j] = '\0';
	return (str);
}
