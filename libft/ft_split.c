/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:32:21 by rteoh             #+#    #+#             */
/*   Updated: 2024/06/05 06:44:15 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != '\0' && str[i] != c)
				i++;
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static	void	ft_freenup(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static	void	ft_strcpy(char *word, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		word[i] = str[j + i];
		i++;
	}
	word[i] = '\0';
}

static char	*ft_stralloc(char *str, char c, int *k)
{
	char	*word;
	int		j;
	int		i;

	j = *k;
	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	ft_strcpy(word, str, c, j);
	*k = j + i;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	size_t	pos;
	char	**str;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = count_words(s, c);
	pos = 0;
	str = (char **)malloc(sizeof(char *) * (j + 1));
	if (str == NULL)
		return (NULL);
	str[j] = NULL;
	while (i < j)
	{
		str[i] = ft_stralloc(((char *)s), c, (int *)&pos);
		if (str[i] == NULL)
		{
			ft_freenup(&str[i]);
			return (NULL);
		}
		i++;
	}
	return (str);
}
