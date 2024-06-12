/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:12:28 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/06 19:44:55 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*h;

	i = 0;
	h = (char *)haystack;
	if (n == 0 && !haystack)
		return (0);
	len = ft_strlen((char *)needle);
	if (len == 0)
		return (h);
	while (h[i] && i < n)
	{
		j = 0;
		while (h[i + j] == needle[j] && i + j < n)
		{
			if (needle[j + 1] == '\0')
				return (h + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
