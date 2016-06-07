/*
1;2802;0c** main.c for in /home/baptiste/project/generator_h
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Mon May 16 10:48:51 2016
** Last update Tue Jun  7 19:15:32 2016 
*/

#include "data.h"

int		main(void)
{
  t_data	data;

  printf("Entrez une chaine\n");
  if ((data.str_ori  = get_next_line(0)) == NULL)
    {
      printf("[-] Error when read string\n");
      return (EXIT_FAILURE);
    }
  resolv(&data);
  if (create_occ_nb(&data) == -1)
    {
      printf("[-] Error when count char\n");
      return (EXIT_FAILURE);
    }
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
    {
      data->occ_num[i] = count_char(data->str_ori, data->occ_str[i]);
      printf("char = [%c] et nb = %d\n", data->occ_str[i], data->occ_num[i]);
    }
  return (1);
}

int	count_char(char *str, char c)
{
  int	nb = 0, i = -1;

  while (str[++i] != '\0')
    {
      if (str[i] == c)
	nb++;
    }
  return (nb);
}
