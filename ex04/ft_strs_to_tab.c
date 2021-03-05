/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:56:35 by adubeau           #+#    #+#             */
/*   Updated: 2021/03/05 06:02:59 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str(i))
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char*dest;
	int	i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*str;

	if (ac < 0)
		ac = 0;
	i = 0;
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str)
		return (NULL);
	while (i < ac)
	{
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		str[i].size = ft_strlen(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
