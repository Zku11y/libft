/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:29:24 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/04 21:28:04 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}
void	free_mem(char **answer, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(answer[i++]);
	free(answer);
}

char	**insert_word(char **answer, size_t count, char const *s, char c)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	while (index < count)
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			return (answer);
		answer[index] = ft_substr(s, i, size_word(s + i, c));
		if (answer[index] == NULL)
		{
			free_mem(answer, index);
			return (NULL);
		}
		i += size_word(s + i, c);
		index++;
	}
	return (answer);
}

char	**ft_split(char const *s, char c)
{
	char	**answer;
	int		i;
	size_t	count;

	if (!s)
		return (NULL);
	i = 0;
	count = count_word(s, c);
	answer = malloc(sizeof(char *) * (count + 1));
	if (answer == NULL)
		return (NULL);
	answer[count] = NULL;
	return (insert_word(answer, count, s, c));
}

// int	i;
// int	size;
// size_t	arr_index;

// i = 0;
// arr_index = 0;
// while (arr_index < count)
// {
// 	size = size_word(s + i, c);
// 	answer[arr_index] = malloc(size + 1);
// 	if (answer[arr_index] == NULL)
// 	{
// 		free_mem(answer, arr_index);
// 		return (NULL);
// 	}
// 	while (s[i] != c && s[i])
// 	{
// 		*answer[arr_index] = s[i];
// 		i++;
// 	}
// 	*answer[arr_index++] = '\0';
// 	while (s[i] == c && s[i])
// 		i++;
// }
// return (answer);

// int main() {
//     const char *str = "Hello,world,this,is,a,test";
//     char delimiter = ',';

//     // Call the ft_split function
//     char **result = ft_split(str, delimiter);

//     // Print the results
//     if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("Word %d: %s\n", i, result[i]);
//         }
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }
// static int	word_count(char const *s, char c)
// {
// 	int	i;
// 	int	count;

// 	if(!s)
// 		return (NULL);
// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			while (s[i] != c && s[i] != '\0')
// 				i++;
// 			count++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (count + 1);
// }

// static void	*free_mem(char **result, int count)
// {
// 	int	i;

// 	i = 0;
// 	while (i <= count)
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (NULL);
// }

// static void	insert_words(char **result, int count, char const *s, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != c && s[i] != '\0')
// 	{
// 		result[count][i] = s[i];
// 		i++;
// 	}
// 	result[count][i] = '\0';
// }

// static int	word_size(char const *s, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != c && s[i] != '\0')
// 		i++;
// 	return (i + 1);
// }

// char	**ft_split(char const *s, char c)
// {
// 	int		count;
// 	char	**result;
// 	int		i;

// 	count = 0;
// 	result = malloc(word_count(s, c) * sizeof(char *));
// 	if (result == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (count < word_count(s, c) - 1 && s[i] != '\0')
// 	{
// 		if (s[i] != c && s[i] != '\0')
// 		{
// 			result[count] = malloc(word_size(s + i, c));
// 			if (result[count] == NULL)
// 				return (free_mem(result, count));
// 			insert_words(result, count, s + i, c);
// 			count++;
// 			i = i + word_size(s + i, c);
// 		}
// 		else
// 			i++;
// 	}
// 	result[count] = NULL;
// 	return (result);
// }
