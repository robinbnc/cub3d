/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_garbage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberganz <cberganz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:13:27 by cberganz          #+#    #+#             */
/*   Updated: 2022/03/02 22:58:44 by cberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del_garbage(int id)
{
	ft_lstclear(garbage(id), free);
}
