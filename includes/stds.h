/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stds.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flepple <info@florianepple.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:46:32 by flepple           #+#    #+#             */
/*   Updated: 2024/04/21 21:03:06 by flepple          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#ifndef STDS_H
# define STDS_H

// functions

int		fje_strlen(char *);
char	*fje_strdup(char *);
int		fje_suitable(char *, char *);
int		fje_isspace(char);

#endif // STDS_H
