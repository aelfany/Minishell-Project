/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:03:37 by anchaouk          #+#    #+#             */
/*   Updated: 2024/06/12 06:19:07 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/minishell.h" 

int	pwd(t_env *envr)
{
	t_env	*ptr;

	ptr = envr;
	while (ptr)
	{
		if (ft_strcmp(ptr->name, "1PWD") == 0)
		{
			printf("%s\n", ptr->value);
			break ;
		}
		ptr = ptr->next;
	}
	return (0);
}
