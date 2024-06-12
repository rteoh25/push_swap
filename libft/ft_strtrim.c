/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:02:59 by rteoh             #+#    #+#             */
/*   Updated: 2023/10/31 12:00:57 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = 0;
	end = ft_strlen((char *)s1);
	while ((is_in_set(s1[start], set) == 0))
		start++;
	if (start == ft_strlen((char *)s1))
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		else
			return (str);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}
