/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:46:24 by hmartzol          #+#    #+#             */
/*   Updated: 2017/01/03 14:47:11 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_argn	*argn(void)
{
	static t_argn	argn;

	return (&argn);
}
