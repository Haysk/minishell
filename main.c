/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-temm <ade-temm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:26:48 by adylewsk          #+#    #+#             */
/*   Updated: 2021/11/26 07:12:21 by ade-temm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/minishell.h"

void	interpret_command(char *command)
{
	printf("la commande : %s\n", command);
}
 //clear history : rl_clear_history();
 //print l'env : printf("%s\n", *(env->g_env));

int		main(int ac, char **av, char **envp)
{
	char	*command;
	t_datas	*datas;

	(void)ac;
	(void)av;
	using_history();
	datas = (t_datas *)malloc(sizeof(t_datas));
	datas->env = envp;
	printf("%s\n", relative_path("", datas->env));
	while (1)
	{
		command = readline("Minishell $> ");
		add_history(command);
		interpret_command(command);
	}
	free(datas);
	free(command);
}