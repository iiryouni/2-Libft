/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 07:39:35 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/19 17:12:25 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
