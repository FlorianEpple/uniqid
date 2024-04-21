/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stds.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flepple <info@florianepple.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:34:14 by flepple           #+#    #+#             */
/*   Updated: 2024/04/21 21:02:42 by flepple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stds.h"

int	fje_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*fje_strdup(char *str)
{
	char	*dup;
	int		i;

	dup = (char *)malloc((fje_strlen(str) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = -1;
	while (str[++i] != '\0')
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}

int	fje_suitable(char *str, char *charset)
{
	int	i;
	int	j;
	int	f;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		f = 0;
		while (charset[j] != '\0')
			if (str[i] == charset[j++])
			{
				f = 1;
				break ;
			}
		if (f == 0)
			return (0);
		i++;
	}
	return (1);
}

int	fje_isspace(char c)
{
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}
