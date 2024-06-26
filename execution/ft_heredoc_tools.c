/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heredoc_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:24:10 by anchaouk          #+#    #+#             */
/*   Updated: 2024/06/12 06:19:07 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/minishell.h"

int	ft_check_hrd(char *token)
{
	if (ft_strcmp(token, "HRD") == 0)
		return (0);
	if (ft_strcmp(token, "HRD_SQ") == 0)
		return (0);
	if (ft_strcmp(token, "HRD_DQ") == 0)
		return (0);
	return (-1);
}

int	ft_exp_check(char *token)
{
	if (ft_strcmp(token, "HRD") == 0)
		return (0);
	return (-1);
}
