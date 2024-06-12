/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:32:47 by rteoh             #+#    #+#             */
/*   Updated: 2023/10/31 19:02:49 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	b;
	int		len;
	char	*ptr;

	b = (char)c;
	ptr = (char *)s;
	len = count_strlen((char *)s);
	while (*ptr)
		ptr++;
	while (len-- >= 0)
	{
		if (*ptr == b)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
