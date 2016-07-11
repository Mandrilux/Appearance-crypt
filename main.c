/*
1;2802;0c** main.c for in /home/baptiste/project/generator_h
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Mon May 16 10:48:51 2016
** Last update Mon Jul 11 09:32:52 2016 
*/

#include "data.h"

int		main(int ac, char **av)
{
  t_data	*data;
  int		nb_space;
  int		*tmp;
  int		i = -1;
  t_list *l_a = NULL;
  (void) ac;
  (void) av;

  if ((data = init_data()) == NULL)
    return (EXIT_FAILURE);
  resolv(data);
  if (create_occ_nb(data) == -1)
    return (display_error("[-] Error when count char\n"));
  if ((nb_space = count_char(data->str_ori, ' ')) > 0)
    {
      if ((tmp = malloc(sizeof(int) * (strlen(data->occ_str) + 1))) == NULL)
	  return (display_error("[-] Error memory\n"));
      while (++i < (int)strlen(data->occ_str))
	tmp[i] = data->occ_num[i];
      tmp[i] = nb_space;
      free(data->occ_num);
      data->occ_num = tmp;
      data->occ_str = my_strmcat(data->occ_str, my_strdup(" "));
    }
  i = -1;
  while (data->occ_str[++i] != '\0')
    add_first(&l_a, data->occ_num[i], data->occ_str[i]);
  sort(&l_a, strlen(data->occ_str));
  show_list_c(l_a);
  free_list(&l_a);
  return (EXIT_SUCCESS);
}

int	create_occ_nb(t_data *data)
{
  int	len;
  int	i = -1;

  len = strlen(data->occ_str);
  if ((data->occ_num = malloc(sizeof(int) * len)) == NULL)
    return (-1);
  if (data->occ_str == NULL)
    return (-1);
  while (data->occ_str[++i] != '\0')
    data->occ_num[i] = count_char(data->str_ori, data->occ_str[i]);
  return (1);
}
