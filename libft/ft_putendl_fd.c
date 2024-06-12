/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:44:57 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/09 15:08:32 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = count_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
