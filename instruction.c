/*
** instruction.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Wed Jun  8 22:53:14 2016
** Last update Thu Jun  9 08:00:04 2016 
*/


#include "data.h"

void swap(t_list **liste)
{
  t_list *tmp2;
  t_list *save;

  save = (*liste)->nxt->nxt;
  tmp2 = *liste;
  *liste = (*liste)->nxt;
  (*liste)->nxt = tmp2;
  (*liste)->nxt->nxt = save;
}

void	rotate_left(t_list **liste)
{
  t_list	*tmp;

  tmp = *liste;
  while (tmp->nxt != NULL)
    tmp = tmp->nxt;
  tmp->nxt = *liste;
  *liste = (*liste)->nxt;
  tmp->nxt->nxt =NULL;
}

void free_list(t_list **liste)
{
  t_list *tmp;
  t_list *tampon;

  tmp = *liste;
  while (tmp->nxt != NULL)
    {
      tampon = tmp;
      tmp = tmp->nxt;
      free(tampon);
    }
  free(tmp);
}
