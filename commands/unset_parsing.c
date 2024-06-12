/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:55:46 by anchaouk          #+#    #+#             */
/*   Updated: 2024/06/12 06:19:07 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/minishell.h"

int	ft_unset_help(char *env, int i)
{
	if (env[0] == '\0')
		return (-1);
	while (env[i] && env[i] != '=')
	{
		if (env[i] == ' ' || env[i] == '\t')
			return (-1);
		i++;
	}
	if ((env[0] >= 48 && env[0] <= 57))
		return (-1);
	return (0);
}

int	ft_unset_parser(char *env)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (ft_unset_help(env, i) == -1)
		return (-1);
	while (env[i])
	{
		if (((env[i] >= 97 && env[i] <= 122) || (env[i] >= 65 && env[i] <= 90)))
			flag = 0;
		else if ((env[i] >= 48 && env[i] <= 57))
			flag = 0;
		else if (env[i] == '_')
			flag = 0;
		else
			break ;
		i++;
	}
	if (env[i] != '\0')
		return (-1);
	return (0);
}
