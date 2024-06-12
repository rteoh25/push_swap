/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:40:38 by rteoh             #+#    #+#             */
/*   Updated: 2023/11/06 13:34:58 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_number_size(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += 1;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_gen(char *str, long n, int len)
{
	long	num;

	if (n != 0)
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		return (str = ft_strdup("0"));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	len = ft_number_size(n);
	num = n;
	str = 0;
	str = ft_gen(str, num, len);
	if (str == NULL)
		return (0);
	return (str);
}
