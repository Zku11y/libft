/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:29:24 by mdakni            #+#    #+#             */
/*   Updated: 2024/10/29 13:07:01 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		else
			i++;
	}
	return (count + 1);
}

void	*free_mem(char **result, int count)
{
	int	i;

	i = 0;
	while (i <= count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

void	insert_words(char **result, int count, char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		result[count][i] = s[i];
		i++;
	}
	result[count][i] = '\0';
}

int	word_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i + 1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;
	int		i;

	count = 0;
	result = malloc(word_count(s, c) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (count < word_count(s, c) - 1 && s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			result[count] = malloc(word_size(s + i, c));
			if (result[count] == NULL)
				return (free_mem(result, count));
			insert_words(result, count, s + i, c);
			count++;
			i = i + word_size(s + i, c);
		}
		else
			i++;
	}
	result[count] = NULL;
	return (result);
}
