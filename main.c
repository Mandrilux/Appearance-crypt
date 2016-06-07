/*
** main.c for in /home/baptiste/project/generator_h
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Mon May 16 10:48:51 2016
** Last update Tue Jun  7 18:41:26 2016 
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
  return (EXIT_SUCCESS);
}
