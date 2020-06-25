/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkubheka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:22:10 by nkubheka          #+#    #+#             */
/*   Updated: 2020/06/25 13:25:47 by nkubheka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
static int ft_strchar(char to_find, char *str)
{
	char *sprt;
	sprt = str;
	while (*sprt != '\0')
		if (to_find == *sprt++)
			return (1);
	return (0);
}

