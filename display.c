/*
** display.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed Jun  8 21:51:54 2016
** Last update Thu Jun  9 10:12:45 2016 
*/

#include "data.h"

void show_list_c(t_list *liste)
{
  t_list *tmp;

  tmp = liste;
  while (tmp != NULL)
    {
      printf("[%c] : %d\n", tmp->letter, tmp->val);
      tmp = tmp->nxt;
    }
}
