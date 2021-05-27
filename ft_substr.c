/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:08:52 by smagdela          #+#    #+#             */
/*   Updated: 2021/05/27 15:34:10 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs || s == NULL)
		return (NULL);
	i = 0;
	while (i < len && (start + i) < ft_strlen(s))
	{
		subs[i] = s[start + i];
		++i;
	}
	subs[i] = '\0';
	return (subs);
}