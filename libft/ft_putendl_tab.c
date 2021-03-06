/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 13:34:44 by mmouhssi          #+#    #+#             */
/*   Updated: 2015/12/10 13:34:48 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		ft_putendl(tab[i]);
		i++;
	}
}
