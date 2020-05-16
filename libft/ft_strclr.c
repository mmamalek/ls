/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoyaha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:13:52 by pmoyaha           #+#    #+#             */
/*   Updated: 2019/06/12 14:16:58 by pmoyaha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t len;
	size_t i;

	i = 0;
	if (!s)
	{
		return ;
	}
	len = ft_strlen(s);
	while (len > i)
	{
		s[i] = '\0';
		i++;
	}
}