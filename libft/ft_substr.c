/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:04:20 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/10 12:42:58 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	slen;
	size_t			nlen;

	if (s == NULL)
		return (NULL);
	slen = (unsigned int)ft_strlen(s);
	if (start >= slen)
		return (ft_strdup("\0"));
	nlen = ft_strlen(s + start);
	if (len > nlen)
		len = nlen;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
