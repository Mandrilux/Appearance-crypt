/*
** init.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Thu Jun  9 10:37:41 2016
** Last update Thu Jun  9 10:46:42 2016 
*/

#include "data.h"

t_data		*init_data()
{
  t_data	*data;

  data = malloc(sizeof(t_data) * 1);
  if (data == NULL)
    return (NULL);
  data->str_tmp = NULL;
  data->occ_str = NULL;
  data->occ_num = NULL;
  printf("Entrez une chaine\n");
  if ((data->str_ori  = get_next_line(0)) == NULL)
    {
      printf("[-] Error when read string\n");
      return (NULL);
    }
  return (data);
}
