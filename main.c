/*
** main.c for  in /home/baptiste/project/generator_h
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Mon May 16 10:48:51 2016
** Last update Tue Jun  7 18:03:53 2016 
*/

#include "data.h"

int		main(void)
{
  char	*str;

  printf("Entrez une chaine\n");
  if ((str  = get_next_line(0)) == NULL)
    {
      printf("[-] Error when read string\n");
      return (EXIT_FAILURE);
    }
  return (1);
}
